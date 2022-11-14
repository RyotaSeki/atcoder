#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N, A;
    cin >> N >> A;
    
    int x[N];
    string f[N];

    rep(i,N){
        cin >> f[i] >> x[i];

    }
    rep(i,N){
        if(f[i]=="+"){
            A += x[i];
            cout<< i+1 << ":"<< A << endl;
        }
        if(f[i]=="-"){
            A -= x[i];
            cout<< i+1 << ":"<< A << endl;
        }
        if(f[i]=="*"){
            A *= x[i];
            cout<< i+1 << ":"<< A << endl;
        }
        if(f[i]=="/"){
            if(x[i] == 0){
                cout << "error" << endl;
                break;
            }
            A /= x[i];
            
            cout<< i+1 << ":"<< A << endl;
        }          
    }

}