#include <iostream>
#include <chrono>
#include "clock.hpp"
using namespace std;

int main()
{
  std::cout<<"system_clock: "<<std::endl;
  printClockData<std::chrono::system_clock>();
  cout<<"\nhigh_resolution_clock: "<<endl;
  printClockData<std::chrono::high_resolution_clock>();
  cout<<"\nsteady_clock: "<<endl;
  printClockData<std::chrono::steady_clock>();
}
