#include <stdio.h>
#include <stdlib.h>
int prime(int);
main(){
    int n; //宣告變數n 
    scanf("%d", &n); //輸入變數n 
    if(prime(n)){ //當副程式回傳true 
    	printf("%d 是質數\n", n); //輸出質數 
	}else{ //當副程式回傳false 
    	printf("%d 不是質數\n", n); //輸出非質數 
	}  
}
int prime(int n){
	int i=0; //定義變數i為0 
	for(int x=1; x<=n; x++){  //定義變數x=1 當x<=n x=x+1 
		if(n%x == 0){ //當n可以被x整除 變數i等於i+x 
			i = i+x; //變數i等於i+x 為因數總和 
		}
	}
	if((n+1) != i){ //當因數總和不等於n+1時 
		return false; //回傳false 
	}else{ //否則 
    	return true; //回傳true
	} 
} 
