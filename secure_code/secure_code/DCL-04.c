#if 0
// ������ �ڵ� 1.
void draw_color(int color) {
    switch (color) {
    case 0: /* ... */ break;
    case 1: /* ... */ break;
    case 2: /* ... */ break;
    }
}

int main() {
    // ...
    draw_color(0);

    return 0;
}
#endif

#if 0
// �ذ� ���
enum { RED, GREEN, BLUE };
void draw_color(int color) {
    switch (color) {
    case RED: /* ... */ break;
    case GREEN: /* ... */ break;
    case BLUE: /* ... */ break;
    }
}

int main() {
    // ...
    draw_color(RED);

    return 0;
}
#endif

#if 0
// ������ �ڵ� 2.
#include <stdio.h>

int main() {
    char buff[16];

    fgets(buff, 32, stdin);
    printf("%s\n", buff);

    return 0;
}

#endif

#if 0
// �ذ� ��� 1.
#include <stdio.h>

enum { BUFF_SIZE = 16 };

int main() {
    char buff[BUFF_SIZE];

    fgets(buff, BUFF_SIZE, stdin);
    printf("%s\n", buff);

    return 0;
}

#endif

#if 0
// �ذ� ��� 2.
#include <stdio.h>

int main() {
    char buff[16];

    fgets(buff, sizeof(buff), stdin);
    printf("%s\n", buff);

    return 0;
}
#endif