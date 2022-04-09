#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//		for(i = 0; i < sz - 1; i++)
//		{
//			//每一趟冒泡排序
//			int flag = 1;//假设这一趟要排序的数据已经有序
//			int j = 0;
//			for (j = 0; j <sz-1-i ; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j+1];
//					arr[j + 1] = tmp;
//					flag = 0;//本趟排序的数据其实不完全有序
//				}
//			}
//			if (flag == 1)
//			{
//				break;//break语句只能用于for和switch，在if语句中不能使用，因为if不是循环语句
//			}
//		}
//
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，拍成升序
//	//arr是数组，对arr传参实际上是数组首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0; 
//}


//int main()
//{
//	if (1)
//		break;//err
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//都是首元素地址，但是意义不一样，这个是从首元素开始
//	printf("%p\n", &arr+1);
//	// 2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)-数组名表示整个数组，sizeof(数组名）计算的是整个数字组的大小，单位是字节
//	// 2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//	// 其他所有情况都是取首元素地址
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//arr就是首元素地址
//
//	return 0;
//}