#include <list>
#include <algorithm>
using namespace std;

int main()
{
  list<int> coll;
  for(int i=1;i<=6;++i)
  {
   coll.push_front(i);
   coll.push_back(i);
  }
   //remove all elemens with value 3(poor performance)
  coll.erase(remove(coll.begin(),coll.end(),3),coll.end());
  //remove all elements with value 4(good performace)
  coll.remove(4);
   
}
