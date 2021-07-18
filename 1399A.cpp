    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int x;cin>>x;
            int a[x];
            for(int i=0;i<x;i++)
            {
                cin>>a[i];
            }
            sort(a,a+x);
            int flag=0;
            for(int i=0;i<x-1;i++)
            {
                if(abs(a[i+1]-a[i])<=1)
                {
                    flag=0;
                    continue;
                }
                else {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        return 0;
    }
