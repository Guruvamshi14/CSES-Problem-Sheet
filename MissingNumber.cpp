#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<n;i++){
        int ele;
        cin >> ele;
        ans = ans^ele^i;
    }
    ans = ans^n;
    cout << ans << endl;
}
