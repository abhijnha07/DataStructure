#include<iostream>
using namespace std;
int main()
{
	int n, i=0, sum=0;
	cout<<"Enter 10 numbers\n";
	do
	{
		cin>>n;
		sum = sum+n;
		i++;
    }
	 while(i<4);
	cout<<"Sum of 10 numbers is="<<sum<<endl;
	return 0;
	
}






