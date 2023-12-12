//Q1: Write a program in C to swap elements using call by reference.

//#include <stdio.h>
//void swap(int *x, int *y) {
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main() {
//    int a, b;
//    printf("Enter two integers: ");
//    scanf("%d %d", &a, &b);
//    printf("Before swapping: a = %d, b = %d\n", a, b);
//    swap(&a, &b);
//    printf("After swapping: a = %d, b = %d\n", a, b);
//    return 0;
//}


//Q2: Write a program in C to print a string in reverse using pointers.

//#include <stdio.h>
//int main()
//{
//    char str1[50];
//    char revstr[50];
//    char *stptr = str1;
//    char *rvptr = revstr;
//    int i=-1;
//    printf(" Input a string : ");
//    scanf("%s",str1);
//    while(*stptr)
//    {
//     stptr++;
//     i++;
//    }
//    while(i>=0)
//    {
//     stptr--;
//     *rvptr = *stptr;
//     rvptr++;
//     --i;
//    }
//    *rvptr='\0';
//    printf(" Reverse of the string is : %s\n\n",revstr);
//    return 0;
//}

// Q3: Write a C program to input and print array elements using pointers.


//#include <stdio.h>
//
//#define MAX_SIZE 100 // Maximum array size
//
//int main()
//{
//    int arr[MAX_SIZE];
//    int N, i;
//    int * ptr = arr;    // Pointer to arr[0]
//
//    printf("Enter size of array: ");
//    scanf("%d", &N);
//
//    printf("Enter elements in array:\n");
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", ptr);
//
//        // Move pointer to next array element
//        ptr++;
//    }
//
//    // Make sure that pointer again points back to first array element
//    ptr = arr;
//
//    printf("Array elements: ");
//    for (i = 0; i < N; i++)
//    {
//        // Print value pointed by the pointer
//        printf("%d, ", *ptr);
//
//        // Move pointer to next array element
//        ptr++;
//    }
//
//    return 0;
//}


//Q4: Write a C program to search for an element in an array using pointers.

//#include <stdio.h>
//
//// Function to search for an element in an array using pointers
//int searchElement(const int *arr, int size, int target) {
//    int index = 0;
//
//    const int *arrEnd = arr + size - 1; // Pointer to the end of the array
//
//    while (arr <= arrEnd && *arr != target) {
//        arr++; // Move the pointer to the next element
//        index++; // Increment the index
//    }
//
//    if (arr <= arrEnd) {
//        return index; // Element found, return the index
//    } else {
//        return -1; // Element not found
//    }
//}
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    int target;
//
//    printf("Enter the element to search for: ");
//    scanf("%d", &target);
//
//    int index = searchElement(arr, size, target);
//
//    if (index != -1) {
//        printf("Element %d found at index %d\n", target, index);
//    } else {
//        printf("Element %d not found in the array\n", target);
//    }
//
//    return 0;
//}
//

//Q5: Write a C program to add two matrices using pointers.
//#include <stdio.h>
//
//int main() {
//    int a[5][5], b[5][5], c[5][5];
//    int i, j, m, n;
//
//    printf("Enter m & n: ");
//    scanf("%d %d", &m, &n);
//
//    printf("Enter 1st matrix:\n");
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    printf("Enter 2nd matrix:\n");
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            scanf("%d", &b[i][j]);
//        }
//    }
//
//    // Matrix Addition
//    printf("\nAddition Matrix:\n");
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//            c[i][j] = a[i][j] + b[i][j];
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
