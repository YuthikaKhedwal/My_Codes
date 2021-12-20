#include<iostream>
#include<math.h>
using namespace std;
int ntop(int n,int p)
{
    if(p==0)
    return 1;
    int prevpower=ntop(n,(p-1));
    return n*prevpower;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<ntop(n,p)<<endl;
    return 0;

}