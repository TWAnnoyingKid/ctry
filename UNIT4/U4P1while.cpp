#include <stdio.h> 
#include <stdlib.h> 

main(){
	int sum = 0;  //﹚竡跑计sum=1
	int i = 1;  //﹚竡跑计i=1
	while(i<=20){ //讽i<=20 暗笆 
		switch(i%2){ //ノswitch耞i緇2 
			case 0: sum = sum + (i*(-3)); //讽i单案计 穝跑计sum = sum+(-3i)
					i++; //i = i+1
					break;
			case 1: sum = sum + (i*3); //讽i单计 穝跑计sum = sum+3i
					i++; //i = i+1
					break;
			default: printf("ERROR\n");
		}
	}
	printf("%d", sum); //sum
}
