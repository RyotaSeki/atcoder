#include <bits/stdc++.h>
using namespace std;
 
int main() {
  	char a[99][99] ;
    int i,j,x,y,k,n,m=0;
    cin >> i >> j >>x >>y;
    for(m=0;m<i;m++){
      for(n=0;n<j;n++){
        cin >> a[m][n];
      }
    }
    /*
    for(m=0;m<j;m++){
      for(n=0;n<j;n++){
        cout << a[m][n];
      }
      cout << endl;
    }
    */
    for (y;y<99-i;y++){
      for(x;x<99-j;x++){
        if("a[x+1][y+1]" == "#"){
        break;
        }
        else if("a[x+2][y+1]" == "."){
          k++;
        }
        else if("a[i][j+1]" == "."){
          k++;
          
        }
        else if("a[i+1][j+2]" == "."){
          k++;
      
        }
        else if("a[i+1][j]" == "."){
          k++;
          
        }

      }
      
    }
    for (y;y==0;y--){
      
      for(x;x==0;x--){
        if("a[x+1][y+1]" == "#"){
        break;
      }
       else if("a[x+2][y+1]" == "."){
          k++;
          
        }
        else if("a[i][j+1]" == "."){
          k++;
          
        }
        else if("a[i+1][j+2]" == "."){
          k++;
          
        }
        else if("a[i+1][j]" == "."){
          k++;
          
        }

      }
      
    }
    cout << k << endl;
}