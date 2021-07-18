    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n;
        cin>>n;
        long long a[n][3];
        long long s1=0,s2=0,s3=0;
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
            
        }
            for(long long i=0;i<n;i++)
            {
                s1+=a[i][0];
                s2+=a[i][1];
                s3+=a[i][2];
            }
            if((s1==0)&&(s2==0)&&(s3==0))
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            return 0;
    }
