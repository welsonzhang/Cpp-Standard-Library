#include <algorithm>
#include <dequeue>
#include <string>
#include <iostream>

using namespace std;

class Person{
public:
	string firstname;
	string lastname;
}

bool personSortCriterion(const Person &p1,const Person &p2)
{
	return p1.lastname<p2.lastname||(p1.lastname==p2.lastname&&p1.firstname<p2.firstname);
}

int main()
{
	deque<Person> coll;

	sort(coll.begin(),coll.end(),personSortCriterion);
}
