// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int count = 0;
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mean = (start + end) / 2;
        if (value == arr[mean]) {
            int flag = mean + 1;
            while (value == arr[mean]) {
                mean--;
                count++;
            }
            while (value == arr[flag]) {
                flag++;
                count++;
            }
            return count;
        } else if (value < arr[mean]) {
            end = mean - 1;
        } else if (value > arr[mean]) {
            start = mean + 1;
        }
    }
    return 0;
}
