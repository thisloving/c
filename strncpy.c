#include <stdio.h>

char* my_strncpy(char* dst, const char* src, size_t n) {
	size_t i = 0;
	for (i = 0; i < n && src[i] != '\0'; i++) {
		dst[i] = src[i];
	}

	for (; i < n; i++) {
		dst[i] = '\0';
	}

	return dst;
}

int main(int argc, char* argv[]) 
{
	char src[] = "hello!";
	char dst[] = "world!xxxx";
	char* ret = my_strncpy(dst, src, sizeof(src));

	printf("%s\n", ret);

	return 0;
}
