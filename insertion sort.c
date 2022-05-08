/*Nama File: insertion sort.c*/
/*Deskripsi : mengurutkan bilangan dengan insertion sort */
/*Pembuat : [ Yesy margharetta Munthe - 24060121120031 ]*/
/*Tanggal Pembuatan : [minggu, 08-05-2022 JJ : 20.14 WIB]*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    //kamus lokal
    int n, i, j,temp;
	int arr[30] = {20,40,8,1,23,45,5,2,60,64,74,78,77,82,89,91,99,100,131,154,140,122,149,151,158,162,174,182,197,201};
	//algoritma 
    n=30;
	printf("Panjang array: %d\n",n);
	printf("Isi array: {");
	for(i=0;i<n-1;i++)
	printf("%d,",arr[i]);
	printf("%d}\n",arr[n-1]);
	
	for(i=0; i<n; i++){
		j = i ;
		while(j>0 && arr[j-1] < arr[j] ){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			
			j--;
		}
	}
	printf("Hasil pengurutan descending : \n");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	} 
	return 0;
}

