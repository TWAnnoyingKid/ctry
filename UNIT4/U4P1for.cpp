#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;  //﹚竡跑计sum=1
	for(int i=1; i<=20; i++){  //﹚竡跑计i=1 讽i<=20 i=i+1 
		switch(i%2){ //ノswitch耞i緇2 
			case 0: sum = sum + (i*(-3)); //讽i单案计 穝跑计sum = sum+(-3i) 
					break;
			case 1: sum = sum + (i*3); //讽i单计 穝跑计sum = sum+3i
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum); //sum
}
