    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int a;
        int b=0,c=0;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            if(x>=0)
            {
                b+=x;
            }
            else c+=x;
        }
        cout<<b-c<<endl;
        return 0;
    }
