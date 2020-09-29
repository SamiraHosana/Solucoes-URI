#include <stdio.h>
 
int main() {
 int i=0, *C, q, r=0;
 
 
 scanf("%d", &q);
 
    C=(int *)(malloc(q*sizeof(int)));

    for (i=0; i<q;i++){
      scanf("%d", &C[i]);  
    }
    for (i=0; i<q; i++){
      if(C[i]==1){
        r= r+1;
      }
    }
  printf("%d\n", r);


    return 0;
}