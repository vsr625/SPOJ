#include<iostream>
#include <string.h>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases--) {
		int count=0;
		char a[2000],b[2000];
		cin>>a>>b;
		int i =0, j=0;
		while(i<strlen(a) && j<strlen(b)){
			if(a[i]!=b[j]) count++;
			i++;
			j++;
		}
		count+= strlen(b)-j;
		count+= strlen(a)-i;
		cout << count << "\n";
	}

	return 0;
}
