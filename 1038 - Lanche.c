#include <stdio.h>
 
int main() {

    int c, q; 
    float t;
    
    scanf("%d%d", &c,&q);
    
    switch(c){
        case 1:
        t=q*4.00;
        break;
        
        case 2:
        t=q*4.50;
        break;
        
        case 3:
        t=q*5.00;
        break;
        
        case 4:
        t=q*2.00;
        break;
        
        case 5:
        t=q*1.50;
        break;
    }
    
    printf("Total: R\$ %.2f\n",t);
    //teste
 
    return 0;
}