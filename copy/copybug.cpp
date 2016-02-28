#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
  list<int> coll1={1,2,3,4,5,6,7,8,9};
  vector<int> coll2;
 
  //RUNTIME ERROR
  copy(coll1.cbegin(),coll1.cend(),coll2.begin());
}
