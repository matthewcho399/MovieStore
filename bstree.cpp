// ------------------------------------------------ BSTree.cpp --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This program creates a binary search tree along with some additional functions.
// -------------------------------------------------------------------------------------------------------------------- 
#include "bstree.h"
#include <iostream> 
#include <iomanip>
using namespace std;

BSTree::BSTree()
{
    root = NULL;
}

BSTree::~BSTree()
{
    makeEmpty();
}

void BSTree::makeEmpty()
{
    emptyHelper(root);
}

void BSTree::emptyHelper(Node*& node)
{
    if (node != NULL)
    {
        emptyHelper(node->left);
        emptyHelper(node->right);
        delete node->data;
        node->data = NULL;
        delete node;
        node = NULL;
    }
}

bool BSTree::insert(Movie* newNode)
{
    return insertHelper(root, newNode);
}

bool BSTree::insertHelper(Node*& tree, Movie* movieData)
{
    if (tree == NULL)
    {
        tree = new Node;
        tree->data = movieData;
        tree->left = NULL;
        tree->right = NULL;
        return true;
    }
    else if (*movieData < *tree->data)
    {
        return insertHelper(tree->left, movieData);
    }
    else if (*tree->data < *movieData)
    {
        return insertHelper(tree->right, movieData);
    }
    else
    {
        return false;
    }
    return false;
}

void BSTree::displaySideways() const
{
    sideways(root, 0);
}

void BSTree::sideways(Node* current, int level) const
{
    if (current != NULL) 
    {
		level++;
		sideways(current->right, level);

		// indent for readability, 4 spaces per depth level 
		for (int i = level; i >= 0; i--) 
        {
			cout << "    ";
		}

		cout << current->data << endl;
		sideways(current->left, level);
	}
}

Movie* BSTree::retrieve(const Movie* movieData) const
{
    return retrieveHelper(movieData, root);
}

Movie* BSTree::retrieveHelper(const Movie* movieData, Node* node) const
{
    if (node == NULL)
    {
        return NULL;
    }
    else if (*movieData == *node->data)
    {
        return node->data;
    }
    else if (*movieData < *node->data)
    {
        return retrieveHelper(movieData, node->left);
    }
    else 
    {
        return retrieveHelper(movieData, node->right);
    }
}

bool BSTree::retrieveMovie(const Movie& movieData, Movie*& movieNode) const
{
    return retrieveMovieHelper(movieData, movieNode, root);
}

bool BSTree::retrieveMovieHelper(const Movie& movieData, Movie*& movieNode, Node* node) const
{
    if (node == NULL)
    {
        return false;
    }
    if (movieData < *node->data && node->left != NULL)
    {
        return retrieveMovieHelper(movieData, movieNode, node->left);
    }
    else if (*node->data < movieData && node->right != NULL)
    {
        return retrieveMovieHelper(movieData, movieNode, node->right);
    }
}

void BSTree::inorder() const
{
    inorderHelper(root); 
    cout << endl;
}

void BSTree::inorderHelper(Node* node) const
{
    if (root != NULL)
    {
        inorderHelper(node->left);
        cout << setw(2) << node->data->getStock(); 
        node->data->display();
        inorderHelper(node->right);
    }
}