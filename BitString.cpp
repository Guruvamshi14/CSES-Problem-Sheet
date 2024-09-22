#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){

    ll n;
    cin >> n;

    int mod = 1e9+7;

    ll ans = 1;
    while(n-- != 0){
        ans = ((ans%mod)*2)%mod;
    }
    cout << ans << endl;

}