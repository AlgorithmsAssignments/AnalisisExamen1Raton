#include "Test.h"
#include "Map.h"

void test()
{
  Map map;
  map.put("A",10);
  map.put("B",20);
  map.put("C",30);
  map.put("arroz",100);
  map.put("zorra",5);
  map.put("abc",1);
  map.put("acb",2);
  map.put("bac",3);

  if(map.get("A")==10
     && map.get("B")==20
     && map.get("C")==30
     && map.get("arroz")==500
     && map.get("zorra")==500
     && map.get("abc")==6
     && map.get("acb")==6
     && map.get("bac")==6
     )
  {
      cout<<"Hash Map:\t\tPass"<<endl;
  }else
  {
      cout<<"Hash Map:\t\tFail"<<endl;
  }

  int array_avl1[] = { 50, 20, 100, 10, 30, 70, 200};
  std::vector<int> vector_avl1( array_avl1, array_avl1+7 );

  int array_avl2[] = { 1000, 500, 2000, 100, 750, 1500, 3000, 10, 120, 700};
  std::vector<int> vector_avl2( array_avl2, array_avl2+10 );

  if(exists(vector_avl1, 10)
     && exists(vector_avl1, 70)
     && exists(vector_avl1, 50)
     && exists(vector_avl1, 200)
     && !exists(vector_avl1, 75)
     && !exists(vector_avl1, 300)

     && exists(vector_avl2, 750)
     && exists(vector_avl2, 700)
     && exists(vector_avl2, 3000)
     && exists(vector_avl2, 10)
     && !exists(vector_avl2, 888)
     && !exists(vector_avl2, 710)
     && !exists(vector_avl2, 4000)
     )
  {
      cout<<"exists():\t\tPass"<<endl;
  }else
  {
      cout<<"exists():\t\tFail"<<endl;
  }

  int heap_array1[] = { 100, 20, 10, 8, 5};
  std::vector<int> heap_vector1( heap_array1, heap_array1+5 );

  int heap_array2[] = { 1000, 100, 200, 50, 30, 10, 20, 1, 2, 3};
  std::vector<int> heap_vector2( heap_array2, heap_array2+10 );

  BinaryNode* binary_node1 = convertToLinkedTree(heap_vector1);
  BinaryNode* binary_node2 = convertToLinkedTree(heap_vector2);

  if(binary_node1
     && binary_node1->value == 100
     && binary_node1->left_child->value == 20
     && binary_node1->right_child->value == 10
     && binary_node1->left_child->left_child->value == 8
     && binary_node1->left_child->right_child->value == 5
     && !binary_node1->right_child->left_child
     && !binary_node1->right_child->right_child
     && !binary_node1->left_child->left_child->left_child
     && !binary_node1->left_child->left_child->right_child
     && !binary_node1->left_child->right_child->left_child
     && !binary_node1->left_child->right_child->right_child

     && binary_node2
     && binary_node2->value == 1000
     && binary_node2->left_child->right_child->value == 30
     && binary_node2->right_child->right_child->value == 20
     && binary_node2->left_child->left_child->left_child->value == 1
     && binary_node2->left_child->left_child->right_child->value == 2
     && binary_node2->left_child->right_child->left_child->value == 3
     && !binary_node2->right_child->right_child->right_child
     && !binary_node2->left_child->right_child->right_child
    )
  {
      cout<<"convertToLinkedTree():\tPass"<<endl;
  }else
  {
      cout<<"convertToLinkedTree():\tFail"<<endl;
  }


}
