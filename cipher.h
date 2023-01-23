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