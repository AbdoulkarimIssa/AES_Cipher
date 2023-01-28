#include <stdio.h>

#define N 4 //dimension des blocs de 128 bits soit 4X4

void printTableau(unsigned char tableau[N][N], int ligne, int colone);

void subBytes(unsigned char stat[N][N]);

void shiftrow(unsigned char stat[N][N]);

void mixColumns(unsigned char stat[N][N]);

unsigned char EvaluationPremierExpressiondeS(unsigned char tmp);

void isolationColumn(unsigned char stat[N][N], int column, unsigned char s[N]);

void multiplicationEtReafectaion(unsigned char stat[N][N], int column, unsigned char s[N]);

void addRoundKey(unsigned char stat[N][N],unsigned char key[N][N]);
void generatekey(unsigned char keys[10][N][N]);
void f_rotword(unsigned char keys[10][N][N], int numKey,unsigned char rotword[N]);
void cipher(unsigned char data[N][N],unsigned char out[N][N], unsigned char keys[11][N][N]);
