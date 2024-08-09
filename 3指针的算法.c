#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////指针+-整数
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = NULL;
//	for (p = &arr[0]; p < arr[5];)
//	{
//		*p++ = 0;//因为是后置++，所以先*p=0才p++
//	}
//	return 0;
//}


////指针-指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//得9
//	//得到的是指针和指针之间元素的个数
//	//只适用于指向同一块空间的指针
//	char ch[10] = { 0 };
//	printf("%d\n", &arr[0] - &ch[1]);//这种是不可取的
//	return 0;
//}

////应用
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	char ch[] = "asdsaf";
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}


//指针的关系运算
//int main()
//{
//	int arr[5] = { 0 };
//	int* p;
//	for (p = &arr[5]; p > &arr[0];)
//	{
//		*--p = 0;//前置--，先--p才*p=0
//	}
//	return 0;
//}

//简化写法
int main()
{
	int arr[5] = { 0 };
	int* p;
	for (p = &arr[5 - 1]; p >= &arr[0]; p--)
	{
		*p = 0;
	}
	return 0;
}
//这个写法在大部分编译器是可行的，但是不建议这样写，因为标准规定不保证他可行
//标准规定：允许 指向元素的指针 跟 指向这个数组的最后一个元素后面的内存位置的指针 对比
//		   不允许 指向元素的指针 跟 指向数组第一个元素前面的内存位置的指针对比