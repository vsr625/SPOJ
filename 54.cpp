#include <iostream>
#include <stdlib.h>
using namespace std;

int x[101],y[101]; 
int i=0,j=0;

void funct(int x[], int y[]){
	for (int k=j-1; k>=0; k--) {
		if(x[k]<y[k]){
			int z=k-1;
			while(x[z]==0)
				{
					z=z-1;
				}
			x[z]--;
			for (int l=z+1; l<k; l++) {
				x[l]=9;
			}
			x[k]=10+x[k]-y[k];
		}
		else{
			x[k]=x[k]-y[k];
		}
	}
	int carr=0;
	for (int k=0; k< i; k++) {
		x[k]=(x[k]+(10*carr))/2;
		carr=x[k]%2;
	}
	for (int k=0; k< i; k++) {
		cout << x[k];
	}
}

int main()
{
	int i=0;
	char n,m;
	cin>>n;
	while (n!='\n'){
		x [i++]=atoi ((char *) n); 
	}
	for (int k=0; k<i; k++) {
		cout << x [k] << "\n";
	}
	return 0;
}
