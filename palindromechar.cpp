#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=0;
            break;
        }
        else
        if(check==true)
        cout<<"word is palindrome";
        else
        cout<<"word is not palindrome";
        return 0;
    }
}