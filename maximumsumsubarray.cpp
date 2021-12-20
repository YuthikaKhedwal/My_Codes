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
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
         maxsum=max(maxsum,currsum);
    }
   
    cout<<maxsum;
   
}

