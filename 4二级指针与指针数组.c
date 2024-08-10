#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


////二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	*pa = 10;//这种直接指向变量，一次解引用就能修改变量的指针叫做一级指针
//
//	//二级指针变量
//	//存放一级指针变量的地址
//	int** ppa = &pa;
//	//int*声明ppa指向的对象的是int*类型
//	//*ppa说明ppa是个指针
//	**ppa = 20;
//	return 0;
//}


////指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b; 
//	int* pc = &c;
//	//如果数据很多的话这样一个个存效率太低
//
//	int* parr[10] = { &a, &b, &c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *parr[i]);
//
//	}
//	return 0;
//}


//指针数组模拟二维数组
int main()
{
	////普通的二维数组
	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//指针数组
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };//将每一个一维数组的首元素地址存起来
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);//i找parr里的元素下标（即一维数组的下标），j找一维数组里的下标
		}
		printf("\n");
	}

	return 0;
}
