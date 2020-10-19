
#include <stdio.h> 
  
int main() 
{ 
    int size;
    printf("Enter the size of Your Array : ");
    scanf("%d",&size);
    
    int arr[size];
    
    for(int z = 0 ; z < size ; z++)
    {
    printf("Enter element : ");    
    scanf("%d",&arr[z]);
    
    }

        printf("Array is ");
     int d;   
    for (d=0; d < size; d++) 
        printf("%d ", arr[d]);
    printf("\n");

     int i, j; 
   int temp ;
   for (i = 0; i < size-1; i++)       
      // Last i elements are already in place    
       for (j = 0; j < size-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
              }

    int k;
    printf("Sorted Array is ");
    for (k=0; k < size; k++) 
        printf("%d ", arr[k]);
    printf("\n");

    return 0; 
}           




