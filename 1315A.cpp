    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
     int a,b,x,y;
     cin>>a>>b>>x>>y;
     cout<<max(max(a-x-1,x)*b,max(y,b-y-1)*a)<<endl;
        }
        return 0;
    }
