    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n;
        cin>>n;
           n--;
        for (long long  i = 1; i <= n; i++) {
            n-= i;
        }
        cout << n + 1 << endl;
        return 0;
    }
