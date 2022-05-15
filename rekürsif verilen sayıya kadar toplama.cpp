#include <stdio.h>
    int topla(int a){
 	
	if(a==0){
 	   return 0;
	 }
       return a + topla(a-1);
 
   }
    
	int main(){
	int n;
	printf("bir sayi giriniz:");
	scanf("%d", &n);
	
	printf("%d", topla(n));
	
	return 0;
	
	}
