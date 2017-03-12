#include <iostream>
#include <map>
using namespace std;

map <unsigned long,unsigned long> a;
unsigned long level(unsigned long n){
	cout.precision(20);
	if (n==0) return 0;
	if(n==1) return 1;
	if(a[n]!=0.0) return a[n];
	a[n] = 2*level(n-1)- level(n-2) + n +( n/2);
	return a[n];
}


int main(int argc, char *argv[])
{
	a[0]=0;
	a[1]=1;
	unsigned long n ;
	int cases;
	level(500000);
	cin>>cases;
	while(cases--){
	cin>>n;
	cout<<level(n)<<endl;
	}
	return 0;
}
