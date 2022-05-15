#include <stdio.h>
int basamaklar_toplami(int sayi){
	if(sayi <= 0)
	return 0;
	
	else
	return sayi % 10 + basamaklar_toplami(sayi/10);
	
}

int main(){
	int sayi;
	printf("bir sayi giriniz:\n");
	scanf("%d", &sayi);
	
	printf("basamaklar toplami:%d", basamaklar_toplami(sayi));
	return 0;
}
