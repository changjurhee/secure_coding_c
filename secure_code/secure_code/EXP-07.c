#if 0
// ������ �ڵ�
#include <stdio.h>

int main() {
    int num;

    printf("input number: ");
    scanf("%d", &num);
    printf("-> %d\n", num);

    return 0;
}
#endif


#if 0
// �ذ� ���
#include <stdio.h>

int main() {
    int num;

    printf("input number: ");
    int ret = scanf("%d", &num);
    if (ret == 0 || ret == EOF)
        printf("input error\n");
    else
        printf("-> %d\n", num);

    return 0;
}
#endif