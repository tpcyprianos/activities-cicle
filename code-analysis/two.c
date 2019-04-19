#include <stdio.h>
#include <stdlib.h>


main(){
	int a = 1, m = 5, n = 3, i,j; 
	int M[5][3];

	
	for(i=0; i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &M[i][j]);
		}
	}
	
	for (i=0; i<n; i++) {
      for (j=i+1; j<m; j++){
             if (M[i][j] != M[j][i]) {
                  a = 0;
             } 
       } 
	} 
	
	for(i=0; i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
	if(a == 1){
		printf("a");
	}else{
		printf("Nao a");	
	}
	
	system("pause");
}

