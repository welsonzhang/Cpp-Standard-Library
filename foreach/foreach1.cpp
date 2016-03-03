#include <iostream>
#include <list>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

//function that prints the passed argument
void print(int elem)
{
  cout<<elem<<";";
}

int main()
{
  vector<int> coll;
  for(int i=1;i<=9;++i)
  {
   coll.push_back(i);
  }
  //range operation
  for_each(coll.cbegin(),coll.cend(),print);
  
  cout<<endl;
}
