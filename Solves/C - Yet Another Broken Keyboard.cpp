#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, k;
 
    cin>>n>>k;
 
    string s;
 
    cin>>s;
 
    set <char> st;
 
    for(int i = 0; i < k; ++i){
        char c;
        cin>>c;
        st.insert(c);
    }
 
    long long ans = 0;
    for (int i = 0; i < n; i++){
        int j = i;
        while (j < n && st.count(s[j])) ++j;
        int len = j - i;
        ans += len * 1ll * (len + 1) / 2;
        i = j;
    }
 
    cout<<ans<<endl;
 
    return 0;
}