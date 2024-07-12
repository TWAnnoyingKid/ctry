#include <stdio.h>
#include <stdlib.h>
int gcd(int,int);
main(){
	int a, b; 
    scanf("%d%d", &a, &b);
    printf("gcd = %d\n",gcd(a,b)); 
}
int gcd(int a,int b){
	if(a%b==0){ //當a能被b整除時 
		return b;  //回傳除數b 
	}else{
		gcd(b,(a%b)); //叫出副程式gcd 將b變成被除數 a餘b為除數 
	}
}
