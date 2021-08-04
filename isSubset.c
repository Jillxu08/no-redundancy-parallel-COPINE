#include <stdio.h>
int main(void){
    uint64_t C_bit[243];
    uint64_t ITptr_C_bit[243];
    int pruning;
    int m;

    for(k=0,m=0; k<243; k++)
    {if(C_bit[k] & ITptr_C_bit[k] == ITptr_C_bit[k])
        m+=1;
    else
        break;
    } 
    
    if(m == 243)
       pruning=0;
    else
       pruning=1;

  return 0;     
}

/把 C[k] 转换成 C_bit[k]