#include<iostream>
using namespace std;

string find(int arr[],int n , int i , int j)
{
	int s=j+1;
	int e = n-1;

	while(s<=e)
	{
		int mid = (s+e)/2;

		int sum = arr[i]+arr[j];
		if(arr[mid] == sum)
		{
			return to_string(i+1) + "," + to_string(j+1) + "," + to_string(mid+1);
		}

		else if(arr[mid] >sum)
			e=mid-1;
		else
			s = mid+1;

	}
	if(j<n-2)
	{
		j++;
		return find(arr,n,i,j);
	}

	else if(i<n-3 && j == n-2)
	{
		i+=1;
		j=i+1;
		return find(arr,n,i,j);
	}
	else
		return "NO SEQUENCE FOUND";
}

int main()
{	int t;
	cin>>t;

	while(t--)
	{
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int i=0,j=1;
	string str = find(arr,n,i,j);
	cout<<str<<endl;
	}
}