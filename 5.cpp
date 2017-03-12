#include <iostream>
#include <math.h>
using namespace std;
long long funct(long long k)
{
	int n=floor(log10(k))+1;
	for (int i=n; i> n/2; i--) {
		int t=k/((long long)pow(10,i-1));
		int t1=k%((long long)pow(10,n-i+1));
		t=t%10;
		t1=t1/(pow(10,n-i));
		if(t!=t1) {
			if(t1<t){
				k=k+((t-t1)*pow(10,n-i));
			}
			else{
				if(n-i+1 != n/2){
				k=k+pow(10,n-i+1);
				k=k-((t1-t)*pow(10,n-i));
				}
				else
					{
				k=k+((t1-t)*pow(10,n-i+1));
					}
			 }
		}
	}
	return k;
}

int main( )
{
	int cases;
	long long k;
	cin>>cases;
	while(cases--)
	{
		cin>>k;
		cout<<funct(k+1)<<endl;
	}
	return 0;
}
