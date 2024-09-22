#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;

    int i = 0;
    int ans = 0;
    int n = str.size();
    for(int j=0;j<n;j++){
        int i = j;
        while(i<n && str[i] == str[j]){
            i++;
        }
        ans = max(ans,i-j);
        j = i-1;
    }
    cout << ans << endl;
}