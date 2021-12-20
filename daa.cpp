// Q2) Write a program to test whether a number n, entered through keyboard is prime or
// not by using different algorithms you know for at least 10 inputs and note down the time
// complexity by step/frequency count method for each algorithm & for each input.
// Finally make a comparison of time complexities found for different inputs, plot an
// appropriate graph & decide which algorithm is faster.

#include <iostream>
#include <algorithm>
using namespace std;

bool method1(int n){ //n times
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

// bool method2(int n){   //n/2 times
//     if (n <= 1)
//         return false;

//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// bool method3(int n){    //(n^(1/2))times
//     if (n <= 1)
//         return false;
//     if (n <= 3)
//         return true;
  

//     if (n % 2 == 0 || n % 3 == 0)
//         return false;
  
//     for (int i = 5; i * i <= n; i = i + 6)
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
  
//     return true;
// }
 
int main(){
    int t=10;
    while(t--){
        int n;
        cin>>n;

         bool isPrime=method1(n);

        // bool isPrime=method2(n);

        // bool isPrime=method3(n);

        
        
        if(isPrime)
        cout<<"Prime"<<endl;
        else
        cout<<"Not Prime"<<endl;
    }
    return 0;
}