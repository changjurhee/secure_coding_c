#if 0
// ������ �ڵ�
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pArr = malloc(-1);

    for (int i = 0; i < 10; i++)
        pArr[i] = 0;

    // ...

    free(pArr);
    return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pArr = malloc(-1);
    if (pArr == NULL) {
        printf("malloc error\n");
        exit(-1);
    }

    for (int i = 0; i < 10; i++)
        pArr[i] = 0;

    // ...

    free(pArr);
    return 0;
}
#endif 

