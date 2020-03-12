#include <stdio.h>
#define N 100

int main(){
	int a[N], n, i, as, data;
	printf("Enter Array Size: ");
	scanf("%d", &as);
	
	for(i = 0; i<as; i++){
		printf("Enter Value Of Array index [%d]: ", i);
		scanf("%d", &a[i]);
	}

	printf("Display Array\n");
	for(i = 0; i<as; i++){
		printf("%d, ", a[i]);
	}
	printf("\nNow Insert Element At Beginning Of Array\n");
	printf("Enter Value OF New Elm: ");
	scanf("%d", &data);
	for(i = as+1; i>=0; i--){
		a[i+1] = a[i];
	}
	a[0] = data;
	printf("\nDisplay Array\n");
	for(i = 0; i<as+1; i++){
		printf("%d, ", a[i]);
	}
	
	printf("\n");
	main();
	return 0;
}