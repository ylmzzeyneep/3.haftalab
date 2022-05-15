#include <stdio.h>
int ebob_bul(int a, int b){
    if(a==b)
    return a;
    
    if(a>b)
    return ebob_bul(a-b, b);
    
    else
    return ebob_bul(a, b-a);
}

int main(){
	int a, b;
	
	printf("birinci sayiyi giriniz:");
	scanf("%d", &a);
	
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &b);
	
	printf("%d", ebob_bul(a, b));
	return 0;
}
