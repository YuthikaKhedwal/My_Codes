#include<iostream>
using namespace std;
int setbits(int n,int pos)
{
return ((n&(1<<pos))!=0);
}
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {xorsum=xorsum^arr[i];}
int setbit=0;
int pos=0;
int tempxor=xorsum;
{
    while(setbit!=1)
    {
        setbit=xorsum & 1;
    pos++;
        xorsum>>1;
       
    }
}
int newxor=0;
for(int i=0;i<n;i++)
if(setbits(arr[i],pos-1))
{
newxor=newxor^arr[i];
}
cout<<newxor;
cout<<(tempxor^newxor);
}
int main()
{
    int arr[8]={1,2,3,4,5,3,2,1};
    unique(arr,8);
    return 0;
}