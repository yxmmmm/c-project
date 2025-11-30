#include <stdio.h>
int i=1; 
void h(int num,char sou,char tar,char aux){
	
	if(num==1)
	{
		printf("第%d次:从%c移动至%c\n",i,sou,tar);
		i++; 
	}
	if(num>1)
	{
		h(num-1,sou,aux,tar);
		printf("第%d次:从%c移动至%c\n",i,sou,tar);
		i++;
		h(num-1,aux,tar,sou);
	}
}

main()
{
	h(3,'A','B','C');
}
