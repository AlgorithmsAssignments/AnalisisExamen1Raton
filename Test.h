#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "BinaryNode.h"
using namespace std;

void test();
bool exists(vector<int> avl_tree, int number);
BinaryNode* convertToLinkedTree(vector<int> max_heap);

class Map;

#endif // EVALUADOR_H
