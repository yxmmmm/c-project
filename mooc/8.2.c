#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    double avg;
    for(j=0;j<m;j++){
        int sum=0;
        for(i=0;i<n;i++){
            sum+=a[i][j];
        }
        avg=(double)sum/3;
        printf("%.1lf\n",avg);
    }
    return 0;
}
