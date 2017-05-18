#include "Test.h"
#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

bool search_value_in_avl(vector<int> avl_tree, int number, unsigned int index)
{
  //left = 2*i + 1
  //right = 2*i + 2
  unsigned int tree_size = avl_tree.size();
  if(index >= tree_size)
  {
    return false;
  }

  int curr_value = avl_tree[index];

  if(curr_value == number)
  {
    return true;
  }

  unsigned int left_index = 2*index + 1;
  if(number < curr_value)
  {
    return search_value_in_avl(avl_tree, number, left_index);
  }
  unsigned int right_index = 2*index + 2;
  if(number > curr_value)
  {
    return search_value_in_avl(avl_tree, number, right_index);
  }

  return false;
}

bool exists(vector<int> avl_tree, int number)
{
  return search_value_in_avl(avl_tree, number, 0);
}


//printInorder func from: http://www.geeksforgeeks.org/construct-binary-tree-from-inorder-traversal/
void printInorder(BinaryNode* node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    cout<<"Node: "<<node->value<<" ";
    if(node->left_child != NULL)
      cout<<"Left son: "<<node->left_child->value;

    if(node->right_child != NULL)
      cout<<" Right son: "<<node->right_child->value<<endl;
    printInorder (node->left_child);
    /* then print the data of node */
    /* now recur on right child */
    printInorder (node->right_child);
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  int initial_value = 0;
  if(max_heap.size() > 0){
    initial_value = max_heap[0];
  }
  BinaryNode* tree = new BinaryNode(initial_value);
  for(unsigned int i = 1; i < max_heap.size(); ++i)
  {
    // cout<<max_heap[i]<<endl;
    tree->insert_node(max_heap[i]);
  }
  printInorder(tree);
  cout<<endl<<endl;
  return tree;
}

int main ()
{
  test();
  return 0;
}
