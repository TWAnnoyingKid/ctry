#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float x; //疊翴计x 畖 
	scanf("%f",&x); //块疊翴计x
	float w= x/100000;  //﹚竡疊翴计wdeltaX 
	float h= sqrt(1-w*w); //﹚竡疊翴计h﹍蔼 
	float sum=0, pi=0 ; //﹚竡疊翴计sum=0
	for(x=0; x<=1; x=x+w){  //疊翴计x=0 讽x<=1 x=x+w
		sum = sum + (h*w); //穝跑计sum = sum+ (h*w)
		h= sqrt(1-x*x);  //穝跑计h = ≡(1-x^2)
	}
	printf("pi= %f\n",sum*4); //pi 
}
