#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n,k;
    vector<int> A(100);
    cin >> n;
    cin >> k;
    rep(i,n){
        A[i] = 0;
    }
    rep(i,n){
        cin >> A[i];
    }
    rep(i,k){
        rep(i,n){
            A[i] = A[i+1];
            A[n] = 0;
        }    
    }
    rep(i,n){
        cout << A[i] << " " ;
    }
    return 0;   
}