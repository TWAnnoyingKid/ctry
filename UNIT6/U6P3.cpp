#include <stdio.h>
#include <stdlib.h>
int gcd(int,int);
main(){
	int a, b;
    scanf("%d%d", &a, &b);
    printf("%d�M%d���̤j���]�Ƭ�%d\n", a,b,gcd(a,b));
} 
int gcd(int a,int b){
	int x=1;
	for(int i=1; i<=a && i<=b; i++){
		if((a%i==0)&&(b%i==0)){
			x=i;
		}
	}
	return x;
} 
