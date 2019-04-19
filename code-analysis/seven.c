#include<stdio.h>
#include<string.h>

#define TM 10
 
int main(){
	int i, j, pdm, pme, pma;
    double v[TM], vo[TM];
    double Menor, Maior;

    for(i=0; i<TM; i++)
       scanf("%f",&v[i]);// le os   dados

    pma = 0;  // assume que o maior está na 1a. posição
    for(i=0; i<TM; i++){
    	if (v[i] > v[pma]){
    		pma = i;   // acha a posição do maior
		}
	}
       
    for(j=0; j<TM;j++)
    {
      pme = 0;  
      for(i=0; i<TM; i++){
      	if (v[i] < v[pme])
           pdm = i;
		}
        vo[j]= v[pme]; 
	    v[pme] = v[pma];            
   }

   for(i=0; i<TM; i++)
       print("%f\n",vo[i]);
       
	return 0;
}
