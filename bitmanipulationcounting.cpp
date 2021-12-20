#include<iostream>
using namespace std;
int count(int n)
{
    int counter=0;
    while(n)
    {
        n=n&(n-1);
        counter++;
    }
    return counter;

}
int main()
{
    int m;
    cin>>m;
    cout<<count(m);
}