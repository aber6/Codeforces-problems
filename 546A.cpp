    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        for(int i=0;i<c;i++)
        {
            x+=(i+1)*a;
        }
        if(x>b)
        {
            cout<<x-b<<endl;
        }
        else cout<<"0"<<endl;
        return 0;
    }
