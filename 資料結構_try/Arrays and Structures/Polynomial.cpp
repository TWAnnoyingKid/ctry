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
	POLY A;
	A.degree = 0;  //最高次方為0 
	for(int i=0; i<=A.degree; i++){
		A.coef[i]=0; //設次方(i)係數為0 
	}
	return A;
}
bool IsZero(POLY A){
	for(int i=0; i<=A.degree; i++){
		if(A.coef[i]!=0){
			return false;
		}
	}
	return true;
}
float Coef(POLY A, int exp){
	if(A.coef[exp] != 0){
		return A.coef[exp];
	}
	return 0;
}
int LeadExp(POLY A){
	return A.degree;
}
void PrintPoly(POLY A){
	for(int i=A.degree; i>=0; i--){
		if(Coef(A, i) != 0){
			if(i!=0){
				printf("%.0fx^%d + ",A.coef[i],i);
			}else{
				printf("%.0f ",A.coef[i]);
			}
			
		}
	}
	printf("\n"); 
}

POLY Attach(POLY A, float coef, int exp){
	if(exp > A.degree){
		for(int i=(A.degree+1); i<=exp; i++){
			A.coef[i] = 0;
		}
		A.degree = exp;
	} 
	if(Coef(A, exp) == 0){
		A.coef[exp] = coef;
	}
	return A;
}
POLY Remove(POLY A, int exp){
	A.coef[exp] = 0;
	if(exp == A.degree){
		for(int i=A.degree; i>=0; --i){
			if(A.coef[i] != 0){
				A.degree = i;
				break;
			}
		}
	}
	return A;
}
POLY SingleMult(POLY A, float coef, int exp){
	POLY S;
	S = {0,0};
	for(int i=A.degree; i>=0; i--){
		if(Coef(A, i)){
			S.coef[(i+exp)] = A.coef[i]*coef;
		}
	}
	S.degree = A.degree + exp;
	return S;
}
POLY Add(POLY A, POLY B){
	POLY S;
	S = Zero();
	for(int i=0; i<=A.degree||i<=B.degree; i++){
		S.coef[i] = A.coef[i] + B.coef[i];
	}
	if(A.degree > B.degree){
		S.degree = A.degree;
	}else{
		S.degree = B.degree;
	}
	return S;
}

POLY Mult(POLY A, POLY B){
	POLY S;
	S = Zero();
	for(int i=0; i<=B.degree; i++){
		if(i==0){
			S = SingleMult(A, B.coef[i], i);
		}else{
			S = Add(S, SingleMult(A, B.coef[i], i));
		}
	}
	return S;
}

main(){
	POLY A;
	A = Zero();
	if(IsZero(A)){
		printf("A是0多項式\n\n"); 
	}else{
		printf("A不是0多項式\nA是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A))); 
	}
	A.degree = 3;
	A.coef[0] = 4;
	A.coef[1] = 3;
	A.coef[2] = 2;
	A.coef[3] = 1;
	if(IsZero(A)){
		printf("是0多項式\n\n"); 
	}else{
		printf("不是0多項式\nA是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A))); 
	}
	POLY B;
	B = Zero();
	B.degree = 2;
	B.coef[0] = 3;
	B.coef[1] = 2;
	B.coef[2] = 1;
	PrintPoly(A);
	PrintPoly(B);
	printf("\n");
	A=Mult(A, B);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A))); 
	
	A = Attach(A,2,7);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
	
	A = Remove(A,7);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
	
	A = Remove(A,3);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
	A = Remove(A,5);
	A = Remove(A,4);
	A = Remove(A,2);
	A = Remove(A,1);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
	
	A = Add(A, B);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
}
