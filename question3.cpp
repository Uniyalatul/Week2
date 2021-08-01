#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{   int n,key,cnt=0;
		cin>>n;

		int arr[n];

		for(int i=0;i<n;i++)
			cin>>arr[i];

		cin>>key;

		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1 ; j<n ; j++)
			{
				if(abs(arr[i] - arr[j]) == key)
					cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}