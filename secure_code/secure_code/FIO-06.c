#if 0
// ������ �ڵ�
#include <stdio.h>
int main()
{
	FILE out = *stdout;
	fputs("hello, world\n", &out);
	return 0;
}
#endif

#if 0
// �ذ� ���
#include <stdio.h>
int main()
{
	FILE* out = stdout;
	fputs("hello, world\n", out);
	return 0;
}
#endif