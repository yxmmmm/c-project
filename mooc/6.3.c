#include<stdio.h>
int main(){
    int i,he=1,he1;
    float sum=0,xiang=0;
    for(i=1;i<=10;i++){
        if(i==1){
        he1=he;
        he+=i;}
        else{
            he=he1+(he1=he);
        }
       xiang=(double)he/he1;
       sum+=xiang;
    }
    printf("sum=%.2f",sum);
    return 0;
}