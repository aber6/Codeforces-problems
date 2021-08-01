#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int i=1;
    int result =0;
    while(result<x)
    {
        i++;
        result+=i*(i+1)/2;
    }
    cout<<i-1<<endl;
    return 0;
}
