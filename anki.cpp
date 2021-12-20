#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   int a[n],k[n];
   cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>k[i];
         int min=a[0];
        if(a[i]<min)
        {
            min=a[i];
            sort(a,a+n);
        cout<<a[k[i]];
        }
    }
}