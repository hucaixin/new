#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��n�Ľ׳��õݹ����ͨ�ⷨ

int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d ", factorial(n));
	return 0;
}



//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d ", factorial(a));
//	return 0;
//}


//int main()
//{
//	int i, n;
//	double sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		sum = sum*i;
//	printf("%d!=%lf", n, sum);
//	printf("\n");
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdlib.h>
//#include<assert.h>
//
//int my_strlen(const char *str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return my_strlen(++str) + 1;
//	}
//}
//
//int main()
//{
//	int ret = 0;
//	char arr[10] = "abcdef";
//	ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//�������ַ����е��ַ��������У����������ӡ

//#include<assert.h>
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//	

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�

//int DigitSum(size_t n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	size_t num = 0;
//	scanf("%u", &num);
//	size_t ret = DigitSum(num);
//	printf("%u\n", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�

//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n*Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}


//����쳲�������


//int fib(int n)
//{
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//	while (n > 2)
//	{
//		n -= 1;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	fib(a);
//	return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ

//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//ʹ��ָ���ӡ��������

//void print(int* arr,int n)
//{
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//��Ŀ���ݣ�
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//
//	while (empty>=2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}



//int Digit(int num)
//{
//	//digit�Ǽ���ĸ�����λ��
//	int n = 1;
//	while (num > 9)
//	{
//		num = num / 10;
//		n++;
//	}
//	return n;
//}
////��n��k�η�
//int Power(int n, int k)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	int product = 1;
//	for (int i = 0; i < k; i++)
//	{
//		product *= n;
//	}
//
//	return  product;
//}
////������Ƿ�Ϊˮ�ɻ���
//int Narcissus(int num)
//{
//	int n = Digit(num);
//	int sum = 0;
//	int number = num;
//	for (int i = 0; i < n; i++)
//	{
//		sum += Power(number % 10, n);
//		number = number / 10;
//	}
//	if (sum == num)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//	//����ֵ˵����Ϊ1����ˮ�ɻ�����Ϊ0����ˮ�ɻ���
//}
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		if (Narcissus(i) == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//



//void PrintLine(int blank_count, int start_count)
//{
//	int i = 0;
//	for (; i < blank_count; i++)
//	{
//		printf(" ");  //��ӡ�ո�
//	}
//	for (i = 0; i < start_count; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//void  PrintLingxing(int n)
//   {
//	//��ӡ�ϰ벿��
//	int i = 1;
//	for (i = 1; i < n; i++){
//		PrintLine(n - i, 2 * i - 1);  // ��ӡÿһ�еĿո��ÿһ�е��Ǻ�
//	}
//	//��ӡ�м䲿��
//	PrintLine(0, 2 * n - 1);
//	//��ӡ�°벿��
//	for (i = n - 1; i>0; i--)
//	{
//		PrintLine(n - i, 2 * i - 1);
//	}
//}
//int main()
//{
//	PrintLingxing(7);    //�԰������
//	return 0;
//}
//


//����쳲�������

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("������һ����n��������n�����ķƲ�������Ϊ��\n");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}

//int fib(int n)
//{
//	int a1 = 1;
//	int a2 = 1;
//	int a3 = 0;
//	if (n <= 2)
//		return 1;
//	else
//	{
//		while (n > 2)
//		{
//			a3 = a1 + a2;
//			a1 = a2;
//			a2 = a3;
//			n--;
//		}
//	}
//	return a3;
//}
//
//int main()
//{
//	int n = 0;
//	printf("������һ����n��������n�����ķƲ�������Ϊ��\n");
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//
//
