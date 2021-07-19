    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
        cin>>t;
        while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=0;
        while(b>=1&&c>=2)
        {
            s+=3;
            b=b-1;
            c=c-2;
        }
        while(a>=1&&b>=2)
        {
        	s+=3;
        	a=a-1;
        	b=b-2;
        }
        cout<<s<<endl;
    }
         return 0;
    }
