#include<stdio.h>
#include<stdlib.h>
/// <summary>
///	指针交换两个数的 
/// </summary>
/// <param name="pnum1"></param>
/// <param name="pnum2"></param>
void swapWithPointer(int* pnum1, int* pnum2) {
	int tmp;
	tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

/// <summary>
/// input pointrer(address) change the result of the const number by founction.
/// </summary>
/// <param name="num1"></param>
/// <param name="num2"></param>
void passingAddressOfConstants(const int* num1, int* num2) {
	*num2 = *num1;
}
int passingMain(void) {
	const int limit = 100;
	int result = 5;
	passingAddressOfConstants(&limit, &result);
	return 0;
}

/// <summary>
/// return pointer by founction.
/// </summary>
/// <param name="size"></param>
/// <param name="value"></param>
/// <returns></returns>

int* allocateAray(int* arr, int size, int value) {
	if (arr != NULL) {
		for (size_t i = 0; i < size; i++) {
			arr[i] = value;
		}
	}
	return arr;
}

void allocateArray1(int** arr, int size, int value) {
	*arr = (int*)malloc(size * sizeof(int));
	if (*arr != NULL) {
		for (size_t i = 0; i < size; i++) {
			*(*arr + i) = value;
		}
	}
}
// int *vector = NULL;	allocateArray(&vector, 5, 4);

// 自己实现free函数.
void saferFree(void** pp) {
	if (pp != NULL && *pp != NULL) {
		free(*pp);
		*pp = NULL;
	}
}
void arr1(int**, int, int);
int main12(void)
{
	int* p;
	arr1(&p, 5, 4);
	for (int i = 0; i < 5; i++) {
		printf("%d", p[i]);
	}
	return;
}
// **arr->*p; *arr == p
void arr1(int** arr, int size, int val) {
	*arr = (int*)malloc(size * sizeof(int));
	if (*arr != NULL) {
		for (int i = 0; i < size; i++){
			*(*arr + i) = val;
		}
	}
	printf("%p\t%p\t%p\n",arr, &(*arr), &(**arr));
	printf("%d\t%d\t",*arr,**arr);
}

//函数指针
int* f4();
int (*f5)();
int* (*f6)();

int (*fptr1)(int);
int square(int num) {
	return num * num;
}
int main(void)
{
	int n = 5;
	fptr1 = square;
	printf("%d quared is %d\n", n, fptr1(n));
	return;
}
