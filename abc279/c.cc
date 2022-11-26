#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    long long h,w;
    cin >> h >> w;
    char s[h][w],t[h][w];
    rep(i,h){
        cin >> s[i];
    }
    rep(i,h){
        cin >> t[i];
    }
    rep(i,h){
        cout << s[i] << endl;
    }
    rep(i,h){
        cout << t[i] << endl;
    }
    return 0;   
}