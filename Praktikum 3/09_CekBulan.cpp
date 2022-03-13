/*Nama File: CekHari.c*/
/*Deskripsi : Menampilkan kelayar nama bulan dengan inputan angka 1 s.d. 12*/
/*Pembuat : [ Yesy margharetta Munthe - 24060121120031 ]*/
/*Tanggal Pembuatan : [minggu, 13-03-2022 JJ : 21.14 WIB]*/

  
#include <Stdio.h>
#include <stdlib.h>

int main()
{
		/*Kamus*/
	int n ; //Angka (1,2,3,4,5,6,7,8,9,10,11,12)  yang digunakan untuk merepresentasikan nama bulan.
	char bulan ; //Nama-nama bulan yang akan merepresentasikan angka 1 - 12.

	
	/*Algoritma*/
	printf("Input angka bulan (n) = ");
	scanf("%d",  &n);
	
	switch (n){
	case 1 :
			printf("januari");
			break;
    case 2 :
	      	printf("februari");
	       	break;
 	case 3 :
	 	    printf("maret");
			break;
	case 4 :
			printf("mei");
			break;
	case 5 :
			printf("april");
			break;
	case 6 :
			printf("juni");
			break;
	case 7 :
			printf("juli");	
			break;
	case 8 :
			printf("agustus");	
			break;
	case 9 :
			printf("november");	
			break;
	case 10 :
			printf("oktober");	
			break;
	case 11:
			printf("november");	
			break;
	case 12 :
			printf("desember");	
			break;
			
			
	default:
	        printf("Masukan nomor bulan tidak tepat");
	}
	
    return 0;
}

