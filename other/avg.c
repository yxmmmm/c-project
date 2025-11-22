#include<stdio.h>
#define n 30
#define m 5
int main(){
    int p,q;
	scanf("%d %d",&p,&q);
    int s[n][m];
    int i,j;
    for(i=0;i<p;i++){
    	for(j=0;j<q;j++){
    		scanf("%d",&s[i][j]);
		}
	}
	int savg,ssum,gavg,gsum;
	for(i=0;i<p;i++){
        ssum=0;
		for(j=0;j<q;j++){
			ssum+=s[i][j];
		}
		savg=ssum/p;
		printf("第%d个同学的平均成绩为%d\n",i+1,savg);
	}
	for(j=0;j<q;j++){
        gsum=0;
		for(i=0;i<p;i++){
			gsum+=s[i][j];
		}
		gavg=gsum/q;
		printf("第%d个学科的平均成绩为%d\n",j+1,gavg);
	}
    return 0;
}


