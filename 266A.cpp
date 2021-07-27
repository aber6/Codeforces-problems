#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<x-1;i++)
    {
        if (s[i]==s[i+1])
        {
            count++;
        }
        else continue;
    }
    
    cout<<count<<endl;
    
    return 0;
}
