#include<stdio.h>
int main(){
	char str[100];
    fgets(str,sizeof(str),stdin);
    int i;
    for(i=0;str[i]!='\0';i++){
        if(i==0){
            if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;}
        else if(str[i]==' '&&str[i+1]!='\0'){
            if(str[i+1]>='a'&&str[i+1]<='z')
    	    str[i+1]-=32;
        }
	}
	puts(str);
    return 0;
}
