#include <stdio.h>
#include <stdlib.h>
#define HASHSize 13

main(){
	int key[7] = {62,42,13,57,8,60,73};
	int HashTable[HASHSize];
	int i, address=0, count=0;
	
	for(i=0; i<HASHSize; i++){
		HashTable[i] = -1;
	}
	
	for(i=0; i<7; i++){
		address = key[i] % HASHSize;
		count=0;
		while(HashTable[address] != -1 && count < HASHSize){
			address = (key[i] * address) % HASHSize;
			count++;
		}
		if(HashTable[address] == -1){
			HashTable[address] = key[i];
		}else{
			printf("º¡¤F");
			exit(0);
		}
	}
	for(i=0; i<HASHSize; i++){
		(HashTable[i] == -1)? printf("x\n") : printf("%d\n", HashTable[i]);
	}
}
