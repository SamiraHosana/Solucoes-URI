#include <stdio.h>
   
int main() {
    int A, B, C;
    while (scanf("%d%d%d", &A, &B, &C) != EOF){
    

    if((A==0 && B==0 && C==0)||(A==1 && B==1 && C==1) ){
      printf("*\n");
    }
    if((A==0 && B==1 && C==1)||(A==1 && B==0 && C==0) ){
      printf("A\n");
    }
    if((B==0 && A==1 && C==1)||(B==1 && A==0 && C==0) ){
      printf("B\n");
    }
    if((C==0 && B==1 && A==1)||(C==1 && B==0 && A==0)){
      printf("C\n");
    }
    }

return 0;
}