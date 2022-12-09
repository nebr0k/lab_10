#include <iostream>
#include <typeinfo>
#include"worker.h"
#include"salary.h"
using namespace std;

int main()
{
	
	salary e(5,140);
	Series* test = &e;
	Series* arr[2];
	arr[0] = &e;
	for (int i = 0; i < 2; i++)
	{	
		cout << "salary = " << arr[i]->calculatesalary(5) << endl;
		cout << "salary = " << arr[i]->check(5) << endl;
	}

	cout << typeid(e).name() << endl; 
	cout << typeid(test).name() << endl;
	cout << typeid(*test).name() << endl;
}
