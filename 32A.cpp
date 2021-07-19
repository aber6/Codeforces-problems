    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
       int a,d;
       cin>>a>>d;
       int x[a];
       int z=0;
       for(int i=0;i<a;i++)
       {
           cin>>x[i];
       }
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<a;j++)
           {
               if (i!=j)
               {
                   if(abs(x[i]-x[j])<=d)
                   {
                       z++;
                   }
               }
           }
       }
       cout<<z<<endl;
        return 0;
    }
