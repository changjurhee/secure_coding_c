#if 0
// ������ �ڵ�
#include <stdio.h>
#include <stdlib.h>
enum { ARR_SIZE = 10 };
int main()
{
	int* pArr = malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	free(pArr);
	// ...
	free(pArr);
	return 0;
}
#endif 

#if 0
// �ذ� ���
#include <stdio.h>
#include <stdlib.h>
enum { ARR_SIZE = 10 };
int main()
{
	int* pArr = malloc(sizeof(int) * ARR_SIZE);
	if (pArr == NULL) {
		perror("malloc");
		return -1;
	}
	free(pArr);
	pArr = NULL;
	// ...
	free(pArr);
	return 0;
}

#endif 
