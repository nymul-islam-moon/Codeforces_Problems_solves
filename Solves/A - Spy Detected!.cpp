#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long test;
 
 
    cin>>test;
 
    while(test--){
 
        long long n, arr[1000], t = -1;
 
        cin>>n;
 
        for(int i = 0; i < n; i++){
            cin>>arr[i];
 
            if(i > 0 && t == -1){
                if(arr[i] != arr[i - 1])t = i;
            }
        }
 
        if(t != n - 1){
            if(arr[t] == arr[n - 1]){
                cout<<t<<endl;
                continue;
            }else{
                cout<<t+1<<endl;
                continue;
            }
        }else{
            if(arr[n - 2] == arr[n - 3]){
                cout<<n<<endl;
                continue;
            }else{
                cout<<n - 1<<endl;
                continue;
            }
        }
    }
 
 
    return 0;
}