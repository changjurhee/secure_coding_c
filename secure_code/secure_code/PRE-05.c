#if 0
// ������ �ڵ�
#include <stdio.h>
#define TOSTR(x)    #x
#define LOG(msg)    printf("["__FILE__"("TOSTR(__LINE__)")] "msg)

int main() {
	LOG("hello, world");
	return 0;
}
#endif

#if 1
// �ذ� ���
#include <stdio.h>
#define _TOSTR(x)  #x
#define TOSTR(x)    _TOSTR(x)
#define LOG(msg)    printf("["__FILE__"("TOSTR(__LINE__)")] "msg)

int main() {
	LOG("hello, world");
	return 0;
}

#endif