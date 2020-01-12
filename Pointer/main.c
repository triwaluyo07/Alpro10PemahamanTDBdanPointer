#include "header.h"

int main()
{
    int angkabiasa;
    int *angkapointer;

    angkabiasa = 48;
    angkapointer = &angkabiasa;

    printf("nilai angka biasa = %d \n",angkabiasa);
    printf("nilai angka pointer = %d \n",*angkapointer);

    printf("Proses pointer\n");
    int angka2;
    int *angka= &angka2;
    *angka=10;

    printf("angka * = %d, angka2 = %d\n",*angka,angka2);
    printf("angka & = %d, angka = %d\n",&angka,angka);
    printf("angka2 & = %d, angka2 = %d\n",&angka2,angka2);

    puts("\n");
    int var1=6;
    int var2=8;
    printf("nilai a = %d, nilai b = %d\n",var1,var2);
    swapnilai(&var1,&var2);
    printf("nilai a = %d, nilai b = %d",var1,var2);

    puts("\n");

    printf("Malloc\n");
    int *data;
    int jumlah=2;
    ///penggunaan fungsi
    data = malloc(jumlah*sizeof(int));
    ///output
    data[0]=5;
    data[1]=7;
    printf("data[0] = %d\n",data[0]);
    printf("data[1] = %d\n",data[1]);
    return 0;
}

///pointer = cara untuk mengubah nilai pada var yg
///dilewatkan kedalam suatu fungsi
///* (pointer) -> berisikan alamat dari obj lain
///& -> mengatur pointer agar menunjuk ke var lain
