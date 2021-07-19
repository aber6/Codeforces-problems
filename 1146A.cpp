        #include<bits/stdc++.h>
        using namespace std;
        int main()
        {
            string x;
            cin>>x;
            int count=x.length();
            int c1=0;
            for(int i=0;i<count;i++)
            {
                if(x[i]=='a')
                {
                    c1++;
                }
            }
            cout<<min(count,2*c1-1)<<endl;
            return 0;
            
        
