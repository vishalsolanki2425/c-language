//#include<stdio.h>
//
//int main()
//{
//	int size;
//
//	printf("enter array size : ");
//	scanf("%d",&size);
//
//	int a[size];
//	int  sum[size];
//	int i;
//
//	printf("\n\n ARRAY INPPUT\n\n");
//
//	for(i=0; i<size; i++)
//	{
//		printf("enter a element a[%d] is:",i);
//		scanf("%d",&a[i]);
//	}
//	printf("\n\n ARRAY SUM :\n\n");
//}


#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Duplicate elements in the array:\n");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;	
            }
        }
    }
}