#if 0
// ������ �ڵ�
#include <stdio.h>

int main() {
    int cnt = 0;
    for (float i = 0.1f; i <= 1.0f; i += 0.1f)
        ++cnt;

    printf("cnt = %d\n", cnt);
    return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>

int main() {
    int cnt = 0;
    for (size_t i = 0; i < 10; i++)
        ++cnt;

    printf("cnt = %d\n", cnt);
    return 0;
}
#endif 
