#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	bool p;
	printf("Podaj koniec tego przedziału: ");
	scanf("%d", &n);

	for(int i=1; i < n+1; i++){
		p = true;

		for(int j=2; j<i; j++)
			if(i%j==0)
				p=false;
	if(p==true)
		printf("%d\n",i);
		}
	}

