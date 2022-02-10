#if 0
// ������ �ڵ� 1.
#include <stdio.h>

#define DBL(x)  (x) + (x)

int main() {
    int result = DBL(2) * DBL(2);  // (2)+(2)*(2)+(2)
    printf("result = %d\n", result);

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>

#define DBL(x)  ((x) + (x))

int main() {
    int result = DBL(2) * DBL(2);
    printf("result = %d\n", result);

    return 0;
}

#endif


#if 0
// ������ �ڵ� 2.
#include <stdio.h>

#define INFO    -1
#define WARN    -2
#define ERR     -3

void log_print(int level, const char* msg) {
    if (level INFO)
        printf("   [INFO] %s\n", msg);
    else if (level == WARN)
        printf("[WARNING] %s\n", msg);
    else if (level == ERR)
        printf("  [ERROR] %s\n", msg);
}

int main() {
    log_print(ERR, "out of service");
    return 0;
}

#endif

#if 0
// �ذ� ���
#include <stdio.h>

#define INFO    (-1)
#define WARN    (-2)
#define ERR     (-3)

void log_print(int level, const char* msg) {
    if (level INFO)
        printf("   [INFO] %s\n", msg);
    else if (level == WARN)
        printf("[WARNING] %s\n", msg);
    else if (level == ERR)
        printf("  [ERROR] %s\n", msg);
}

int main() {
    log_print(ERR, "out of service");
    return 0;
}

#endif