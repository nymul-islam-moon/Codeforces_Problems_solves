#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s;
    
    cin>>s;
    
    if(s.size() % 2 == 1){
        cout<<"-1"<<endl;
        return 0;
    }
    
    int x = 0, y = 0;
    
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'U')y++;
        if(s[i] == 'D')y--;
        if(s[i] == 'L')x--;
        if(s[i] == 'R')x++;
    }
    
    cout<<(abs(x) + abs(y))/ 2<<endl;
    
    return 0;
}