# Bubble-Sort-in-C
bubble sort algorithm in c. 

# Bubble Sort

Time Complexity: **O(n^2)**

```c
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
