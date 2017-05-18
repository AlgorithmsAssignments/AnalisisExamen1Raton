#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Map
{
  public:
    Map();
    int hash(string str);
    void put(string key, int value);
    int get(string key);
  private:
    vector< pair<string,int>* > array;
};


#endif // MAP_H
