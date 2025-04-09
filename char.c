#include <stdio.h>
int main() {
    FILE *fp;
    int wordcount=0;
    fp=fopen("input.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)==1){
        if(ch == ' ' || ch == '.'){
            wordcount++; 
        }
    }
    printf("word count=%d",wordcount);
    fclose(fp);
    return 0;
}
