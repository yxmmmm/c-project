#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
        if (a>c){
            if(a>d){
                printf("%d\n",a);
            }else{
                printf("%d\n",d);
            }
        }else{
            if(c>d){
                printf("%d\n",c);
            }else{
                printf("%d\n",d);
            }
        }    // 这个右括号闭合 if(a>c) 的else块
    }else{    // 这个else对应最外层的 if(a>b)
        if(b>c){
            if(b>d){
                printf("%d\n",b);
            }else{
                printf("%d\n",d);
            }
        }else{
            if(c>d){
                printf("%d\n",c);
            }else{
                printf("%d\n",d);
            }
        }
    }
    return 0;
}