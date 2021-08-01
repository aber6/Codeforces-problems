#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
cin>> t;
for(int i=0;i<t;i++)
{
    long long a,b;
    cin>>a>>b;
long c=a*b;
if((a*b)%2==0)
{
    cout<< (a*b)/2<<endl;
}
else {
    cout<<((a*b)+1)/2<<endl;
}

}
    return 0;
}
