#if 0
// ������ �ڵ�
#include <stdio.h>

int str_len(const char* s) {
    char* p = s;
    while (*p)
        ++p;
    return p - s;
}

int main() {
    char str[] = "hello";
    printf("%d\n", str_len(str));

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>

int str_len(const char* s) {
    const char* p = s;
    while (*p)
        ++p;
    return p - s;
}

int main() {
    char str[] = "hello";
    printf("%d\n", str_len(str));

    return 0;
}
#endif
