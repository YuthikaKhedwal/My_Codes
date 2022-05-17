#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto &i:a)
    cin>>i;
    multiset<int,greater<int>>s;
    vector<int>ans(n-k+1);
    for(int i=0;i<k;i++)
}