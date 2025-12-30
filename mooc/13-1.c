#include<stdio.h>
struct student

{int num;

 int score;

}s[5];
int main(void)
{
    int i;
    for(i = 0; i < 5; i++)
    scanf("%d%d",&s[i].num, &s[i].score);

    int min = s[0].score;
    int temp;
    for(i = 0; i < 5; i++){
        if(min > s[i].score){
            min = s[i].score;
            temp = i;
        }
    }
    printf("%d-%d", s[temp].num, min);
    return 0;
}