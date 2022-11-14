#include <bits/stdc++.h>
//#include <iostream>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool slove(){
    int n;
    cin >> n;
    vector<string> s(n);    //ベクトル型の文字列を定義
    rep(i,n) cin >> s[i];
    
    //正規表現
    /*
    regex re("[HDCS][ATJQK2-9]");//どれか一文字に一致する
    rep(i,n){
        if(!regex_match(s[i],re)) return false;
    }
    */
    const string cs1 = "HDCS";  //文字列を定義
    const string cs2 = "A23456789TJQK"; //文字列を定義
    rep(i,n){
        if(cs1.find(s[i][0]) == string::npos) return false; 
        //文字列と文字列をすべて比較し(.find)あっていたらnposを出力する
        if(cs2.find(s[i][1]) == string::npos) return false;
        /*find関数は、stringクラスの関数で指定した文字列が先頭から
        検索してどこにあるのかを調べるために使います。
        指定した文字列が見つからなかった場合にはnposという値を
        返します。
        */
    }


    /*
    rep(i,n)rep(j,n){
        if(i == j) continue;
        if(s[i] == s[j])return false;
    }
    */
    set<string> st;
    /*互いに等しい二つの要素が set に格納されることは無い。
    setに格納する変数としてinsertがある。*/
    rep(i,n)st.insert(s[i]);
    /*s[i]をインサート（同じ文字は省く）して、
    stに格納する。*/
    if(st.size() != n)return false;
    /*同じ文字は含まれないので、
    sizeを確認し、要素数と同じ数であればすべての文字列は
    相異なることがわかる。*/

    return true;
}

int main(){
    if(slove()) cout << "Yes" ;
    else cout << "No";
    return 0;   
}