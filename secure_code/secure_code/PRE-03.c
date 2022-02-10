#if 0
// ������ �ڵ� 1.
#include <stdio.h>

#define SQR(x)  ((x) * (x))

int main() {
    int i = 2;
    printf("%d\n", SQR(++i));  // ((++i) * (++i))

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>

inline int sqr(int x) {
    return x * x;
}

int main() {
    int i = 2;
    printf("%d\n", sqr(++i));  // ((++i) * (++i))

    return 0;
}
#endif


#if 0
// ������ �ڵ� 2.
#include <stdio.h>

int cnt = 0;

#define CALL_FUNC(fp)  (++cnt, fp())

void print_cnt() {
    printf("cnt = %d\n", cnt);
}

int main() {
    int cnt = 0;
    CALL_FUNC(print_cnt);

    return 0;
}

#endif

#if 0
// �ذ� ���
#include <stdio.h>

int cnt = 0;

inline call_func(void(*fp)()) {
    ++cnt;
    fp();
}

void print_cnt() {
    printf("cnt = %d\n", cnt);
}

int main() {
    int cnt = 0;
    call_func(print_cnt);

    return 0;
}

#endif