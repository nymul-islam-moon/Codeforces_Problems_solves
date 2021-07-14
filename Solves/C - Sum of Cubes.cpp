#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    bool pos = 0;
    long long n, t;
 
    cin>>t;
        while(t--){
        pos = 0;
 
        cin>>n;
 
        for(long long it = 1; it * it * it <= n; it++){
            long long v = n - (it * it * it);
            long long u = cbrtl(v);
            while (u * u * u < v)++u;
            while (u * u * u > v)--u;
            if (u > 0 && u * u * u == v)pos = 1;
        }
 
        cout<<(pos ? "YES\n" : "NO\n");
 
    }
 
    return 0;
}