#if 0
// ������ �ڵ�
#include <stdio.h>

int main() {
    float f = 10000000000.0f;
    int i = f;

    printf("f: %f\n", f);
    printf("i: %d\n", i);

    return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>
#include <limits.h>

int main() {
    float f = 10000000000.0f;
    int i;

    if (f > (float)INT_MAX || f < (float)(INT_MIN)) {
        printf("error\n");
        return -1;
    }

    i = f;

    printf("f: %f\n", f);
    printf("i: %d\n", i);

    return 0;
}
#endif 
