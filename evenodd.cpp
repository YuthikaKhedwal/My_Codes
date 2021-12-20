#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        b[i] = a[i];
    }
    int c = 0;
    int x = n-1;
    for(int i=0;i<n;i++){
        if(b[i]%2 == 0 ){
            a[c++] = b[i];
        }else{
            a[x--] = b[i];
        }
    }
     for(int i=0; i<n; i++){
        cout<<a[i]<<" " ;
    }
    return 0;
}