/*Nama File: Luas Bujur Sangkar.c*/
/*Deskripsi : Menghitung dan menampilkan luas bujur sangkar*/
/*Pembuat : [ Yesy margharetta Munthe - 24060121120031 ]*/
/*Tanggal Pembuatan : [Jumat, 04-03-2022 JJ : 10.25 WIB]*/

  
#include <Stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int S ; //variabel sisi
    int L ; //luas bujursangkar


/*Algoritma*/
    printf("Masukkan S :  ") ;
    scanf("%d", &S );
    
    L = S * S;
    printf("Luas Bujur Sangkar ( S * S ) = %d * %d = %d\n",S,S,L);
    return 0;
}    
