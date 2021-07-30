#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    int flag=1;
    cin>>m>>n;
    char a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
            {
              flag=0;
              break;
            }
        }
    }
    if(flag==1)
    {
    cout<<"#Black&White"<<endl;
    }
    else cout<<"#Color"<<endl;
    return 0;
}
