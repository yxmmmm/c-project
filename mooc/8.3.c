#include<stdio.h>
#include<string.h>
#define N 100
int main(){
    char str[N+1];
    fgets(str,N+1,stdin);
    int a=0,e=0,i=0,o=0,u=0;
    int length = strlen(str);
    for(int j=0;j<length;j++){
        char ch = str[j];
        strlwr(str);
        switch(ch){
            case 'a': a+=1;break;
            case 'e': e+=1;break;
            case 'i': i+=1;break;
            case 'o': o+=1;break;
            case 'u': u+=1;break;
        }
    }
    printf("a~%d\n",a);
    printf("e~%d\n",e);
    printf("i~%d\n",i);
    printf("o~%d\n",o);
    printf("u~%d\n",u);
    return 0;
    

}
