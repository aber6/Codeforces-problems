#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,count_a=0,count_b=0,count_c=0,count_d=0;
    string x;
    cin>>a>>b>>c>>d;
    cin>>x;
    long long size= x.length();
    for(int i=0;i<size;i++)
    {
     if (x[i]=='1')   
     {
         count_a++;
     }
     if (x[i]=='2')   
     {
         count_b++;
     }
     if (x[i]=='3')   
     {
         count_c++;
     }
     if (x[i]=='4')   
     {
         count_d++;
     }
     
    }
    long long an=count_a*a+count_b*b+count_c*c+count_d*d;
    
    cout<<an<<endl;
    return 0;
}
