#include <stdio.h>
int main()
{
    int size;
    
    printf("Enter total number of elements in the Array: ");
    scanf("%d", &size);
    
    int arr[size];
        
    printf("Enter those elemenrs: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < size; i++) {
        if(max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
    } 
    printf("max: %d\n", max);
    printf("min: %d\n", min);
    
    return 0;
}