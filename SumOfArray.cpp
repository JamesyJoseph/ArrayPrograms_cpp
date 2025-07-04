#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
long sum=0;
int n;
cin>>n;
vector<long> a;
for(int i=0;i<n;i++)
{
long x;
cin>>x;
sum=sum+x;
a.push_back(x);
}
cout<<sum<<"\n";
}
return 0;
}