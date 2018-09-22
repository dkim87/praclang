
#include <stdio.h>

typedef struct _mystr
{
	int a;
	double s;
} mystr;

mystr arr[3];

void arrstruct(void)
{
	for (int i = 0; i <= 2; i++)
	{
		printf("%d번 구조체 배열의 a의 값은 %d, s의 값은 %g\n", i, arr[i].a, arr[i].s);
	}
}
void addptrstruct(void)
{
	arr[0].a = 0;
	arr[1].a = 1;
	mystr * ptr = arr;
	printf("arr의 주소(%d)를 가진 포인터를 증가했을때 %d가 되고 %d를 가르키게 된다\n", ptr, ptr++, *(int*)ptr);
}
int main()
{
	arrstruct();
	addptrstruct();
	
}
