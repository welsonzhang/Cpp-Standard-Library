#include <set>
#include <map>
#include <iostream>

using namespace std;


int main()
{
  typedef std::set<int> IntSet;
  
  IntSet coll;

  coll.insert(3);
  coll.insert(1);
  coll.insert(5);
  coll.insert(1);
  
  for(auto elem:coll)
  {
    cout<<elem<<" ";
  }
  cout<<endl;
  IntSet::const_iterator pos;
  for(pos=coll.begin();pos!=coll.end();++pos)
  {
    cout<<*pos<<endl;
  }
  cout<<endl;
}
