#ifndef BIANRYNODE_H
#define BIANRYNODE_H
#include <iostream>
using namespace std;

class BinaryNode
{
public:
  int value;
  BinaryNode* left_child;
  BinaryNode* right_child;

  BinaryNode();
  BinaryNode(int value);
  bool insert_node(int value);
  void balance_nodes(BinaryNode* node);
};

#endif
