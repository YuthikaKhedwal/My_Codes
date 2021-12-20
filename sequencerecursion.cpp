#include<iostream>
using namespace std;
int inc(int n)
{
    if(n==1)
    {
        cout<<"1";
    
return 1 ;
    }
 inc(n-1);
cout<<n;
}
int dec(int n)
{
    if(n==1)
    {cout<<"1";
    return 1;
    }
    cout<<n;
    dec(n-1);
}
int main()
{
    int n;
    cin>>n;
    inc(n);
    dec(n);
    return 0;

    
}