#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b,c,d,e,f;
    cin>>b>>c>>d>>e>>f;
    if((a[0]==b[0])||(a[0]==c[0])||(a[0]==d[0])||(a[0]==e[0])||(a[0]==f[0]))
    {
        cout<<"yes"<<endl;
    }
    else if((a[1]==b[1])||(a[1]==c[1])||(a[1]==d[1])||(a[1]==e[1])||(a[1]==f[1]))
    {
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return 0;
}
