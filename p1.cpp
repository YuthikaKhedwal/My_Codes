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
    int currsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum+=a[j];
            
            cout<<currsum<<endl;
        }
         
      currsum=0;
        
    }
    

   
}