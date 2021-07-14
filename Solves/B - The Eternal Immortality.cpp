#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long x, y, sum = 1;
 
    cin>>x>>y;
 
    long long count = x + 1;
 
    if(x == y){
        cout<<"1"<<endl;
        return 0;
    }
    if((x + 1) % 10 == 0 || y % 10 == 0){
        cout<<"0"<<endl;
        return 0;
    }
 
 
    while(count <= y){
 
        x = count;
 
        if(x > 10 || sum > 10){
            if(x > 10){
                x = x % 10;
                if(x == 0){
                    cout<<"0"<<endl;
                    return 0;
                }
            }
            if(sum > 10){
                sum = sum % 10;
                if(sum == 0){
                    cout<<"0"<<endl;
                    return 0;
                }
            }
        }
 
        sum = sum * x;
 
        count++;
    }
 
    cout<<sum % 10<<endl;
 
    return 0;
}
//998244355 998244359