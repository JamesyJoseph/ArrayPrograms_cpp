#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		vector<long> a(num);
		int arr[num],k=0;
		for(int i=0; i<num; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<num; i++)
		{
			for(int j=num-1; j>i; j--)
			{
				if(a[i]==a[j] && a[j]!=-1)
				{
					cout<<a[i]<<" ";
					a[j]=-1;
					a[i]=-1;

				}

			}
		}

		cout<<"\n";
	}
	return 0;
}