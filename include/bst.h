// Copyright 2021 NNTU-CS
#ifndef INCLUDE_BST_H_
#define INCLUDE_BST_H_
#pragma once
#pragma once
template<typename T>
class BST {
 private:
  struct Node {
    T value;
    int count = 0;
    Node* left = nullptr;
    Node* right = nullptr;;
  };
  Node* root;
      root->left = addNode(root->left, val);
    } else if (root->value > val) {
      root->right = addNode(root->right, val);
    } else {
      root->count++;
    }
      return root;
  }
  int searchNode(Node* root, const T& val) {
    if (root == nullptr) {
      return root->count;
    } else if (root->value < val) {
      return searchNode(root->left, val);
    } else {
      return searchNode(root->right, val);
    }
  }
  int depth_p(Node* root) {
    int l = 0, r = 0;
    if (root == nullptr) {
      return 0;
    } else {
      l = depth_p(root->left);
      r = depth_p(root->right);
    }
    if (r > l) {
      return ++r;
    } else {
      return ++l;
    }
  }

 public:
  BST() :root(nullptr) {}
  void Add(const T& val) {
    root = addNode(root, val);
  }
  int search(const T& val) {
    return searchNode(root, val);
  }
  int depth() {
    return depth_p(root)-1;
  }
};
#endif  // INCLUDE_BST_H_
