#if 0
// ������ �ڵ� 1.
#include <stdio.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MAX;
    sint2 = 1;

    result = sint1 + sint2;
    printf("result = %d\n", result);

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MAX;
    sint2 = 1;

    if (((sint1 > 0) && (sint2 > 0) && (sint1 > (INT_MAX - sint2))) ||
        ((sint1 < 0) && (sint2 < 0) && (sint1 < (INT_MIN - sint2)))) {
        fprintf(stderr, "int overflow!\n");
        exit(-1);
    }

    result = sint1 + sint2;
    printf("result = %d\n", result);

    return 0;
}

#endif

#if 0
// ������ �ڵ� 2.
#include <stdio.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MAX;
    sint2 = 2;

    result = sint1 * sint2;
    printf("result = %d\n", result);

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MAX;
    sint2 = 2;

    if (sint1 > 0) {
        if (sint2 > 0) {    // ��� * ���
            if (sint1 > (INT_MAX / sint2)) {
                fprintf(stderr, "int overflow!\n");
                exit(-1);
            }
        }
        else {  // ��� * ����
            if (sint2 < (INT_MIN / sint1)) {
                fprintf(stderr, "int overflow!\n");
                exit(-1);

            }
        }
    }
    else {
        if (sint2 > 0) {    // ���� * ���
            if (sint1 < (INT_MIN / sint2)) {
                fprintf(stderr, "int overflow!\n");
                exit(-1);

            }
        }
        else {  // ���� * ����
            if ((sint1 != 0) && (sint2 < (INT_MAX / sint1))) {
                fprintf(stderr, "int overflow!\n");
                exit(-1);

            }
        }
    }

    result = sint1 * sint2;
    printf("result = %d\n", result);

    return 0;
}
#endif

#if 0
// ������ �ڵ� 3.
#include <stdio.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MIN;
    sint2 = -1;

    result = sint1 / sint2;
    printf("result = %d\n", result);

    return 0;
}

#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    signed int sint1, sint2, result = 0;
    sint1 = INT_MIN;
    sint2 = -1;

    if ((sint2 == 0) || ((sint1 == INT_MIN) && (sint2 == -1))) {
        fprintf(stderr, "int overflow!\n");
        exit(-1);
    }

    result = sint1 / sint2;
    printf("result = %d\n", result);

    return 0;
}

#endif

