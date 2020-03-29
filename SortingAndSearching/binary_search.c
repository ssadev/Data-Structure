#include <stdio.h>
#define N 100

int main(){
    int n, val, i, a[N], left, right, mid;
    printf("Enter Array len: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter Element Value: ");
        scanf("%d", &a[i]);
    }

    printf("\nDisplay Array: ");
    for(i=0; i<n; i++)
        printf("%d, ", a[i]);
        

    printf("\nSearch Value: ");
    scanf("%d", &val);
    
    left = 0;
    right = n;
    
    while(left<=right){
    	mid = (left+right)/2;
    	if(a[mid] == val){
    		printf("Search Result Value: %d\n", a[mid]);
    		return 0;
		}else if(val > a[mid]){
			left = mid+1;
		}else{
			right = mid-1;
		}
    	
	}
    
	printf("Srearch Result 0\n");
	return 0;
	
}
