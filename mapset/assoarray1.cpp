#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  unordered_map<string,float> coll;
  
   coll["vat1"]=0.16;
   coll["vat2"]=0.07;
   coll["Pi"]=3.14;

   coll["vat2"]+=0.03;

   cout<<"vat diff "<<coll["vat1"]-coll["vat2"]<<endl;
}
