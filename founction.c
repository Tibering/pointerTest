#include<stdio.h>

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
	return;
}
