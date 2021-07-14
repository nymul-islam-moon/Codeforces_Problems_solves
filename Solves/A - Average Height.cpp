#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, t, x;
    vector <int> evn;
    vector <int> odd;
 
    cin>>t;
 
    while(t--){
        cin>>n;
        evn.clear();
        odd.clear();
        int flag = 0, one = 0;
 
        for(int i = 0; i < n; i++){
 
            cin>>x;
 
            if(x % 2 == 0){
                evn.push_back(x);
                continue;
            }
 
            if(x % 2 == 1){
                odd.push_back(x);
                continue;
            }
 
        }
 
        if(odd.size() == 1 && evn.size() == 1){
            cout<<odd[0]<<" "<<evn[0]<<endl;
            continue;
        }
 
 
        if(odd.size() > 1){
            for(int i = 0; i < odd.size(); i++){
                cout<<odd[i]<<" ";
            }
        }
 
        if(evn.size() > 0){
 
            for(int i = 0; i < evn.size(); i++){
                cout<<evn[i]<<" ";
            }
 
        }
 
        if(odd.size() == 1){
            cout<<odd[0]<<endl;
            continue;
        }
 
        cout<<endl;
 
    }
 
 
    return 0;
}