#include <stdio.h>
#include <stdlib.h>
#define Max 101
typedef struct term{
	int col, row, value;
}TERM;
TERM t[Max];

void transPos(TERM a[], TERM b[]){
	int n=a[0].value, k=0;
	b[0].col = a[0].row;
	b[0].row = a[0].col;
	b[0].value = n;
	if(n > 0){
		for(int i=0; i<a[0].col; i++){
			for(int j=1; j<=n; j++){
				if(i == a[j].col){
					b[++k].row = a[j].col;
					b[k].col = a[j].row;
					b[k].value = a[j].value;
				}
			}
		}
	}
}


main(){
	int a[6][6]={{15 ,0  ,0  ,22 ,0 ,-15},
				 {0  ,11 ,3  ,0  ,0 ,0  },
				 {0  ,0  ,0  ,-1 ,0 ,0  },
				 {0  ,0  ,0  ,0  ,0 ,0  },
				 {91 ,0  ,0  ,0  ,0 ,0  },
				 {0  ,0  ,28 ,0  ,0 ,0  }};
	int k=0; 
	TERM b[Max];
	t[0].col = 6;
	t[0].row = 6;		
	for(int i=0; i<6; i++){
		for(int j=0; j<6; j++){
			if(a[i][j] != 0){
				t[0].value += 1;
				t[++k].row = i;
				t[k].col = j;
				t[k].value = a[i][j];
			}
		}
	}
	printf("轉置前\n");
	for(int i=0; i<=k; i++){
		printf("row: %d || col: %d || value: %d\n", t[i].row, t[i].col, t[i].value);
	}
	transPos(t, b);
	printf("\n\n轉置後\n");
	for(int i=0; i<=k; i++){
		printf("row: %d || col: %d || value: %d\n", b[i].row, b[i].col, b[i].value);
	}
}
