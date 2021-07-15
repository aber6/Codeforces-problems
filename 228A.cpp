#include<bits/stdc++.h>
using namespace std;
int main()
{
int count=3;
long long a[4];
for(int i=0;i<4;i++)
{
    cin>>a[i];
}
sort(a,a+4);
for(int i=1;i<=3;i++)
{
    if(a[i]!=a[i-1]){
        count--;
    }
    else continue;
}
cout<<count<<endl;
return 0;
}
