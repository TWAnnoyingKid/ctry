#include <stdio.h>
#include <stdlib.h>
main(){
	float a; //�ŧi�B�I���ܼ�a 
	float b; //�ŧi�B�I���ܼ�b 
	float c; //�ŧi�B�I���ܼ�c
	scanf("%f%f%f",&a,&b,&c); //��J�ܼ�a,b,c
	float sum = sqrt((b*b)-(4*a*c)); //�ŧi�ܼ�sum�� ��(b^2-4ac)
	printf("(-%.2f + ��(%.2f^2 - 4 * %.2f * %.2f)/2 * %.2f = %.2f\n",b,b,a,c,a,(-b+sum)/2*a); //��X(-b+��(b^2-4ac))/2a
	printf("(-%.2f - ��(%.2f^2 - 4 * %.2f * %.2f)/2 * %.2f = %.2f\n",b,b,a,c,a,(-b-sum)/2*a); //��X(-b-��(b^2-4ac))/2a
}
