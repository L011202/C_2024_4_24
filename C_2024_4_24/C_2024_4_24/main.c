#define _CRT_SECURE_NO_DEPRECATE    
/*	  判断一个年份是不是闰年	*/
/*	未使用函数版为代码示例一	*/
/*         liang                */
/*          16点42分            */
/*		判断思路:首先判断是否能不能被四整除，能整除的话		*/
/*  若不是100的倍数，判断能不能被400整除,若是可以被整除，那么便是闰年；反之则不是闰年  */






/*        代码示例一            */
/*        示例代码正确          */
/*        未使用函数版          */
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int op = 0;
//again:
//	printf("请输入你需要判断的年份:>");
//	scanf("%d", &i);
//	if (i % 4 == 0) {			//能被4整除
//		if (i % 100 != 0) {		//能被4整除，但是不是100的倍数,则是闰年
//			printf("%d年是闰年\n",i);
//			scanf("%d", &op);
//			}
//		else {					//能被四整除，但这个数是100的倍数
//			if (i % 400 == 0) {			//能被四整除，并且是400的倍数，则是闰年
//				printf("%d年是闰年\n", i);
//				scanf("%d", &op);
//			}
//			else {						//能被4整除，但不是400的倍数不是闰年
//				printf("%d年不是闰年\n", i);
//				printf("输入1进行再次判断!\n");
//				scanf("%d", &op);
//			}
//		}
//	}
//	if (op == 1) {
//		goto again;
//	}
//	return 0;
//}



/*        代码示例二             */
/*                               */
/*         使用函数版            */

#include <stdio.h>
void Year_Dis(int x) {
	printf("请输入你需要判断的年份:>");
//	scanf("%d", &i);
	if (x % 4 == 0) {			//能被4整除
		if (x % 100 != 0) {		//能被4整除，但是不是100的倍数
			printf("%d年是闰年\n", x);
			//scanf("%d", &op);
		}
		else {
			if (x % 400 == 0) {
				printf("%d年是闰年\n", x);
				//scanf("%d", &op);
			}
			else {
				printf("%d年不是闰年\n", x);
				//printf("输入1进行再次判断!\n");
				//scanf("%d", &op);
			}
		}
	}
}
int main() 
{
	int year = 0;
	int i = 1;
	printf("请输入你要判断的年份:>");
	while (i) {
		scanf("%d", &year);
		Year_Dis(year);
		printf("输入1继续进行判断:>");
		scanf("%d", &i);
	}
	return 0;
}