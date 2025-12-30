#include<stdio.h>
#include<string.h>

float max(float s[], int len) {
    float max_val = s[0];
    for (int i = 1; i < len; i++) {
        if (s[i] > max_val) max_val = s[i];
    }
    return max_val;
}

int main(void){
	int n, m;
    scanf("%d %d", &n, &m);
    int i, j;
    int scr[n][m];
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &scr[i][j]);
        }
    }

    int sum;
    float avg[n];
    int mx, mn;
    for(i = 0; i < n; i++){
        mn = scr[i][0];
        mx = scr[i][0];
        sum = 0;
        for(j = 0; j < m; j++){
            if(mx < scr[i][j])
            mx = scr[i][j];
            if(mn > scr[i][j])
            mn = scr[i][j];
            sum += scr[i][j];
        }
        avg[i] = (float)(sum-mn-mx)/(m-2);
    }
    float t = max(avg, n);
    printf("%.2f", t);
}