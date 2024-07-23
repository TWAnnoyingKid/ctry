#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

void sort(int *list, int n){
	int i, j, min, temp;
	for(i=0; i<n; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}
		SWAP(list[i], list[min], temp);
	}
}
//#define compare(x, y) ((x)<(y)? -1 : (x)==(y)? 0 : 1)
int compare(int x, int y){
	if(x < y){
		return -1;
	}else if(x == y){
		return 0;
	}else{
		return 1;
	}
	
}

int binarysearch(int *list, int searchnum, int left, int right){
	int middle;
	while(left <= right){ //如果陣列裡有要找的數字 
		middle = (left + right)/2;
		switch(compare(list[middle], searchnum)){
			case -1: return binarysearch(list, searchnum, middle+1, right);
			case 1:  return binarysearch(list, searchnum, left, middle-1);
			case 0:  return middle;
		}
	}
	return -1; //如果陣列裡沒有要找的數字 
}

main(){
	int i,n,searchnum;
	int list[MAX_SIZE];
	printf("輸入要生成幾個數字：");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		list[i] = rand()%1000;
		printf("%d ",list[i]);
	}
	printf("輸入要搜尋的數字："); 
	scanf("%d", &searchnum);
	
	sort(list, n);
	printf("\n\nSorted array：\n");
	for(i=0; i<n; i++){
		printf("%d ",list[i]);
	}
	printf("\n\n%d 在第 %d 位", searchnum, binarysearch(list, searchnum, 0, n));
}
