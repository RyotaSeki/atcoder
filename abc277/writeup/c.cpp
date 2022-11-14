#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    map<int,vector<int>> to;//int型のキーとvector型の値を定義する
    rep(i,n){
        int a,b;
        cin >> a >> b;//辺を読み込む
        to[a].push_back(b);//aの隣にbがある。
        to[b].push_back(a);//bの隣にaがある。
    }
    return 0;   
}