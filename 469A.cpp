#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,p,q;
    cin>>x>>p;
    int a[1000];
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(p+q));
    int count=0;
    for(int i=0;i<p+q;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if (x==(count))
    {
        cout<<"I become the guy."<<endl;
    }
    else cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
