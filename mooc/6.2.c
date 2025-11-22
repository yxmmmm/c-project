#include<stdio.h>
int main(){
    int i;
    long long j=1;
    double xiang=1,sum=1;
    for(i=1;xiang>1E-4;i++){
        j*=i;
        xiang=(double)1/j;
        if(i%2==0){
            sum+=xiang;
        }
        else
        sum-=xiang;
        }
        printf("%.3lf",sum);
        return 0;
}
