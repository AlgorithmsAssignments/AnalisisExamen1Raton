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

void BinaryNode::balance_nodes(BinaryNode* node)
{

  if(node->left_child != NULL && node->value < node->left_child->value)
  {
    BinaryNode* root_left = node->left_child;
    BinaryNode* root_right = node->right_child;

    BinaryNode* new_root_left = root_left->left_child;
    BinaryNode* new_root_right = root_left->right_child;

    root_left->left_child = node;
    root_left->right_child = root_right;

    node->left_child = new_root_left;
    node->right_child = new_root_right;

    balance_nodes(node);
    balance_nodes(root_left);
    return;
  }

  if(node->right_child != NULL && node->value < node->right_child->value)
  {
    BinaryNode* root_left = node->left_child;
    BinaryNode* root_right = node->right_child;

    BinaryNode* new_root_left = root_right->left_child;
    BinaryNode* new_root_right = root_left->right_child;

    root_right->right_child = node;
    root_right->left_child = root_left;

    node->left_child = new_root_left;
    node->right_child = new_root_right;

    balance_nodes(node);
    balance_nodes(root_right);
    return;
  }
}

bool BinaryNode::insert_node(int value)
{
  if(this->left_child == NULL)
  {
    this->left_child = new BinaryNode(value);
    balance_nodes(this);
    return true;
  }

  if(this->right_child == NULL)
  {
    this->right_child = new BinaryNode(value);
    balance_nodes(this);
    return true;
  }

  bool inserted = this->left_child->insert_node(value);
  if(!inserted)
  {
      return this->right_child->insert_node(value);
  }

  return false;
}
