#include<iostream>
using namespace std;
class A
{
public:
int a;
void funcA(){
    cout<<"func A\n";
}
private:
int b;
voidfuncB()
{
    cout<<"func b\n";
}
protected:
int c;
voidfuncC()
{
    cout<<"funcc \n";
}

};
int main()
{
    A.obj;
    obj.funcA();
    obj.funcB();
}