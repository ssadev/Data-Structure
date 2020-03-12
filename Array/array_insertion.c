#include <stdio.h>
#define N 100


int main(){
	int a[N], n, opr, i, j, posi, data;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter Element Value: ");
		scanf("%d", &a[i]);
	}

    while(1){
        printf("Select Operation: \n1 -> Insert At Beginning,\n2 -> Insert At Any Position,\n3 -> Insert At End,\n4 -> Display\n:");
        scanf("%d", &opr);
        
        switch(opr){
            case 1:
            printf("Enter Value: ");
            scanf("%d", &data);
            for(i=n+1; i>=0; i--){
                a[i] = a[i-1];
            }
            a[0] = data;
            ++n;
            break;
            case 2:
            printf("Enter Position: ");
            scanf("%d", &posi);
            printf("Enter Value: ");
            scanf("%d", &data);
            --posi;
            for(i=n+1; i>=posi; i--){
                a[i+1] = a[i];
            }
            a[posi] = data;
            ++n;
            break;
            case 3:
            printf("Enter Value: ");
            scanf("%d", &data);
            a[n] = data;
            ++n;
            break;
            case 4:
                printf("\nArray Display:\n");
                for(i=0; i<n; i++){
                    printf("%d, ", a[i]);
                }
                printf("\n");
            break;
        }     
    }


	return 0;
}