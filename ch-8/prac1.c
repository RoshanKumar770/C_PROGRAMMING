#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void createArray(int arr[], int *n) {
    printf("Enter the number of elements in the array: ");
    scanf("%d", n);
    printf("Enter %d elements: ", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("Array created successfully!\n");
}

void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty!\n");
    } else {
        printf("Array elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

void insertElement(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Array overflow! Cannot insert element.\n");
        return;
    }
    int elem, pos;
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    printf("Enter the position (1 to %d) where the element should be inserted: ", *n + 1);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > *n + 1) {
        printf("Invalid position!\n");
    } else {
        for (int i = *n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = elem;
        (*n)++;
        printf("Element inserted successfully!\n");
    }
}

void deleteElement(int arr[], int *n) {
    if (*n == 0) {
        printf("Array underflow! No elements to delete.\n");
        return;
    }
    int pos;
    printf("Enter the position (1 to %d) of the element to delete: ", *n);
    scanf("%d", &pos);
    
    if (pos < 1 || pos > *n) {
        printf("Invalid position!\n");
    } else {
        for (int i = pos - 1; i < *n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("Element deleted successfully!\n");
    }
}

int main() {
    int arr[MAX];
    int n = 0, choice;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                insertElement(arr, &n);
                break;
            case 4:
                deleteElement(arr, &n);
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
