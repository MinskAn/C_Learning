#include <stdio.h>

int main()
{
	printf("请输入金额："); 
	int price=1;
	scanf("%d",&price);
	/* scanf中最好不适用换行符，scanf("%d\n",&price);这样会使他忽略空白字符，如enter，tab等 */ 
	int change = 100-price;
	printf("应找回%d元",change);
	return 0;
}
