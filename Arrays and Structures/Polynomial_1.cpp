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
	for(int i=A.degree; i>=0; i--){
		if(A.coef[i] != 0){
			A.degree = i;
			return A.degree;
		}
	}
}
void PrintPoly(POLY A){
	for(int i=A.degree; i>=0; i--){
		if(Coef(A, i) != 0){
			if(i!=0){
				printf("%.0fx^%d ",A.coef[i],i);
			}else{
				printf("%.0f ",A.coef[i]);
			}
			
		}
	}
	printf("\n"); 
}

int MaxDegree(POLY A, POLY B){
	if(A.degree > B.degree){
		return A.degree;
	}
	return B.degree;
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
		A.degree = LeadExp(A);
	}
	return A;
}
int COMPARE(int x, int y){
	if(x<y)
		return -1;
	else if(x==y)
		return 0;
	else
		return 1;
}
POLY Add(POLY A, POLY B){
	POLY D = {0,0,};
	while (!IsZero(A) && !IsZero(B)) {
		switch (COMPARE(LeadExp(A), LeadExp(B))){
			case -1:
				D = Attach(D, Coef(B, LeadExp(B)), LeadExp(B));
				B = Remove(B, LeadExp(B));
				break;
			case 0:
				int sum ;
				sum = Coef(A, LeadExp(A)) + Coef(B, LeadExp(B));
				if (sum == 0)
					D = Attach(D, sum, LeadExp(A));
				A = Remove(A, LeadExp(A));
				B = Remove(B, LeadExp(B));
				break;
			case 1:
				D = Attach(D, Coef(A, LeadExp(A)), LeadExp(A));
				A = Remove(A, LeadExp(A));
				break;
		}
	}
}
//POLY Add(POLY A, POLY B){
//	POLY S={0,0,};
//	for(int i=0; i<=A.degree||i<=B.degree; i++){
//		S.coef[i] = A.coef[i] + B.coef[i];
//		printf("%.0f \n",B.coef[i]);
//	}
//	S.degree = MaxDegree(A,B);
//	return S;
//}
main(){
	POLY A;
	A = Zero();
	if(IsZero(A)){
		printf("A是0多項式\n\n"); 
	}else{
		printf("A不是0多項式\nA是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A))); 
	}
	A.degree = 2;
	A.coef[0] = 4;
	A.coef[1] = 3;
	A.coef[2] = 2;
	if(IsZero(A)){
		printf("是0多項式\n\n"); 
	}else{
		printf("不是0多項式\nA是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A))); 
	}
	PrintPoly(A);
	printf("\n");
	
	A = Attach(A,2,3);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
	
	A = Remove(A,3);
	A = Remove(A,2);
	PrintPoly(A);
	printf("A是%d次多項式, 最高係數為%.0f\n\n", LeadExp(A),Coef(A, LeadExp(A)));
}
