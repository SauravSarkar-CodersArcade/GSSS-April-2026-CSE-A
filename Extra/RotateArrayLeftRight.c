#include<stdio.h>
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void rotateLeft(int arr[], int n, int k){
    k = k % n; // Normalisation [To save steps]
    int result[n];
    for(int i=0; i<n; i++){
        result[i] = arr[(i+k) % n];
    }
    printArray(result, n);
}
void rotateRight(int arr[], int n, int k){
    k = k % n; // Normalisation [To save steps]
    int result[n];
    for(int i=0; i<n; i++){
        result[i] = arr[(i - k + n) % n];
    }
    printArray(result, n);
}
int main(){
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    printf("Original: ");
    printArray(arr, n);
    printf("Left Rotation by %d: ", k);
    rotateLeft(arr, n, k);
    printf("Right Rotation by %d: ", k);
    rotateRight(arr, n, k);
    return 0;
}