#include <stdio.h>
#include <stdlib.h>

main(){
	int a[3][3]={{78,23,-12}, {23,-4,35}, {-92,54,38}};
	int b[3][3]={{-16,34,-54}, {6,82,77}, {24,33,-7}};
	int c[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j] >= b[i][j]){
				c[i][j] = a[i][j];
			}else{
				c[i][j] = b[i][j];
			}
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
