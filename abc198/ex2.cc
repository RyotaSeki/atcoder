#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    char a[10];
    cin >> a;
    //cout << a << endl;
    int m = strlen(a);
    rep(j,9){
        rep(j,m){
            a[m-j]=a[m-j-1];        
        }
        a[0] = 0;
        cout << a << endl;

        rep(i,m){
        if (a[i]!=a[m-i-1])
        break; 
        if(i+1==m)
        cout << "Yes" << endl;
        

        }
    }
    
}