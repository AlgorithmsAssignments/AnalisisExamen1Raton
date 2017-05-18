#include "Map.h"

Map::Map()
{

}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{

}

int Map::get(string key)
{
  return -1;
}


