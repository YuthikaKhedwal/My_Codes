#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if( n == 1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
         {
             ans++;
         }
         mx=max(mx,a[i]);
    }
    cout<<ans;
    return 0;
}

