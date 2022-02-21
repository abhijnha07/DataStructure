#include<iostream>
using namespace std;
int main()
{
	int n,sum[10],arr1[10],arr2[10],i;
	cout<<"Enter size of the array:  ";
	cin>>n;
	cout<<"Enter the elements of first array: \n";
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	cout<<"Enter the elements of second array: \n";
	for(int i=0;i<n;i++)
	cin>>arr2[i];
	cout<<"Sum of two array is: ";
	for(int i=0;i<n;i++)
	{
		sum[i]=arr1[i]+arr2[i];
		cout<<sum[i]<<endl;
	}
	return 0;
}

