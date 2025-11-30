#include <stdio.h>
int arry[9][9];  //定义一个9行9列数组，其中第0行和第0列不用，从1开始计数，实际行是1-8行、实际列是1-8列 
int num=0;//计数，碰到一种排列 +1 

int check(int row,int col) //check函数，检查当前位置（row行、col列）和其它位置有没有冲突(同行、同列、两条对角线可能冲突），没有冲突返回1、有冲突返回0 
{
	for(int i=1;i<9;i++)  //该循环判断是否有同列冲突 
	{
		if(arry[i][col]==1)
			return 0;
	}
	for(int i=1;i<9;i++)  //该循环判断是否有同行冲突 
	{
		if(arry[row][i]==1)
			return 0;
	}
	for(int i=row-1,j=col-1;i>0 && j>0;i--,j--) //该循环判断是否有左对角线（左上角到右下角的对角线冲突 ）， 
	{
		if(arry[i][j]==1)
			return 0;
	}
	for(int i=row-1,j=col+1;i>0 && j<=8;i--,j++)//该循环判断是否有右对角线（左下角到右上角的对角线冲突 ） 
	{
		if(arry[i][j]==1)
			return 0;
	}
	return 1;
}

void print()//print函数输出所有的可能，每行只有一个元素为1，所以只要输出列号即可 
{
	printf("方案%d:\n",num);
	for(int row=1;row<9;row++)
	{
		for(int col=1;col<9;col++)
		{
			if(arry[row][col]==1)
				printf("%d",col); //输出列号 
		}
	} 
	printf("\n");
}

void f(int row)//fincqueen函数，查找符合要求的组合,所谓符合要求，就是每行都找到了一个没有冲突的位置，共8个 
{
	if(row>8)//如没有冲突的row值超过8，说明找到了一种组合，组合计数器num++,输出这种组合 
	{
		num++;
		print();//输出组合	
		return;	
	}
	for(int col=1;col<9;col++)//如row值还没超过8，执行该循环继续判断 
	{
		if(check(row,col)) //检查第row行、第col列是否和其它位置存在冲突（调用check函数） 
		{
			arry[row][col]=1;//如没有冲突，则将第row行第col列设为1，表示可以放一个皇后 
			f(row+1);//继续到第row+1行找不冲突的位置（这里是递归调用) 
			arry[row][col]=0;/*这条语句非常关键，它的意思是：对第row行、col列判断过且该位置存在冲突，要将其清零，否则会影响下一次判断 。 
							   当findqueen有8次找到不冲突位置时（row+1>8)，必定通过return语句返回了，否则不会执行return语句，那么就会执行这条清零语句*/
		}
	}
}

main()
{
	printf("八皇后问题\n");
	f(1);
	printf("八皇后问题共有:%d种可能",num); 
}
