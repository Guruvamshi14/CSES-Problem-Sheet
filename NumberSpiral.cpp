#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t;
    cin >> t;

    while(t--){

        ll x,y;
        cin >> x >> y;

        if(x == 1 && y == 1){
            cout << 1 << endl;
            continue;
        }

        bool val;
        if(x > y) val = true;
        else if(x < y) val = false;
        else val = x%2 == 0 ? true : false;

        ll ele = 0;
        if(val){
            ele = x%2 == 0 ? x*x : (x-1)*(x-1)+1;
            ele += x%2 == 0 ? -(y-1) : y-1;
        }else{
            ele = y%2 == 0 ? (y-1)*(y-1)+1 : y*y;
            ele += y%2 == 0 ? x-1 : -(x-1);
        }

        cout << ele << endl;
    }

}