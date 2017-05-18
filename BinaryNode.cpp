#include "BinaryNode.h"

BinaryNode::BinaryNode()
{
  this->value = 0;
  left_child = NULL;
  right_child = NULL;
}

BinaryNode::BinaryNode(int value)
{
  this->value = value;
  left_child = NULL;
  right_child = NULL;
}
