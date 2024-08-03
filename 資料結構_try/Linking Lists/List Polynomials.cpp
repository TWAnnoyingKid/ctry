#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct polyNode *polyPointer; //結構指標  
struct polyNode{
	float coef;
	int exp;
	polyPointer link;
};
polyPointer a = NULL, b = NULL;

polyPointer Zero(){
	polyPointer A;
	A = NULL;
	return A;
}

bool IsZero(polyPointer A){
	if(!A){
		return true;
	}
	return false;
}

float Coef(polyPointer A, int exp){
	for(; A; A = A->link){
		if(A->exp == exp){
			return A->coef;
		}
	}
	return 0;
}

int LeadExp(polyPointer A){
	return A->exp;
}

void PrintPoly(polyPointer A){
	for(; A; A = A->link){
		if(A->exp != 0){
			printf("%.0fx^%d ", A->coef, A->exp);	
		}else{
			printf("%.0f", A->coef);	
		}
	}
	printf("\n");
}

polyPointer Attach(polyPointer A, float coef, int exp){
	polyPointer attach, attachNode, temp;
	attach = (polyPointer)malloc(sizeof(*attach));
	attach->coef = coef;
	attach->exp = exp;
	attachNode = A;
	temp = A;
	if(!IsZero(A)){
		for(; attachNode;  temp = attachNode, attachNode = attachNode->link){
			if(exp == temp->exp || exp == attachNode->exp){
				return A;
			}
			if(exp > temp->exp){
				attach->link = A;
				A = attach;
				return A;
			}else if( temp->exp > exp && exp > attachNode->exp ){
				attach->link = attachNode;
				A->link = attach;
				return A;
			}
		}
		if(!attachNode){
			attach->link = NULL;
			temp->link = attach;
			return A;
		}
	}
	attach->link = NULL;
	A = attach;
	return A;
}

polyPointer Remove(polyPointer A, int exp){
	if(exp == LeadExp(A)){
		A = A->link;
		return A; 
	}else{
		polyPointer removeNode, remove;
		remove = A;
		removeNode = A->link;
		for(; removeNode; removeNode = removeNode->link, remove = remove->link){
			if(removeNode->exp == exp){
				remove->link = removeNode->link;
				return A;
			}
		}
	}
	return A;
}

polyPointer SingleMult(polyPointer A, float coef, int exp){
	int sum=0;
	polyPointer C;
	C = (polyPointer)malloc(sizeof(*C));
	C = Zero();
	while(A){
		sum = A->coef * coef;
		C = Attach(C, sum, A->exp+exp);
		A = A->link;
	}
	return C;
}

polyPointer Add(polyPointer A, polyPointer B){
	int sum=0;
	polyPointer C;
	C = (polyPointer)malloc(sizeof(*C));
	C = Zero();
	while(A && B){
		if(A->exp > B->exp){
			C = Attach(C, A->coef, A->exp);
			A = A->link;
		}else if(A->exp < B->exp){
			C = Attach(C, B->coef, B->exp);
			B = B->link;
		}else{
			sum = A->coef + B->coef;
			C = Attach(C, sum, A->exp);
			A = A->link;
			B = B->link;
		}
	}
	for(; A; A = A->link){
		C = Attach(C, A->coef, A->exp);
	}
	for(; B; B = B->link){
		C = Attach(C, B->coef, B->exp);
	}
	return C;
}

polyPointer Mult(polyPointer A, polyPointer B){
	polyPointer C;
	C = (polyPointer)malloc(sizeof(*C));
	C = Zero();
	while(B){
		C = Add(C, SingleMult(A, B->coef, B->exp)) ;
		B = B->link;
	}
	return C;
}

main(){
	polyPointer A, B;
	A = (polyPointer)malloc(sizeof(*A));
	B = (polyPointer)malloc(sizeof(*B));
	A = Zero(); B = Zero(); 
	A = Attach(A, 1,0);
	A = Attach(A, 1,1);
	A = Attach(A, 2,2);
	A = Attach(A, 3,3);
	B = Attach(B, 1,0);
	B = Attach(B, 2,1);
	B = Attach(B, 3,2);
	printf("多項式 A：");
	PrintPoly(A);
	printf("多項式 B：");
	PrintPoly(B);
	
	printf("多項式 A*B：");
	A = Mult(A, B);
	PrintPoly(A);
	
	printf("多項式 A*2X^2：");
	A = SingleMult(A, 2,2);
	PrintPoly(A);
	
	printf("多項式 A+B：");
	A = Add(A, B);
	PrintPoly(A);
}

