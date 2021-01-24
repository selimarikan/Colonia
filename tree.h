#pragma once

#include <vector>

template <typename T>
struct Node
{
    T data;
    Node *pParent = nullptr;
    std::vector<Node *> children;
};

template <typename T>
struct Tree
{
    Node<T> root;

    // ?
    void Insert(Node<T> *pParent, Node<T> *pNode)
    {
        pParent->children.emplace_back(pNode);
    }
};
