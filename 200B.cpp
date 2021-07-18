    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        float a,b=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            b+=a;
        }
        b=b/n;
        cout<<b<<endl;
        return 0;
    }
