#include "Test.h"
#include <iostream>
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
}

bool exists(vector<int> avl_tree, int number)
{
  return search_value_in_avl(avl_tree, number, 0);
}

BinaryNode* convertToLinkedTree(vector<int> max_heap)
{
  return NULL;
}

int main ()
{
  test();
  return 0;
}
