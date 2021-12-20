#include<iostream>
using namespace std;
int solution(int nums[],int n)
{
    int m=0;
    int ans[2*n];
for(int i=0;i<2*n;i++)
{
    if(i<n)
    ans[i]=nums[i];
    else
    ans[i]=nums[m];
    m++;
}
return ans;}
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[n];
    }
   int x[]= solution(nums,n);
    for(int i=0;i<2*n;i++)
    cout>>x[i];
}
