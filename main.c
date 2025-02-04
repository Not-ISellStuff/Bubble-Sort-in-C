#include <stdio.h>

// Bubble Sort In C 🔥🔥🔥

int main() {
    int arr[5] = {5, 2, 3, 1, 4};

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
  
    return 0;
}
