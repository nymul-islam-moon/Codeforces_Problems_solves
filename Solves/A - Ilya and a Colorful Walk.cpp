#include<bits/stdc++.h>
 
using namespace std;
 
/// Typedef
typedef long long ll;
 
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
 
#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)
 
#define size1 1000001
 
 
 
int main() {
 
    //seive();
    //preCal();
 
    ll tc, num, t = 1, choose;
 
    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout);
 
    sc1(num);
 
    ll arr[num + 1];
 
    for(ll i = 1; i <= num; i++)
        sc1(arr[i]);
 
 
    ll ans1 = 0, ans2 = 0, ans = 0;
 
    for(ll i = 1; i <= num; i++){
        if(arr[i] != arr[num]){
            ans1 = abs(num - i);
            break;
        }
    }
 
    for(ll i = num; i >= 1; i--){
        if(arr[i] != arr[1]){
            ans2 = abs(i - 1);
            break;
        }
    }
 
 
    pf1(max(ans1, ans2));
 
    return 0;
}