#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nama[50];
    char ttl[100];
    char jeskel[15];
    char gol_dar;
    char alamat[100];
    int rt;
    int rw;
    int tinggi;
    int berat;
}biodata;

biodata input();
void output_data(biodata bio[],int batas);
#endif // HEADER_H_INCLUDED
