#include <stdio.h>

#define N 4 //dimension des blocs de 128 bits soit 4X4

void invMixColumns(unsigned char stat[N][N]);

void invShiftrow(unsigned char stat[N][N]);
void InvSubBytes(unsigned char stat[N][N]);
void invCipher(unsigned char data[N][N],unsigned char out[N][N], unsigned char keys[11][N][N]);
