TC  : O(N)
SC  : O(N)


#include <bits/stdc++.h>
#include "node.h";
using namespace std;

/*class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};*/

class solution{
    public:
    vector<int> levelorder(Node* root) {
      vector<int> ans;
      if(root == nullptr) return ans;
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
          int length = q.size();
          while(length--){
              Node* temp = q.front();
              q.pop();
              if(temp->left) q.push(temp->left);
              if(temp->right) q.push(temp->right);
              ans.push_back(temp->data);
          }
      }
      return ans;
      
    }
};


// without inner while loop    ( the while loop is used if we asked the each level of elements in the format vector<vector<int>>

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      vector<int> ans;
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
          Node* temp = q.front();
          q.pop();
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
          ans.push_back(temp->data);
      }
      return ans;
    }
};
