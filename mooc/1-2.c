#include <stdio.h>

int main()
{
	printf("�������"); 
	int price=1;
	scanf("%d",&price);
	/* scanf����ò����û��з���scanf("%d\n",&price);������ʹ�����Կհ��ַ�����enter��tab�� */ 
	int change = 100-price;
	printf("Ӧ�һ�%dԪ",change);
	return 0;
}
