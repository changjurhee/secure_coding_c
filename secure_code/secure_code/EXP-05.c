#if 0
// ������ �ڵ�
#include <stdio.h>
#define BUF_SIZE    (10)

int main() {
    int buf[BUF_SIZE];

    int* cur = buf;
    while (cur < (buf + sizeof(buf)))
        *cur++ = 0;

    for (int i = 0; i < BUF_SIZE; i++)
        printf("buf[%d] = %d\n", i, buf[i]);

    return 0;
}
#endif

#if 0
// �ذ� ��� 1.
#include <stdio.h>
#define BUF_SIZE    (10)

int main() {
    int buf[BUF_SIZE];

    int* cur = buf;
    while (cur < ((char*)buf + sizeof(buf)))
        *cur++ = 0;

    for (int i = 0; i < BUF_SIZE; i++)
        printf("buf[%d] = %d\n", i, buf[i]);

    return 0;
}
#endif

#if 0
// �ذ� ��� 2.
#include <stdio.h>
#define BUF_SIZE    (10)

int main() {
    int buf[BUF_SIZE];

    for (int i = 0; i < BUF_SIZE; i++)
        buf[i] = 0;

    for (int i = 0; i < BUF_SIZE; i++)
        printf("buf[%d] = %d\n", i, buf[i]);

    return 0;
}
#endif