#include <stdio.h>

int main ()
{
    const int PASS=60;
	int score=0;
	printf("请输入所等分数:");
	scanf("%d",&score);
	
	printf("你所输入的成绩是:%d\n",score); 
	if (score>PASS) {
		printf("恭喜你通过了测试，祝你有一个愉快的假期\n"); 
	} else {
		printf("很遗憾您未经过测试,再接再厉\n");
	}
	  printf("再见");
  
    return 0;
}
