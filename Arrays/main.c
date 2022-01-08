#include <stdio.h>
#include <malloc.h>

/*
 * Array ADT (Abstract Data Type)
 *
 * Creating an array of user defined size,
 * with a Display operation.
 */
struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr2){
    printf("Elements of arr Array are : ");
    for(int i=0; i<arr2.length; i++){
        printf("%d ", arr2.A[i]);
    }

}

int main(){

    struct Array arr;

    printf("Enter array size \n");
    scanf("%d", &arr.size);

    arr.A = (int *) malloc(arr.size*sizeof(int));
    arr.length=0;
    int el;

    printf("Enter number of elements to be inserted : ");
    scanf("%d", &el);

    printf("Enter elements of array \n");
    for(int i=0; i<el; i++){
        scanf("%d", &arr.A[i]);
        arr.length++;
    }

    printf("Array length = %d \n", arr.length);
    Display(arr);
}