#if 0
// ������ �ڵ� 1.
#include <stdio.h>

int main() {
    func(1, 2);
    return 0;
}

int func(int a, int b, int c) {
    printf("func(%d, %d, %d)\n", a, b, c);
    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>

int func(int a, int b, int c);

int main() {
    func(1, 2, 3);
    return 0;
}

int func(int a, int b, int c) {
    printf("func(%d, %d, %d)\n", a, b, c);
    return 0;
}

#endif

#if 0
// ������ �ڵ� 2.
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int(*fp)(int);

    fp = add;
    printf("%d\n", fp(1));

    return 0;
}

#endif

#if 1
// �ذ� ���
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int(*fp)(int, int);

    fp = add;
    printf("%d\n", fp(1, 1));

    return 0;
}


#endif

