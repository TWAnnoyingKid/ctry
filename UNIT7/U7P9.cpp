#include <stdio.h>
#include <stdlib.h>

main(){
	int a[2][2]={{2,1},{1,2}}, x[2][1], b[2][1]={{1},{2}};
	float det = 1 / (a[0][0]*a[1][1] - a[0][1]*a[1][0]);
	printf("%d", det);
}
