int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    findMaxMin(arr, n);

    return 0;
}
//the name of the func should be findMAxMin
//the function should have two arguments one integer array ,and one integer value which is a lenght of the array
//print the maximum min in total  and comparisions 
