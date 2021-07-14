#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int arr[100], x, n, count = 0, l = 0;
 
    cin>>n>>x;
 
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] == x)count++;
        if(arr[i] < x)l++;
    }
 
    cout<<(x - l) + count<<endl;
 
    return 0;
}