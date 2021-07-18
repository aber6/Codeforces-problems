    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int x,result=0;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>x;;
                if(x==1)
                {
                   result+=fabs(i-2)+ fabs(j-2); 
                }
            }
        }
        
        cout<<result<<endl;
    }
