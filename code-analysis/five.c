#include <stdio.h>
#include <stdlib.h>


int main(){
	int i, j, m[3][3], v[3];

	for(i=0;i<3;i++){
		
		scanf("%d",&v[i]);
	}

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		printf("%d ",v[i]);
	}
		

	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			m[i][j]=v[i]*m[i][j];


	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}
	return 0;
}
