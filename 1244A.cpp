#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{int s=0,s1=0;
		int a,b,c,d,k;
	cin>>a>>b>>c>>d>>k;
		if(a%c==0)
		s=a/c;
		else
		s=a/c+1;
		if(b%d==0)
		s1=b/d;
		else 
		s1=b/d+1;
		if((s+s1)<=k)
		{
			cout<<s<<" "<<s1<<endl;
		}
		else cout<<"-1"<<endl;
	}
return 0;
