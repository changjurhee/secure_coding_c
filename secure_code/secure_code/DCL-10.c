#if 1
// ������ �ڵ�
#include <stdio.h>
#include <windows.h>
#include <signal.h>

int flag;

void handler(int signum) {
    printf("\thandler\n");
    flag = 0;
}

int main() {
    flag = 1;
    signal(SIGINT, handler);

    while (flag) {
        printf("do something\n");
        Sleep(1000);
    }

    return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
#include <windows.h>
#include <signal.h>

volatile int flag;

void handler(int signum) {
    printf("\thandler\n");
    flag = 0;
}

int main() {
    flag = 1;
    signal(SIGINT, handler);

    while (flag) {
        printf("do something\n");
        Sleep(1000);
    }

    return 0;
}
#endif

