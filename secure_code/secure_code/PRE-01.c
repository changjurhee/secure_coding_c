#if 0
// ������ �ڵ�
#include <stdio.h>

#define SQR(x)  x * x

int main() {
    int result = SQR(1 + 2);    // 1 + 2 * 1 + 2
    printf("result = %d\n", result);

    return 0;
}
#endif

#if 1
// �ذ� ���
#include <stdio.h>

#define SQR(x)  (x) * (x)

int main() {
    int result = SQR(1 + 2);    // (1 + 2) * (1 + 2)
    printf("result = %d\n", result);

    return 0;
}

#endif