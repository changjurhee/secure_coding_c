#if 0
// ������ �ڵ�
#include <stdio.h>

struct {
    int a : 8;
} bits = { 255 };

int main() {
    printf("bits.a = %d\n", bits.a);
    return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>

struct {
    unsigned int a : 8;
} bits = { 255 };

int main() {
    printf("bits.a = %d\n", bits.a);
    return 0;
}
#endif 
