#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

    ll n;
    cin >> n;

    vector<ll>vec(n,0);
    for(int i=0;i<n;i++){
        cin >> vec[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(vec[i]-vec[i-1] >= 0) continue;
        ans += vec[i-1]-vec[i];
        vec[i] = vec[i-1];
    }
    cout << ans << endl;
}