void insert(char s1[], char s2[], int pos){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    //暂存s1后半部分
    char temp[1000] = {0};
    for (int i = pos; i < len1; i++){
        temp[i] = s1[i];
    } 

    //接入s2
    for(int i = 0; i < len2; i++){
        s1[pos+i] = s2[i];
    }

    //补全s1后半
    for(int i = pos+len2; i < len1+len2; i++){
        s1[i] = temp[i-len2];
    }
    s1[len1+len2] = '\0';
    return;
}