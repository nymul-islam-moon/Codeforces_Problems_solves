#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long x, sum = 0;
 
    cin>>x;
 
    while(1){
        sum = pow(2,x) + sum;
        x--;
        if(x == 0)break;
    }
 
    cout<<sum<<endl;
 
    return 0;
}