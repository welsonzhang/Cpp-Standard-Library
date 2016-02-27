#include <set>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  multiset<string> cities{
  "Braunschweig","Hanover","Frankfurt","New York",
  "Chicago","Toronto","Paires","FrankFurt"
  };

  for (const auto& elem:cities)
  {
    cout<<elem<<" ";
  }
  cout<<endl;

  cities.insert({"London","Munich","Hanover","Braunschweih"});
  
  for(const auto& elem : cities)
  {
   cout<<elem<<" ";
  }

  cout<<endl;
}
