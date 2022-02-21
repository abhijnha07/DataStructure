*BINARY SEARCH*
#include<iostream>
using namespace std;
int main()
{
	int i, a[10], n, first, last, middle;
	cout<<"Enter 10 numbers in ascending order:\n";
	for(i=0; i<10; i++)
	cin>>a[i];
    cout<<"Enter element to be searched: ";
	cin>>n;
	first=0;
	last=9;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(a[middle]<n)
		first=middle+1;
		else if(a[middle]==n)
		{
			cout<<"The number "<< n << " is in the position "<< middle+1;
			break; 
		}
		else
		
			last=middle-1;
			middle=(first+last)/2;
		
	}
		if(first>last)
		cout<<"the number "<<n<<"is not found ";
		return 0;
	
}
