#include <stdio.h>
#include <stdlib.h>
#define MAX 101

main(){
	int a[6]={53,3,0,748,14,2145}, M=a[0], MaxLeng=0, count=0;
	int sort[10][MAX]={0}, sortCount[10]={0}; //sort[][]矪瞶计  sortCount[i]sort[i][]柑Τぶ计 
	
	for(int i=1; i<6; i++){ //т程 
		if(a[i] > M){
			M = a[i];
		}
	}
	while(M!=0){ //т程碭计 
		M /= 10;
		MaxLeng++;
	}
	for(int i=0, n=1; i<MaxLeng; i++, n *= 10){ //砞禲Ω计程计 
		for(int k=0; k<6; k++){
			int ele = a[k]/n % 10; //盢ele = a[k]/n计
			sort[ele][sortCount[ele]] = a[k]; 
			sortCount[ele]++; //sort[ele][ ]计 sortCount[ele]碞+1 
			
		}
		int index=0;
		for(int j=0; j<10; j++){//盢计眖 sort[j][l]柑 a[index]  
			for(int l=0; l<sortCount[j]; l++){
				a[index++] = sort[j][l];
			}
			sortCount[j] = 0;//Ч盢 sortCount[j]耴箂 
		}
		for(int s=0; s<6; s++){
			printf("%d ", a[s]);
		}
		printf("\n");
	}
	
	
} 
