#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 4

int front=-1, rear=-1, counter=0;
int Queue[MAX_QUEUE_SIZE];

bool IsFullQ(){
	if(counter == MAX_QUEUE_SIZE){ //-1讓貯列永遠有一格空的  
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

void AddQ(int item){ //如果貯列最後一位被占用且貯列沒滿 將數字送進貯列第0位 
	if(IsFullQ()){
		printf("貯列滿了");
		exit(0);
	}
	Queue[(++rear) % MAX_QUEUE_SIZE] = item;
	counter++ ;
}

int DeleteQ(){
 	if(IsEmptyQ()){
 		printf("貯列空的");
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
