#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#define MAX_DEGREE 101

typedef struct{
	int degree;//�̰��� 
	float coef[MAX_DEGREE];//�Y����(MAX_DEGREE)���Y�� 
}POLY;

POLY Zero(){ //0�h���� 
	POLY P;
	P.degree = 0;  //�̰����謰0 
	for(int i=0; i<=MAX_DEGREE; i++){
		P.coef[i]=0; //�]����(i)�Y�Ƭ�0 
	}
	return P;
}
bool IsZero(POLY A){
	for(int i=0; i<=MAX_DEGREE; i++){
		if(A.coef[i]!=0){
			return false;
		}
	}
	return true;
}
