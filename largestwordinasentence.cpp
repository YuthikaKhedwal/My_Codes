#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	 int N;
	
	 double one,two;

	for(int z=0;z<T;z++)
	{
	   	 int k=0;
	   	 cin>>N;
             double A[N];
	    for(int i=0;i<N;i++)
	    {
	        
	        cin>>A[i];
	        for(int j=0;j<N;j++)
	        {
	            if(A[i]!=A[j]){
	            one=(A[i]-A[j])/A[i];
	            two=(A[i]-A[j])/A[j];
	            if(one<two)
	            k++;
	        }
	        }
	        
	    }
	     cout<<k-1<<endl;
	        
	}
	return 0;
}