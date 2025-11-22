#include<stdio.h>
int main(){
    int z,q,c;
    for(z=1;z<=16;z++){
        for(q=1;q<=17-z;q++){
                c=18-q-z;
                if (8*z + 6*(q + c) == 118 && 2*q + c == 20) {
                printf("z = %d, q = %d, c = %d\n", z, q, c);}
        }
    }
    return 0;
}
