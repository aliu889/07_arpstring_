#include <stdio.h>
#include <string.h>

// 1. Write a function that takes an array of int values as a parameter and returns the average of those values.
double arrAvg(int *arr, int len) {
    int i;
    int sum = 0;
    for (i = 0; i < len; i++) {
        sum += *(arr + i);
    }
    double avg = (double) sum / len;
    return avg;
}

// 2. Write a function that takes 2 arrays of equal size as paramters (you can chose the type). 
// The function should copy the values of the first array into the second.
void arrCopy(int *arr1, int *arr2, int len) {
    int i;
    for (i = 0; i < len; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

// 3. Write a function that takes a string as a parameter and returns its length. 
//When calculating the length of a string, do not include the terminating NULL in the result.
int strLength(char *str) {
    int len = 0;
    while (*str) {
        len++;
        str++;
    }
    return len;
}

void arrPrint(int arr[], int len) {
    int i;
    for (i = 0; i < len-1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d", arr[len-1]);
    printf("\n");
}


int main() {
    // test for question 1
    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("arr1 avg = %lf\n\n", arrAvg(arr1, 7));

    //test for question 2
    int arr2[7];
    printf("original values:\n");
    printf("arr1: ");
    arrPrint(arr1, 7);
    printf("arr2: ");
    arrPrint(arr2, 7);

    arrCopy(arr1, arr2, 7);

    printf("after copying:\n");
    printf("arr1: ");
    arrPrint(arr1, 7);
    printf("arr2: ");
    arrPrint(arr2, 7);
    printf("\n");

    //test for question 3
    char str[] = "arpstring";
    printf("length of str: %d\n\n", strLength(str));

    // using strcpy
    char src[] = "to be copied";
    char dst[] = "destination";
    printf("original strings:\n");
    printf("src: %s\ndst: %s\n", src, dst);
    strcpy(src, dst);
    printf("after strcpy:\n");
    printf("src: %s\ndst: %s\n\n", src, dst);

    // using strcat
    char s1[44] = "the quick brown fox ";
    char s2[] = "jumps over the lazy dog";
    printf("original strings:\n");
    printf("s1: %s\ns2: %s\n", s1, s2);
    strcat(s1, s2);
    printf("after strcat:\n");
    printf("s1: %s\ns2: %s\n\n", s1, s2);

    // using strcmp
    char s3[] = "not equal";
    char s4[] = "Not Equal";
    printf("s3: %s\ns4: %s\n", s3, s4);
    printf("strcmp(s3, s4): %d\n", strcmp(s3, s4));
    char s5[] = "equal";
    char s6[] = "equal";
    printf("s5: %s\ns6: %s\n", s5, s6);
    printf("strcmp(s5, s6): %d\n\n", strcmp(s5, s6));

    // using strchr
    char s7[] = "contains";
    char c1 = 'a';
    printf("s7: %s\nc1: %c\n", s7, c1);
    printf("strchr(s7, c1): %p\n", strchr(s7, c1));
    char s8[] = "doesn't contain";
    char c2 = 'l';
    printf("s8: %s\nc2: %c\n", s8, c2);
    printf("strchr(s8, c2): %p\n", strchr(s8, c2));
}

