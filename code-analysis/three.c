#include <stdio.h>       

#define A 5
#define L 5

int main()
{
   int x;                            
   int y;                            
   int m [A] [L]; 

   y = 0;
   while(y < A)
   {
     x = 0;
     while(x < L)
     {
        m[y][x] = 0;
        x+=1;
     }
     y+=1;
   }

   scanf("%d,%d", &y, &x);    

   while (x >= 0 && y >= 0)
   {
      m[y][x] = 1;    

      y = 0;
      while (y < A)   
      {
        x = 0;
        while (x < L)
        {
             printf("%d ", m[y][x] );
             x += 1;
        }
        printf("\n\n");
        y += 1;
      }
      
      scanf("%d,%d", &y, &x);    
   }
   
}


