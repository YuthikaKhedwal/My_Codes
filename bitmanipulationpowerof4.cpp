#include<iostream>
using namespace std;
int powerof4(int n)
{
    int count=0;
    if(n && !(n&(n-1)))
    {
        while(n>1)
        {
            n>>=1;
            count++;
        }
        return (count % 2==0)?1:0;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<powerof4(n);
}