#if 0
// ������ �ڵ�
#include <stdio.h>
#include <signal.h>

int square(int a) { return a * a; }
int cube(int a) { return a * a * a; }
int add(int a, int b) { return a + b; }

int main() {
    int(*fp)(int);
    // ...

    fp = add;
    printf("%d\n", fp(1));

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <signal.h>

int square(int a) { return a * a; }
int cube(int a) { return a * a * a; }
int add(int a, int b) { return a + b; }

int main() {
    int(*fp)(int);
    // ...

    fp = add;
    printf("%d\n", fp(1,1));

    return 0;
}
#endif

