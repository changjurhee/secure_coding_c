#if 0
// ������ �ڵ�
#include <stdio.h>
#include <string.h>
enum { BUF_SIZE = 64 };
int main()
{
	const char* msg = "hello, world";
	FILE* fp = fopen("log.txt", "w+");
	if (fp == NULL) {
		perror("fopen");
		goto except;
	}
	char buf[BUF_SIZE];
	if (fwrite(msg, BUF_SIZE, 1, fp) < 0) {
		perror("frwite");
		goto except;
	}
	memset(buf, '\0', sizeof(buf));
	if (fread(buf, BUF_SIZE, 1, fp) < 0) {
		perror("fread");
		goto except;
	}
	printf("-> %s\n", buf);
except:
	fclose(fp);
	return 0;
}
#endif 

#if 0
// �ذ� ���

#include <stdio.h>
#include <string.h>
enum { BUF_SIZE = 64 };
int main()
{
	const char* msg = "hello, world";
	FILE* fp = fopen("log.txt", "w+");
	if (fp == NULL) {
		perror("fopen");
		goto except;
	}
	char buf[BUF_SIZE];
	if (fwrite(msg, BUF_SIZE, 1, fp) < 0) {
		perror("frwite");
		goto except;
	}
	fseek(fp, 0L, SEEK_SET);
	memset(buf, '\0', sizeof(buf));
	if (fread(buf, BUF_SIZE, 1, fp) < 0) {
		perror("fread");
		goto except;
	}
	printf("-> %s\n", buf);
except:
	fclose(fp);
	return 0;
}
#endif 


