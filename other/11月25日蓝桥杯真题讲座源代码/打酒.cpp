#include <stdio.h>
int num=0;//全局变量，用来统计符合条件的次数 
int order[16];//0表示遇花、1表示遇店 。order[0]元素不用 
int n=0; 
void f(int hua,int dian,int jiu)
{
	if(hua==0&&dian==0&&jiu==1)//只要遇9次花(hua==0)、5次店(dian==0)、酒剩1斗(jiu==1),满足条件，num+1 
	{
		num++;
		for(int i=1;i<16;i++)
			printf("%d",order[i]);
		printf("\n");
		return;		
	}
	if(hua>0&&jiu>0)//如果遇花次数大于0，说明还可以至少遇花一次，同时酒-1 
	{
		n++;
		f(hua-1,dian,jiu-1);	
		n--;	
	}	
	if(dian>0)//如果遇店次数大于0，说明还可以至少遇店一次，同时酒*2 
	{
		n++;
		order[n]=1;
		f(hua,dian-1,jiu*2);
		order[n]=0;	
		n--;	
	}	
}
main()
{
	order[15]=0;
	f(9,5,2);//因为最后一次遇到的是花，所以之前应该遇到9次花、5次 店，剩酒1斗 
	printf("共%d种可能得组合",num);
}


