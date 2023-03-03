#include<iostream>
using namespace std;
int main()
{
	int n1=10;
	int n2=7;
	cout<<"The first no. before swap is:"<<n1<<endl;
	cout<<"The second no. before swap is:"<<n2<<endl;
	int dm;
	dm=n2;
	n2=n1;
	n1=dm;
	cout<<"The first no. after swap is:"<<n1<<endl;
	cout<<"The second no. after swap is:"<<n2<<endl;
	return 0;
}
