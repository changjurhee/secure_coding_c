#if 0
// ������ �ڵ�
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE    (10)

int main() {
    int** pArr = (int**)malloc(4 * ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        pArr[i] = (int*)malloc(4 * ARR_SIZE);

    // ...

    for (int i = 0; i < ARR_SIZE; i++)
        free(pArr[i]);
    free(pArr);

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <stdlib.h>
#define ARR_SIZE    (10)

int main() {
    int** pArr = (int**)malloc(sizeof(int*) * ARR_SIZE);

    for (int i = 0; i < ARR_SIZE; i++)
        pArr[i] = (int*)malloc(sizeof(int) * ARR_SIZE);

    // ...

    for (int i = 0; i < ARR_SIZE; i++)
        free(pArr[i]);
    free(pArr);

    return 0;
}
#endif
