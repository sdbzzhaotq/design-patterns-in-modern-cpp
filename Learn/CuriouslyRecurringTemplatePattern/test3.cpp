#include <iostream>
#include <stdio.h>
using namespace std;

class Base
{
public: 
	virtual void f(float x)
	{
		cout<<"BASE::f"<<x;
	}
	virtual void g(float x)
	{
		cout<<"BASE::g"<<x;
	}
	void h(float x)
	{
		cout<<"BASE::h"<<x;
	}
};
class Driver:public Base
{
public: 
	void f(float x)
	{
		cout<<"d::f"<<x;
	}
	virtual void g(int x)
	{
		cout<<"d::g"<<x;
	}
	void h(float x)
	{

		cout<<"d::h"<<x;
	}
};

int main(int argc, char const *argv[])
{
	Driver d;
	Base* pb=&d;
	Driver* pd=&d;
	pd->f(1.2f);
    printf("\n");
	pb->f(1.2f);
    printf("\n");
	pd->g(1.2f);
    printf("\n");
	pb->g(1.2f);
    printf("\n");
	pd->h(1.2f);
    printf("\n");
	pb->h(1.2f);
    printf("\n");
	return 0;

}