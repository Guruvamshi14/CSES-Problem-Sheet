#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    if(n<=3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    if(n  == 4){
        cout << "2 4 1 3" << endl;
        return 0;
    }

    int e = n;
    int o = n/2;
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            cout << e << " ";
            e--;
        }else{
            cout << o << " ";
            o--;
        }
    }
    return 0;
}