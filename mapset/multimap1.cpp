#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  multimap<int,string> coll;

  coll={{5,"tagged"},{2,"a"},{1,"this"},{1,"is"}};

  for(auto elem:coll)
  {
   cout<<elem.second<<' ';
  }
  cout<<endl;
}
