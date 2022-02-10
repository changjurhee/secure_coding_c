#if 0
// ������ �ڵ�
#include <stdio.h>

typedef struct {
    int x, y;
} Point;

void print_point(Point* p) {
    printf("x = %d, y = %d\n", p->x, p->y);
    p->x = -1;
}

int main() {
    Point p = { 0, };
    print_point(&p);

    return 0;
}
#endif

#if 1
// �ذ� ���
#include <stdio.h>

typedef struct {
    int x, y;
} Point;

void print_point(const Point* p) {
    printf("x = %d, y = %d\n", p->x, p->y);
    p->x = -1;
}

int main() {
    Point p = { 0, };
    print_point(&p);

    return 0;
}

#endif
