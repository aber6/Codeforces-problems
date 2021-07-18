    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int x=1;
        int c[n];
        for(int i=0;i<n;i++)
        {
     
            cin>>c[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(c[i+1]!=c[i])
            {
                x++;
                continue;
            }
        }
        cout<<x<<endl;
    }
