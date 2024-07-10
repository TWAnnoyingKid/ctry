#include <stdio.h>
#include <stdlib.h>
int min(int,int);
main(){
	int x,y,m;
	scanf("%d%d",&x,&y);
	m = min(x,y);
	printf("%d", m);
}
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

