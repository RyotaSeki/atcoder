#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main(){
    int H,M,h=0,m=0;
    cin >> H;
    cin >> M;
    //vector<int> a(1),b(1);
    h += (H/10)*10;
    m += H%10*10;
    h += (M/10);
    m += M%10;
    //cout << a[0] << a[1] << b[0] << b[1];
    //cout << h << " "<< m<<endl;;
    while(/*H%10 == M/10 ||*/ h > 23 || m > 59){
        //if(H%10 == M/10)break;
        M++;
        //cout << H/10 << H%10 << " " << M/10 << M%10 << endl; 
        if(M == 60){
            M = 0;
            H++;
            if(H == 24){
                H = 0;
            }
        }
        h=0;
        m=0;
        h += (H/10)*10;
        m += H%10;
        h += (M/10);
        m += (M%10)*10;
    }
    //cout << H/10 << H%10 << " " << M/10 << M%10 << endl; 
    cout << H << " " << M ;
    return 0;   
}