#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
string reverse(string s)
{
    if(s.length()==0)
    {
    return " ";
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];

}
int main()
{
    reverse("binod");
    return 0;
}
