#include <stdio.h>
#include <stdlib.h>

// void *memmove(void *dest, const void *src, size_t n);

void *my_memmove(void *dest, const void *src, size_t n) {
	if (dest == NULL || src == NULL) {
		return NULL;
	}

	char *pdest = (char*)dest;
	const char *psrc  = (const char*)src;

	if (pdest <= psrc || pdest >= psrc+n) {
		while(n-- > 0) {
			*pdest++ = *psrc++;
		}
	} else {
		psrc  = psrc + n - 1;
		pdest = pdest + n - 1;
		while(n-- > 0) {
			*pdest-- = *psrc--;
		}
	}
}

int main() 
{
	char src[10] = "abcdef"; 
	printf("%s\n", src);
	my_memmove(src+3, src, 6);
	printf("%s\n", src);
}
