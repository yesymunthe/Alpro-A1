/*Nama File: CekHari.c*/
/*Deskripsi : Menampilkan kelayar nama hari dengan inputan angka 1 s.d. 7*/
/*Pembuat : [ Yesy margharetta Munthe - 24060121120031 ]*/
/*Tanggal Pembuatan : [minggu, 13-03-2022 JJ : 21.14 WIB]*/

  
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*Kamus*/
	int n ; //Angka (1,2,3,4,5,6,7)  yang digunakan untuk merepresentasikan nama hari.
	char hari ; //Nama-nama bulan yang akan merepresentasikan angka 1 - 7.

	
	/*Algoritma*/
	printf("Input angka hari (n) = ");
	scanf("%d",  &n);
	
	switch (n){
	case 1 :
			printf("senin");
			break;
    case 2 :
	      	printf("selasa");
	       	break;
 	case 3 :
	 	    printf("rabu");
			break;
	case 4 :
			printf("kamis");
			break;
	case 5 :
			printf("jumat");
			break;
	case 6 :
			printf("sabtu");
			break;
	case 7 :
			printf("minggu");	
			break;		
			
	default:
	        printf("Masukan nomor hari tidak tepat");
	}
	
    return 0;
}

