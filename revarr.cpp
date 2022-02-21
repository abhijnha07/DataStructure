#include<iostream>
using namespace std;
int main()
{
	int a[20],i,n;
	cout<<"Enter the size of an array: "<<endl;
	cin>>n;
	cout<<"Enter array elements: "<<endl;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
    	cout<<"Reversed elemets are: "<<endl;
	for(i=(n-1);i>=0;i--)

	cout<<a[i]<<"  "<<endl;
	return 0;
}
