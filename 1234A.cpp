    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int q;
    		cin>>q;
    		int a[q];
    		int sum=0;
    		for(int i=0;i<q;i++)
    		{
    			cin>>a[i];
    		sum+=a[i];
    		}
    		if((sum%q)==0)
    		cout<<sum/q<<endl;
    		else
    		cout<<sum/q+1<<endl;
    	}
    	return 0;
    }
