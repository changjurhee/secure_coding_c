#if 0
// ������ �ڵ�
#include <stdio.h>

int sum_arr(int* arr, int cnt) {
    int sum = 0;
    for (int i = 0; i < cnt; i++)
        sum += arr[i];
    *arr = 0;
    return sum;
}

int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%d\n", sum_arr(arr, 10));

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>

int sum_arr(const int* arr, int cnt) {
    int sum = 0;
    for (int i = 0; i < cnt; i++)
        sum += arr[i];
    *arr = 0;
    return sum;
}

int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    printf("%d\n", sum_arr(arr, 10));

    return 0;
}
#endif
