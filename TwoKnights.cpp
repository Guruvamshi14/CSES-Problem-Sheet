#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll findNCR(ll n){
    n = n*n;
    return n*(n-1)/2;
}

ll calculateKinghts(ll n){

    if(n == 1) return 0;
    if(n == 2) return 6;
    if(n == 3) return 28;

    ll totPossibilitites = findNCR(n);
    ll possAttacks = (n-2)*(10+4*(n-4))+4+2*(n-4);

    return totPossibilitites-possAttacks;
}

int main(){

    ll n;
    cin >> n;

    for(ll i=1;i<=n;i++){
        ll ans = calculateKinghts(i);
        cout << ans << endl;
    }

}