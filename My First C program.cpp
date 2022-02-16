#include<iostream>
using namespace std;

class swap 
{
	public:
		int a;
		int b;
		
		
		getnum()
		{
			cout<<"ENTER NUMBER = ";
			cin>>a;
			
			cout<<"ENTER NUMBER = ";
			cin>>b;
		}
		
		operation()
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		
		actual()
		{
		cout<<"A = "<<a<<"\n";
		cout<<"B = "<<b<<"\n";
        }		
};

int main()
{
	swap obj;
	obj.getnum();
	obj.operation();
	obj.actual();
	
	return 0;
}
