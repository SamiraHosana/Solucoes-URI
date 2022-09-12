#include <stdio.h>

int main(void) {
int N,*V,K,i,x;
scanf("%d",&N);
K=N*4;
x=K;
V=(int *)(malloc(K*sizeof(int)));
for (i=0;i<K;i++){
  V[i]=x--;
}
for (i=K-1;i>=0;i--){
   
  if (V[i]%4==0){
  printf("PUM\n");
  }
  else{
     printf("%d ",V[i]);
  }

}
////

  return 0;
}