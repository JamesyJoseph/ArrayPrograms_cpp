#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
int num,key;
cin>>num;
vector<int> a(num);

for(int i=0;i<num;i++)
{
cin>>a[i];
}

for(int i=0;i<num;i++)
{
for(int j=i+1;j<num;j++)
{
if(a[i]==a[j])
{
cout<<a[i];
return 0;
}
}
}
return 0;
}