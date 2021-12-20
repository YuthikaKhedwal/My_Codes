#include<iostream>
#include<algorithm>
#include<climits>
#include<cstdlib>

using namespace std;
int maxx(int a[],int n)
{
    int maxno=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxno)
        maxno=a[i];
    }
    return maxno;
}
int minn(int a[],int n)
{
    int minno=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<minno)
        minno=a[i];
    }
    return minno;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int z=maxx(a,n);
    int y=minn(a,n);
    cout<<"maximum number"<<z<<endl;
    cout<<"minimum number"<<y;
}