#include <stdio.h>

int main() {
  
    int K, *C, i;
    float N,M,X,Y;
    
    while(1){
    scanf("%d", &K);
    if(K == 0) break;
    scanf("%f", &N);
    scanf("%f", &M);
    
    C=(int *)(malloc(K*sizeof(int)));
   
     for(i=0; i<K; i++){
    scanf("%f", &X);
    scanf("%f", &Y);

     
    if((X==N && Y==M)||(X==N)||(Y==M)){
          C[i]= 1;         
    }
    else if((X<N && Y>M)){
       C[i]= 2;
    }
    else if((X<N && Y<M)){
       C[i]= 3; 
    }
    else if((X>N && Y>M)){
       C[i]= 4;
    }
    else if((X>N && Y<M)){
       C[i]= 5;
    }    
      }

    for(i=0; i<K;i++){
     
      if(C[i]==1){
        printf("divisa\n");
        }
        else if(C[i]==2){
        printf("NO\n");
        }
        else if(C[i]==3){
        printf("SO\n");
        }
        else if(C[i]==4){
        printf("NE\n");
        }
        else if(C[i]==5){
        printf("SE\n");
        }
    }
    free(C);
    }
    scanf("%d", &K);
      return 0;
}