#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n;
    cin >> n;

    ll sum = n*(n+1)/2;
    if(sum%2 != 0){
        cout << "NO" << endl;
        return 0;
    }
    sum = sum/2;
    vector<bool>vec(n+1,0);
    int cnt = 0;
    for(int i=n;i>=1;i--){
        if(sum >= i){
            vec[i] = 1;
            sum -= i;
            cnt++;
        }
    }
    cout << "YES" << endl;
    cout << cnt << endl;
    for(int i=1;i<=n;i++){
        if(vec[i] == 1)
            cout << i << " ";
    }
    cout << endl;

    cout << n-cnt << endl;
    for(int i=1;i<=n;i++){
        if(vec[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}