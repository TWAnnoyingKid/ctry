#include <stdio.h>
#include <stdlib.h>
int gcd(int,int);
main(){
	int a, b; 
    scanf("%d%d", &a, &b);
    printf("gcd = %d\n",gcd(a,b)); 
}
int gcd(int a,int b){
	if(a%b==0){ //��a��Qb�㰣�� 
		return b;  //�^�ǰ���b 
	}else{
		gcd(b,(a%b)); //�s�X�Ƶ{��gcd �Nb�ܦ��Q���� a�lb������ 
	}
}
