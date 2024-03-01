#include <stdio.h>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    int middleIndex = originalSize / 2;

    printf("Original Array:\n");
    for (int i = 0; i < originalSize; i++) 
    {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    originalSize++;
    for (int i = originalSize - 1; i > middleIndex; i--) {
        originalArray[i] = originalArray[i - 1];
    }
    originalArray[middleIndex] = 13;

    printf("Array with 13 added in the middle:\n");
    for (int i = 0; i < originalSize; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    for (int i = middleIndex; i < originalSize - 1; i++) {
        originalArray[i] = originalArray[i + 1];
    }
    originalSize--;

    printf("Final Array (without 13):\n");
    for (int i = 0; i < originalSize; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");
    return 0;
}
