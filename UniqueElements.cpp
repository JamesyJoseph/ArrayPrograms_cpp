#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int num,key,flag=0;
	cin>>num;
	vector<int> a(num);

	for(int i=0; i<num; i++)
	{
		cin>>a[i];
	}

	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(i!=j) {
				if(a[i]==a[j])
				{
					flag = 1;
				}
			}
		}
		if(flag == 0) {
			cout<<a[i]<<" ";
		}

		flag = 0;
	}
	return 0;
}