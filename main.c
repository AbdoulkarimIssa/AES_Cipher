#include "cipher.h"
#include "invcipher.h"


unsigned char keys[11][N][N] = {{
    {0x2b,0x28,0xAB,0x09},
    {0x7E,0xAE,0xF7,0xCF},
    {0x15,0xD2,0x15,0x4F},
    {0x16,0xA6,0x88,0x3C}
},0
};

int main(){
    unsigned char cipherdata[N][N] = { 0 };
    unsigned char invCipherOut[N][N] = { 0 };
    unsigned char data[N][N] = {
    {0x32,0x88,0x31,0xE0},
    {0x43,0x5A,0x31,0x37},
    {0xF6,0x30,0x98,0x07},
    {0xA8,0x8D,0xA2,0x34}};

    printf("Key generating ... \n");
    generatekey(keys);
    printf("Key generated \n");

    printf("Data \n");
    printTableau(data, N, N);

    printf("Cipher Data \n");
    cipher(data,cipherdata,keys);
    printTableau(cipherdata, N, N);

    printf("InvCipher data \n");
    invCipher(cipherdata,invCipherOut,keys);
    printTableau(invCipherOut, N, N);

  return 0;
}