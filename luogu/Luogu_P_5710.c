#include<stdio.h>
#include<string.h>

int ou(int a){
    if(a%2 == 0){
        return 1;
    }
    else
    return 0;
}

int fan(int a){
    if(a > 4 && a <= 12)
    return 1;
    else
    return 0;
}
int main(void){
	int a;
    int num[4] = {0};
    scanf("%d", &a);
    if(fan(a) && ou(a)){
        num[0] = 1;
    }

    if((fan(a)==1&&ou(a)==0)||(fan(a)==0&&ou(a)==1)||(fan(a)==1&&ou(a)==1)){
        num[1] = 1;
    }

    if((fan(a)==1&&ou(a)==0)||(fan(a)==0&&ou(a)==1)){
        num[2] = 1;
    }

    if(fan(a)==0 && ou(a)==0){
        num[3] = 1;
    }

    for(int i = 0; i < 4; i++){
        printf("%d ", num[i]);
    }
}