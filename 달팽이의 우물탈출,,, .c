#include<stdio.h>

int main()
{
	//달팽이는 10칸 우물에 있고 낮에는 3칸 밤에는 2칸을 이동한다.
	//달팽이가 탈출하려면 몇일째 일까?
	//8일 
	
	int w=0; //우물= scanf
	int sd=0; //달팽이 낮=3
	int sn=0; //달팽이 밤=2
	int day=0; //몇일 
	int s=0; //달팽이 
	
	
	printf("낮에 올라가는 높이를 입력하세요");
	scanf("%d",&sd);
	printf("밤에 내려가는 높이를 입력하세요");
	scanf("%d",&sn);
	printf("우물의 높이를 입력하세요");
	scanf("%d",&w);
	 
	 
	while (1)
	{
		s=s+sd;
		if (s>=w)
		{	day=day+1;
			printf("달팽이는 %d일 째 탈출했습니다",day); 
			break; 
		}
			
		s=s-sn;
		day=day+1;
	}
 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;	
}
