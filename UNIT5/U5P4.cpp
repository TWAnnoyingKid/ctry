#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float x; //�ŧi�B�I��x �@���b�| 
	scanf("%f",&x); //��J�B�I��x
	float w= x/100000;  //�w�q�B�I��x��deltaX 
	float h= sqrt(1-w*w); //�w�q�B�I��h������ 
	float sum=0, pi=0 ; //�w�q�B�I��sum=0
	for(x=0; x<=1; x=x+w){  //�B�I��x=0 ��x<=1 x=x+w
		sum = sum + (h*w); //��s�ܼ�sum = sum+ (h*w)
	}
	printf("pi= %f\n",sum*4); //�L�Xpi 
}
