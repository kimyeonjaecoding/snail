#include<stdio.h>

int main()
{
	//�����̴� 10ĭ �칰�� �ְ� ������ 3ĭ �㿡�� 2ĭ�� �̵��Ѵ�.
	//�����̰� Ż���Ϸ��� ����° �ϱ�?
	//8�� 
	
	int w=0; //�칰= scanf
	int sd=0; //������ ��=3
	int sn=0; //������ ��=2
	int day=0; //���� 
	int s=0; //������ 
	
	
	printf("���� �ö󰡴� ���̸� �Է��ϼ���");
	scanf("%d",&sd);
	printf("�㿡 �������� ���̸� �Է��ϼ���");
	scanf("%d",&sn);
	printf("�칰�� ���̸� �Է��ϼ���");
	scanf("%d",&w);
	 
	 
	while (1)
	{
		s=s+sd;
		if (s>=w)
		{	day=day+1;
			printf("�����̴� %d�� ° Ż���߽��ϴ�",day); 
			break; 
		}
			
		s=s-sn;
		day=day+1;
	}
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
