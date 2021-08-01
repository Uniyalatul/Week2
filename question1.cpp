#include<iostream>
using namespace std;

string keyoccur(int arr[] , int n , int key)
{
	int s =0;
	int e = n-1;
	int cnt = 1;
	int mid;
	while(s<=e)
	{
		mid = (s+e)/2;

		if (arr[mid] == key)
		{	
			
			int i = mid-1;
			int j = mid+1;

			// while(i>=0)
			// {
			// 	if(arr[mid] == arr[i])
			// 	{
			// 		cnt++;
			// 		i--;
			// 	}
			// 	else
			// 		break;
			// }
			// while(j<n)
			// {
			// 	if(arr[mid] == arr[j])
			// 	{
			// 		cnt++;
			// 		j++;
			// 	}
			// 	else
			// 		break;


			// }
			while(arr[mid] == arr[i] || arr[mid] == arr[j])
			{
				if(arr[mid] == arr[i] && i!=-1)
				{
					cnt++;
					i--;
				}
				if(arr[mid] == arr[j] && j!=n)
				{
					cnt++;
					j++;
				}
				else if(arr[mid] != arr[i] && arr[mid] != arr[j])
				{
					break;
				}
			}
		return to_string(arr[mid]) + "-" + to_string(cnt);

		}
		else if(arr[mid] > key)
			e = mid-1;
		else
			s = mid+1;
	}
	if(cnt == 1)
		return "Key not present";
	else
		return to_string(arr[mid]) + "-" + to_string(cnt);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int arr[n];
	int key;
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cin>>key;
	string s = keyoccur(arr,n,key);
	cout<<s;
	}
	return 0;
}