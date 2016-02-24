#include <algorithm>
#include <iostream>

using namespace std;

bool int_ptr_less(int *a,int *b)
{
  return *a<*b;
}

int main()
{
  int x=17;
  int y=42;
  int z=33;
  int *px=&x;
  int *py=&y;
  int *pz=&z;

  int *pmax=max(px,py,int_ptr_less);
  pair<int*,int*> extremes=minmax({px,py,pz},int_ptr_less);
  cout<<*(extremes.first)<<" "<<*(extremes.second)<<endl;
}
