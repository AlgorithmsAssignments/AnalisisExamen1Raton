#include "Map.h"

Map::Map()
{
  for(int i=0;i<999999;i++)
  {
    array.push_back(new pair<string,int>("",0));
  }
}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum += str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
  pair<string, int>* current_pair;

  int index = hash(key);
  current_pair = array[index];

  if(current_pair->first != "")
  {
    cout<<"Old val: "<<current_pair->second<<endl;
    current_pair->second *= value;
    cout<<"New val: "<<current_pair->second<<endl;
  }else {
    array[index] = new pair<string, int>(key, value);
  }
}

int Map::get(string key)
{
  pair<string, int>* current_pair;
  current_pair = array[hash(key)];

  return current_pair->second;
}
