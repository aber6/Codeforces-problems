#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int result;
    if(t%2==0)
    {
        result=t/2;
        cout<<result<<endl;
        for(int i=0;i<result;i++)
        {
            cout<<2<<" ";
        }
    }
    else 
    {
        result =t/2-1;
        cout<<result<<endl;
       for(int i=0;i<result-1;i++)
       {
           cout<<2<<" ";
       }
        cout<<3;
    }
 return 0;   
}
