    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                flag=1;
            
                break;
            }
        }
        if(flag)
        {
            cout<<"HARD"<<endl;
        }
        else cout<<"EASY"<<endl;
        return 0;
    }
