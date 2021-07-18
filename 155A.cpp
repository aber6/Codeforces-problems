    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long t;
        cin>>t;
        long long a[t];
        for(long long i=0;i<t;i++)
        {
            cin>>a[i];
        }
        long long c,b;
        c=a[0];
        b=a[0];
        int x=0;
        for(long long i=1;i<t;i++)
        {
            if(a[i]<c)
            {
                c=a[i];
                x++;
            }
            if(a[i]>b)
            {
                b=a[i];
                x++;
            }
        }
        cout<<x<<endl;
        return 0;
    }
