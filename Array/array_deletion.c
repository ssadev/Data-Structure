#include <stdio.h>
#define N 100

int main(){
  int a[N], n, opr, i, posi, data;
	printf("Enter Array Size: ");
	scanf("%d", &n);

	for(i=0; i<n; i++){
		printf("Enter Element Value: ");
		scanf("%d", &a[i]);
	}

    while(1){
        printf("Select Operation Delete: \n1 -> From Beginning,\n2 -> From Any Position,\n3 -> From End,\n4 -> Display\n:");
        scanf("%d", &opr);
        switch (opr)
        {
        case 1:
            for(i=0; i<n; i++){
                a[i] = a[i+1];
            }
            a[n]=0;
            --n;
            break;
        case 2:
            printf("Enter Element Position: ");
            scanf("%d", &posi);
            --posi;
            if(posi >= n){
                printf("Position Out Of Array Length\n");
            }else{
                for(i=posi; i<n; i++){
                    a[i] = a[i+1];
                }
                a[n] = 0;
                --n;
            }
            break;
        case 3:
            a[n]=0;
            --n;
            break;
        case 4:
            printf("\nArray Display:\n");
            for(i=0; i<n; i++){
                printf("%d, ", a[i]);
            }
            printf("\n");
            break;
        default:
          printf("Invalid Input\n");
            break;
        }
    }

    return 0;
}
