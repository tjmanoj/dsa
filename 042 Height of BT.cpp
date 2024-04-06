//TC  : O(N)
//SC  : (H)      for worst case O(N) i.e if the tree is skewed meand height = no's nodes

#include<bits/stdc++.h>
#include "node.h"
using namespace std;

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};
*/

class solution {
public:
    int heightOfBinaryTree(Node* root) {
      if(root == NULL) return 0;
      int left_height = heightOfBinaryTree(root->left);
      int right_height = heightOfBinaryTree(root->right);
      
      return 1 + max(left_height, right_height);
    }

};
