#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    char c[100];
    int v=0,w=0;
    cin >> c;
    rep(i,100){
        if(c[i] == 'v') v++;
        if(c[i] == 'w') w++;
    }
    cout << v+w*2 << endl;
    return 0;   
}