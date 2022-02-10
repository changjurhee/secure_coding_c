#if 0
#include <stdio.h>
// ������ �ڵ� 1.
#define SWAP(x, y)  \
    int tmp = x;    \
    x = y;          \
    y = tmp;

int main() {
    int x, y;
    int tmp;

    scanf("%d%d", &x, &y);
    if (x != y)
        SWAP(x, y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
#endif

#if 0
#include <stdio.h>
// ������ �ڵ� 2.
#define SWAP(x, y)    \
    { int tmp = x;    \
      x = y;          \
      y = tmp;  }

int main() {
    int x, y;
    int tmp;

    scanf("%d%d", &x, &y);
    if (x != y)
        SWAP(x, y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
#endif

#if 0
#include <stdio.h>
// ������ �ڵ� 3.
#define SWAP(x, y)    \
    { int tmp = x;    \
      x = y;          \
      y = tmp;  }

int main() {
    int x, y;
    int tmp;

    scanf("%d%d", &x, &y);
    if (x != y)
        SWAP(x, y);
    else
        printf("same\n");

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
#endif

#if 1
#include <stdio.h>
// �ذ� ���
#define SWAP(x, y)    \
    do{ int tmp = x;    \
        x = y;          \
        y = tmp;  } while(0)

int main() {
    int x, y;
    int tmp;

    scanf("%d%d", &x, &y);
    if (x != y)
        SWAP(x, y);
    else
        printf("same\n");

    printf("x = %d, y = %d\n", x, y);

    return 0;
}
#endif
