#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)


int main(){
    char s[100],t[100];
    cin >> s;
    cin >> t;
    int u,v;
    for(u=0;s[u]!='\0';u++) ;
    for(v=0;t[v]!='\0';v++) ;
    rep(i,u){
        rep(j,v){
            if(s[j] != t[j]) break;
            if(j==v-1) {
                cout << "Yes" << endl;
                return 0;
            }   
        }
        rep(i,u){
            s[i] = s[i+1];
        }
        //cout << s << endl << t << endl;
    }
    cout << "No" << endl;
    return 0;   
}