#include<iostream>
#include<string.h>
using namespace std;
int tilingproblem(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return tilingproblem(n-1)+tilingproblem(n-2);
}
int main()
{
    cout<<tilingproblem(4)<<endl;
    return 0;
}