#include <stdio.h>
#include <stdlib.h>
int prime(int);
main(){
    int n; //�ŧi�ܼ�n 
    scanf("%d", &n); //��J�ܼ�n 
    if(prime(n)){ //��Ƶ{���^��true 
    	printf("%d �O���\n", n); //��X��� 
	}else{ //��Ƶ{���^��false 
    	printf("%d ���O���\n", n); //��X�D��� 
	}  
}
int prime(int n){
	int i=0; //�w�q�ܼ�i��0 
	for(int x=1; x<=n; x++){  //�w�q�ܼ�x=1 ��x<=n x=x+1 
		if(n%x == 0){ //��n�i�H�Qx�㰣 �ܼ�i����i+x 
			i = i+x; //�ܼ�i����i+x ���]���`�M 
		}
	}
	if((n+1) != i){ //��]���`�M������n+1�� 
		return false; //�^��false 
	}else{ //�_�h 
    	return true; //�^��true
	} 
} 
