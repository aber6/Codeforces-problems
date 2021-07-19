    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {ll n;
    cin>>n;
    ll val;
    ll odd=0,even=0;
    for(ll i=0;i<n;i++)
    {
        cin>>val;
        if(val%2==0)
        {
            even++;
        }
        else odd++;
        
    }
    ll ans=min(even,odd);
        cout<<ans<<endl;
    }
