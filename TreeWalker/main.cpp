//
//  main.cpp
//  TreeWalker
//
//  Created by Alexey on 12/10/13.
//  Copyright (c) 2013 Alexey. All rights reserved.
//

#include <fstream>
#include <memory>
#include <stack>


struct node {
    node() : n(0), left(0), right(0), level(0) {}
    int n;
    struct node *left;
    struct node *right;
    struct node *level;
    
};


std::shared_ptr<std::ifstream> is;
//std::stack<node*> layer_stack;


void linkSameLevel(struct node *t) {
    static std::stack<node*> layer_stack;
    if(!layer_stack.empty()) {
        (layer_stack.top())->level = t;
        layer_stack.pop();
    }
    if((t)->left) {
        linkSameLevel((t)->left);
    }
    if((t)->right) {
        linkSameLevel((t)->right);
    }
    layer_stack.push(t);
}


void loadTree(node* head) {
    int left = 0;
    int right = 0;
    int value = 0;
    *is >> value >> left >> right;
    if(value) {
        head->n = value;
    }
    if(left) {
        head->left = new node;
        loadTree(head->left);
    }
    if(right) {
        head->right = new node;
        loadTree(head->right);
    }
}


int main(int argc, const char * argv[])
{
    is = std::make_shared<std::ifstream>("input.txt", std::ifstream::in);
    node* head = new node;
    loadTree(head);
    linkSameLevel(head);
    return 0;
}

