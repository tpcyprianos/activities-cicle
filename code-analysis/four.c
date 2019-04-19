#include <stdio.h>

#define A 10
#define B 10

int main()
{
  int x;                          
  int y;                          
  int T[A] [B];          
  
  
  for(y=0; y < A; y+=1)
    for(x=0; x < B; x+=1)
      T[y][x] = y*x;
  
  for (x=1; x < B; x+=1)
    printf("%3d", x);
  printf("\n");
  
  
  printf("   ");
  for (x=0; x < 3*B; x+=1)
    printf("-");
  printf("\n");
  
  for (y=0; y < A; y+=1) {
    printf("%2d|", y);
    for(x=0; x < B; x+=1)
      printf("%3d", T[y][x]);
    printf("\n");
  }
  
}
