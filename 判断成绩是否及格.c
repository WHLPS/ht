#include <stdio.h>

int main ()
{
    const int PASS=60;
	int score=0;
	printf("���������ȷ���:");
	scanf("%d",&score);
	
	printf("��������ĳɼ���:%d\n",score); 
	if (score>PASS) {
		printf("��ϲ��ͨ���˲��ԣ�ף����һ�����ļ���\n"); 
	} else {
		printf("���ź���δ��������,�ٽ�����\n");
	}
	  printf("�ټ�");
  
    return 0;
}
