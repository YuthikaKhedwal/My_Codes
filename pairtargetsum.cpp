#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
bool pairsum(int arr[],int n,int k)
{
int low=0;
    int high=n-1;
    while(low<high)
    {
    if(arr[low]+arr[high]==k)
    {
        cout<<low<<" "<<high<<endl;
        return true;
    }
    else if(arr[low]+arr[high]>k)
    {
        high--;
    }
    else {low++;}
    }   
    return false;
 
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<pairsum(a,n,k);
    return 0;
}