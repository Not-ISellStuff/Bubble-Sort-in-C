# Bubble-Sort-in-C
bubble sort algorithm in c. 

# Bubble Sort

Time Complexity: **O(n^2)**

```c
int arr[5] = {5, 4, 3, 2, 1};

for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
        if (arr[i] > arr[j]) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
```
