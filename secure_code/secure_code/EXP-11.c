#if 0
// ������ �ڵ�
#include <stdio.h>
#include <string.h>

typedef struct {
    char buf[32];
} String;

String make_str(const char* s) {
    String str;
    strcpy(str.buf, s);
    return str;
}

int main() {
    printf("%s\n", make_str("hello").buf);
    return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>
#include <string.h>

typedef struct {
    char buf[32];
} String;

String make_str(const char* s) {
    String str;
    strcpy(str.buf, s);
    return str;
}

int main() {
    String str = make_str("hello");
    printf("%s\n", str.buf);

    return 0;
}
#endif 

