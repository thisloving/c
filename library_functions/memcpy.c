#include <stdio.h>
#include <stdlib.h>

// void *memcpy(void *dest, const void *src, size_t n);
void *my_memcpy(void *dest, const void *src, size_t n) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}

	char *pdest = (char*)dest;
	const char *psrc  = (const char*)src;

	while (n-- > 0) {
		*pdest++ = *psrc++;
	}

	return dest;
}

int main() 
{
	char src[]  = "abcdef";
	char dest[6+1];
	my_memcpy(dest, src, 6);
	printf("%s\n", dest);
}
