#include <stdio.h>
#include <stdlib.h>
main(){
	float a; //疊翴计跑计a 
	float b; //疊翴计跑计b 
	float c; //疊翴计跑计c
	scanf("%f%f%f",&a,&b,&c); //块跑计a,b,c
	float sum = sqrt((b*b)-(4*a*c)); //跑计sum ≡(b^2-4ac)
	printf("(-%.2f + ≡(%.2f^2 - 4 * %.2f * %.2f)/2 * %.2f = %.2f\n",b,b,a,c,a,(-b+sum)/2*a); //块(-b+≡(b^2-4ac))/2a
	printf("(-%.2f - ≡(%.2f^2 - 4 * %.2f * %.2f)/2 * %.2f = %.2f\n",b,b,a,c,a,(-b-sum)/2*a); //块(-b-≡(b^2-4ac))/2a
}
