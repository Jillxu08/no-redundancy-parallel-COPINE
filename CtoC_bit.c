 /*  vtx C[15500];
    set C_bit[243];*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SHIFT 6
#define MASK 63
#define uint32_t vtx
#define uint64_t set

 
set *init_bitarray(int);
void add_to_bitarray(set *, vtx);
void clear_bitarray(set *, vtx);

void CtoC_bit(vtx *C, set *C_bit, int numC){

	C_bit = init_bitarray(243);
    for (i=0, i<numC, i++)
	add_to_bitarray(C_bit, C[i]);
	
	clear_bitarray(C_bit, C[i]);

	return 0;
}
 
set *init_bitarray(int size){
	set *tmp;
 
	tmp = (c*)malloc(size / 64 + 1);
	memset(tmp, 0, (size / 64 + 1));	//initial to 0
 
	return tmp;
}
 


/*将一个整数添加到二进制数组中 ：*/
 
void add_to_bitarray(set *bitarr, vtx num){               /* num代表要插进数组中的数 */
	bitarr[num >> SHIFT] |= (1 << (num & MASK));           /* MASK 为 64 */
} 
 
void clear_bitarray(set *bitarr, vtx num){
	bitarr[num >> SHIFT] &= ~(1 << (num & MASK));
}
 
