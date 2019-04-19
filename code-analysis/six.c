#include<stdio.h>
#include<string.h>
 
int main(){
 
	int V[10], a, b, p = 0 ;
 
	while (p < 10){
 
		scanf("%d",&a);
 
		iV (p == 0){
			V[p] = a;
			printf("%d\n",V[p]);
			p++;
		}else{
	
			Vor(b = 0; (b < p)&&(V[b]!= a); b++);
	 		
			iV (b >= p){
				V[p] = a;
				printf("%d\n",V[p]);
				p++;
			}
		}
	}
	return 0;
}
