#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        std:: vector <std :: pair<long ,long >> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        long xx=(v[0].first==v[1].first)?v.back().second:v[0].second;
        cout<<xx<<endl;
    }
    return 0;
}
