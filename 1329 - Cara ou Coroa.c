#include <stdio.h>
 
int main() {
 
 int N, i, *J, joao, maria;
 
 while(1){
     scanf("%d", &N);
     if(N==0) break;
     
     J= (int *)malloc(N*sizeof(int*));
        joao=0, maria=0;  
     for(i=0; i<N;i++){
         scanf("%d",&J[i]);
     }
     
     for(i=0; i<N;i++){
         if(J[i]==0){
             maria=maria+1;
         }
         else{
             joao=joao+1;
         }
        
     }
     free(J);
     
     printf("Mary won %d times and John won %d times\n", maria, joao);
 }
 
    return 0;
}