#include<stdio.h>
#include<math.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if(num<2){
      printf("No");
      return 0;
    }else if(num==2){
        printf("Yes");
        return 0;
    }
    else {
        for(i=2;i<=sqrt(num);i++){
            if(num%i==0){
                printf("No"); 
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}