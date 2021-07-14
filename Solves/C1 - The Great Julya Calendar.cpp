#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long x, max, count = 0;
 
    cin>>x;
    
    
    if(x == 0){
        cout<<"0"<<endl;
        return 0;
    }
    
    while(1){
        max = 0;
        long long test_x = x;
        while(1){
 
            long long t = test_x % 10;
 
            test_x = (test_x - t) / 10;
 
            if(t > max) max = t;
            if(test_x == 0)break;
 
        }
        x = x - max;
        count++;
 
        if(x == 0)break;
    }
 
 
    cout<<count<<endl;
 
    return 0;
}