#include <stdio.h>
#include <stdlib.h>

main(){
	float a; //疊翴计跑计a 
	float b; //疊翴计跑计b 
	float c; //疊翴计跑计c
	scanf("%f%f%f",&a,&b,&c); //块跑计a,b,c
	printf("x= %f or %f",(-b+(sqrt((b*b)-(4*a*c))))/(2*a),(-b-(sqrt((b*b)-(4*a*c))))/(2*a));//块(-b +- ≡(b^2-4ac))/2a
}
