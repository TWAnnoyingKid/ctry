#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int zero(){
	return 0;
};
bool IsZero(int x){
	if(x==0){
		return true;
	}
	return false;
} 
bool Equal(int x, int y){
	if(x==y){
		return true;
	}
	return false;
} 
bool IsGreater(int x, int y){
	if(x>y){
		return true;
	}
	return false;
} 

int Successor(int x){
	if(x==INT_MAX){
		return x;
	}
	return x+1;
}
int Predecessor(int x){
	if(IsZero(x)){
		return x;
	}
	return x-1;
}

int Add(int x, int y){
	if((x+y)<=INT_MAX){
		return x+y;
	}
	return INT_MAX;
}
int Subtract(int x, int y){
	if(x<y){
		return 0;
	}
	return x-y;
}
int Times(int x, int y){
	return x*y;
}
int Division(int x, int y){
	if(y==0){
		return 0;
	}
	return x/y;
}

main(){
	int x=2,y=2;
	
	if(IsZero(x)){
		printf("y");
	}else { printf("n"); }
	
	if(Equal(x,y)){
		printf("y");
	}else{ printf("n"); }
	
	if(IsGreater(x,y)){
		printf("y");
	}else{ printf("n"); }
	
	
}
