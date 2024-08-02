#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 4

int front=-1, rear=-1, counter=0;
int Queue[MAX_QUEUE_SIZE];

bool IsFullQ(){
	if(counter == MAX_QUEUE_SIZE){ //-1���J�C�û����@��Ū�  
		return true;
	}
	return false;
}

bool IsEmptyQ(){
	if(counter == 0){
		return true;
	}
	return false;
}

void AddQ(int item){ //�p�G�J�C�̫�@��Q�e�ΥB�J�C�S�� �N�Ʀr�e�i�J�C��0�� 
	if(IsFullQ()){
		printf("�J�C���F");
		exit(0);
	}
	Queue[(++rear) % MAX_QUEUE_SIZE] = item;
	counter++ ;
}

int DeleteQ(){
 	if(IsEmptyQ()){
 		printf("�J�C�Ū�");
 		return -1;
	}
	counter-- ;
	return Queue[(++front) % MAX_QUEUE_SIZE]; 
 }
 
main(){
	AddQ(10);
	AddQ(20);
	AddQ(30);
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
	AddQ(40);
	AddQ(50);
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
	printf("%d\n", DeleteQ());
}
