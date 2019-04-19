#include <stdio.h>
#include <stdlib.h>

void f(int n, int a[], int b[]){ 
   int j; 
   for(j=0;j<n;j++){ 
    	  b[j]=a[j];
    }

} 

main(){
   int j,x, a[10],b[10];
   x=0;
   for(j=0;j<10;j++){ 
      a[j]=x++;
	}
	
   f(10, a,b); 

   for(j=0;j<10;j++){
      printf("%d - %d", a[j],b[j]);
   }
}
