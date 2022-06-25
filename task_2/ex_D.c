#include <stdio.h>

int nod (int a, int b){

   int c=0;

   while (b) {
      c = a % b;
      a = b;
      b = c;
   }
return a;
}

int main (void){

    int a = 18;
    int b = 30;

    printf("NOD %d, %d = %d\n",a,b,nod (b,a));
}
