#include <stdio.h>
#include <stdlib.h>
#define HASHSize 11

main(){
	int key[HASHSize] = {2,18,35,0,22,13,19,9,69,17,30};
	int HashTable[HASHSize];
	int i, address=0, count=0;
	
	for(i=0; i<HASHSize; i++){
		HashTable[i] = -1;
	}
	for(i=0; i<HASHSize; i++){
		address = key[i] % HASHSize;
		while(HashTable[address] != -1 && count < HASHSize){
			count++;
			address = (++address) % HASHSize;
		}
		if(HashTable[address] == -1){
			HashTable[address] = key[i];
			count = 0;
		}else{
			printf("º¡¤F");
			exit(0);
		}
	}
	for(i=0; i<HASHSize; i++){
		(HashTable[i] == -1)? printf("x\n") : printf("%d\n", HashTable[i]);
	}
}
