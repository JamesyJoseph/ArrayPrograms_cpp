#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
if(k==arr[i])
{
cout<<i;
return 0;
}
}
cout<<-1;
return 0;
}