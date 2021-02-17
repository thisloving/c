#include <stdio.h>
#include <string.h>

char *my_strcat(char* dst, const char* src) {
	if (src == NULL) {
		return NULL;
	}

	size_t dst_len = strlen(dst);
	size_t i;
	for (i = 0; src[i] != '\0'; i++) {
		dst[dst_len+i] = src[i];
	}

	dst[dst_len+i] = '\0';
	return dst;
}

int main(int argc, char* argv[])
{
	char* src = "world!";
	char  dst[14] = "hello, ";
	
	char* ret = my_strcat(dst, src);
	printf("%s\n", ret);

	return 0;
}
