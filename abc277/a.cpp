#include <iostream>

using namespace std;    
int main()
{
    int n,x,k;
    int p[100];
    cin >> n;
    cin >> x;
    for(int i = 1; i < n+1 ; i++)
    {
        cin >> p[i];
        //cout << "pi=" << p[i] << "\n";
    }
    //cout<<"p="<<p<<"\n";
    for(int i = 1; i < n+1 ; i++)
    {
        //cout << p[i];
        if(p[i] == x)
            cout << i;
    }
    
    
    
} // namespace
