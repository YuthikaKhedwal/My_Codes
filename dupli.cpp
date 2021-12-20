#include<iostream>
using namespace std;
int main(){
    int n,freq,max=0,repeat=0;
    
    cin>>n;
    int range=n-3;
    int a[n],i;
    for(i=0;i<n;i++){
        a[i]=rand()%range;
    }
    
    for(i=0;i<n;i++)
        cout<<a[i];
cout<<endl;
    int count[n-3];
    for(i=0;i<n-3;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=0;i<n-3;i++)
        cout<<count[i]<<endl;
        
    
    for(i=0;i<n-3;i++){
       if(count[i]>1)
            repeat+=count[i];
        if(count[i]>max){
            max=count[i];
            freq=i;
        }
    }
    cout<<repeat<< " "<<freq;
    
}