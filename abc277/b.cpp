#include <iostream>

using namespace std;    
int main()
{
    string s[53];
    int n ;
    cin >> n;
    int i,j;
    for(i=1;i<n+1;i++){
        cin >> s[i];
    }
    for(i=1;i<n+1;i++){
        char c = s[i][0];
        char d = s[i][1];
        if(c != 'H' && c != 'D' && c != 'C' && c != 'S' ){
            //cout << "No1 \n";
            cout << "No";
            return 0;
        }
        if(d != 'A' && d != '2' && d != '3' && d != '4' && d != '5' &&
        d != '6' && d != '7' && d != '8' && d != '9' && d != 'T' &&
        d != 'J' && d != 'Q' && d != 'K' ){
            //cout << "No2 \n";
            cout << "No";
            return 0;
        }
        
    }
    for(i=1;i<n+1;i++){
        for(j=1;j<n+1;j++){
            if(i==j)continue;
            if(s[i]==s[j]){
                //cout << "No3 \n";
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";

} // namespace
