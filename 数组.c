#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//		for(i = 0; i < sz - 1; i++)
//		{
//			//ÿһ��ð������
//			int flag = 1;//������һ��Ҫ����������Ѿ�����
//			int j = 0;
//			for (j = 0; j <sz-1-i ; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j+1];
//					arr[j + 1] = tmp;
//					flag = 0;//���������������ʵ����ȫ����
//				}
//			}
//			if (flag == 1)
//			{
//				break;//break���ֻ������for��switch����if����в���ʹ�ã���Ϊif����ѭ�����
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
//	//��arr���������ĳ�����
//	//arr�����飬��arr����ʵ������������Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������
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
//	printf("%p\n", &arr);//������Ԫ�ص�ַ���������岻һ��������Ǵ���Ԫ�ؿ�ʼ
//	printf("%p\n", &arr+1);
//	// 2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(������)-��������ʾ�������飬sizeof(�������������������������Ĵ�С����λ���ֽ�
//	// 2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//	// ���������������ȡ��Ԫ�ص�ַ
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//arr������Ԫ�ص�ַ
//
//	return 0;
//}