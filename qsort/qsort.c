#include <stdio.h>
#include <stdlib.h>

int cmp_func(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

void print_array(int arr[], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() 
{
	int arr[] = {88, 56, 100, 2, 25};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print_array(arr, n);
	qsort(arr, n, sizeof(int), cmp_func);
	print_array(arr, n);

	return 0;
}

