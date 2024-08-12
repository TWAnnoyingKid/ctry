#include <stdio.h>
#include <stdlib.h>

main(){
	int M = 11, address, i;
	int s[M]={}, key[M]={2,18,35,0,22,13,19,9,69,17,30};
	
	for(i=0; i<M; i++){
		s[i] = -1;
	}
	for(i=0; i<M; i++){
		address = key[i] % M;
		if((s[address])!=(-1)){
			for(int k=address; ; k++){
				if(s[k]==(-1)){
					s[k] = key[i];
					break;
				}
			}
		}else{
			s[address] = key[i];
		}
	}
	for(i=0; i<M; i++){
		printf("%d\n", s[i]);
	}
}
