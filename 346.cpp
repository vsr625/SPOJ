#include <iostream>
#include<bits/stdc++.h>
#include <map>

using namespace std;

map<int, long long> m;

long long prinrec(long long n){
	if( n==0) return 0;
	if(m[n]!=0) return m[n];
	m[n]=(n>prinrec(n/2)+prinrec(n/3)+prinrec(n/4))?n:prinrec(n/2)+prinrec(n/3)+prinrec(n/4);
	return m[n];
}
int main()
{
	long long  n;
	cin>>n;
	while(1){
		cout<<prinrec(n)<<endl;
	cin>>n;
	}
	return 0;
}
