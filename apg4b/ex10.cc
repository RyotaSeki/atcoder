#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int C(){
    cout<<']';
    return 0;
}

int main() {
  int A, B;
  cin >> A >> B;
  cout<< "A:";
    rep(i,A) C();
    cout << endl ;
    cout<< "B;";
    rep(i,B) C();
    cout << endl ;
}