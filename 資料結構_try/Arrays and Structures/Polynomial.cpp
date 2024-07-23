#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#define MAX_DEGREE 101

typedef struct{
	int degree;//最高次 
	float coef[MAX_DEGREE];//某次方(MAX_DEGREE)的係數 
}POLY;

POLY Zero(){ //0多項式 
	POLY P;
	P.degree = 0;  //最高次方為0 
	for(int i=0; i<=MAX_DEGREE; i++){
		P.coef[i]=0; //設次方(i)係數為0 
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
