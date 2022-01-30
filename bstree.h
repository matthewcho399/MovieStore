// ------------------------------------------------ BSTree.h --------------------------------------------------------
// Matthew Cho CSS 343 B
// May 27, 2021
// June 10, 2021
// --------------------------------------------------------------------------------------------------------------------
// Purpose - This program creates a binary search tree along with some additional functions.
// -------------------------------------------------------------------------------------------------------------------- 
#ifndef BSTREE_H_
#define BSTREE_H_
#include "movie.h"
#include <iostream> 
#include <iomanip>
using namespace std;

class BSTree
{
public: 
    BSTree();
    ~BSTree();

    void makeEmpty();
    bool insert(Movie*);
    void displaySideways() const;
    Movie* retrieve(const Movie*) const;
    bool retrieveMovie(const Movie&, Movie*&) const;
    void inorder() const;

private: 
    struct Node
    {
        Movie* data;
        Node* left;
        Node* right;
    };
    Node* root;

    void emptyHelper(Node*&);
    bool insertHelper(Node*&, Movie*);
    void sideways(Node*, int) const;
    Movie* retrieveHelper(const Movie*, Node*) const;
    bool retrieveMovieHelper(const Movie&, Movie*&, Node*) const;
    void inorderHelper(Node*) const;
};

#endif