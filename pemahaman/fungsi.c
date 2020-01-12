#include "header.h"

biodata input()
{
    biodata bio;

    printf("Nama Lengkap : ");
    gets(bio.nama);
    printf("TTL : ");
    gets(bio.ttl);
    printf("Jenis Kelamin : ");
    scanf("%s",&bio.jeskel);
    printf("Golongan darah : ");
    fflush(stdin);
    scanf("%c",&bio.gol_dar);
    fflush(stdin);
    printf("Alamat : ");
    gets(bio.alamat);
    printf("RT : ");
    scanf("%d",&bio.rt);
    printf("RW : ");
    scanf("%d",&bio.rw);
    printf("Tinggi Badan : ");
    scanf("%d",&bio.tinggi);
    printf("Berat Badan : ");
    scanf("%d",&bio.berat);

    return bio;
}

void output(biodata bio)
{
    printf("Nama Lengkap : %s",bio.nama);
    printf("TTL : %s",bio.ttl);
    printf("Jenis Kelamin : %s",bio.jeskel);
    printf("Golongan darah : %c",bio.gol_dar);
    printf("Alamat : %s",bio.alamat);
    printf("RT : %d",bio.rt);
    printf("RW : %d",bio.rw);
    printf("Tinggi Badan : %d",bio.tinggi);
    printf("Berat Badan : %d",bio.berat);
}

void output_data(biodata bio[],int batas)
{
    if(batas==0)
    {

    }
    else
    {
    printf("Nama Lengkap : %s\n",bio[batas-1].nama);
    printf("TTL : %s\n",bio[batas-1].ttl);
    printf("Jenis Kelamin : %s\n",bio[batas-1].jeskel);
    printf("Golongan darah : %c\n",bio[batas-1].gol_dar);
    printf("Alamat : %s\n",bio[batas-1].alamat);
    printf("RT : %d\n",bio[batas-1].rt);
    printf("RW : %d\n",bio[batas-1].rw);
    printf("Tinggi Badan : %d\n",bio[batas-1].tinggi);
    printf("Berat Badan : %d\n",bio[batas-1].berat);
    }
}
