#include <stdio.h>
#include <stdlib.h>

main(){
	float a; //�ŧi�B�I���ܼ�a 
	float b; //�ŧi�B�I���ܼ�b 
	float c; //�ŧi�B�I���ܼ�c
	scanf("%f%f%f",&a,&b,&c); //��J�ܼ�a,b,c
	printf("x= %f or %f",(-b+(sqrt((b*b)-(4*a*c))))/(2*a),(-b-(sqrt((b*b)-(4*a*c))))/(2*a));//��X(-b +- ��(b^2-4ac))/2a
}
