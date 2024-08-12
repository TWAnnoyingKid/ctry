#include <stdio.h>
#include <stdlib.h>
#define HASHSize 11

main(){
	int key[11] = {2,18,35,0,22,13,19,9,69,17,30};
	int HashTable[HASHSize];
	int i, address=0, count=0;
	
	for(i=0; i<HASHSize; i++){
		HashTable[i] = -1;
	}
	
	for(i=0; i<11; i++){
		address = key[i] % HASHSize;
		printf("addr %d  %d\n", address, key[i]);
		count=0;
		while(HashTable[address] != -1 && count < HASHSize){
			printf("count¡G%d  %d  %d\n",HashTable[address], count, address);
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
