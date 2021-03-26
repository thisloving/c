#include <stdio.h>
#include <string.h>

char* my_strcpy(char* dst, const char* src) {
	if (src == NULL) {
		return NULL;
	}

	size_t i;
	for (i = 0; *src != 0; i++) {
		dst[i] = src[i];
	}

	for (; i < strlen(dst); i++)
	{
		dst = '\0';
	}
	return dst;
}

int main(int argc, char* argv[]) 
{
	char src[] = "hello!";
	char dst[] = "world!xxxx";
	char* ret = my_strcpy(dst, src);

	printf("%s\n", ret);

	return 0;
}
