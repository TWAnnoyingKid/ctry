#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#define MAX_DEGREE 101

typedef struct{
	int degree;//程蔼Ω 
	float coef[MAX_DEGREE];//琘Ωよ(MAX_DEGREE)玒计 
}POLY;

POLY Zero(){ //0兜Α 
	POLY P;
	P.degree = 0;  //程蔼Ωよ0 
	for(int i=0; i<=MAX_DEGREE; i++){
		P.coef[i]=0; //砞Ωよ(i)玒计0 
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
