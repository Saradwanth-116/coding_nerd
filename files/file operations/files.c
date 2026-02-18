#include<stdio.h>
#include<string.h>
int main(){
    FILE *one;
    FILE *two;
    FILE *merge;
    char helper;
    char details[100];
    one=fopen("one.txt","r");
    two=fopen("two.txt","r");
    merge=fopen("final.txt","w");
    merge=fopen("final.txt","a");
    while ((helper=fgetc(one))!=EOF)
    {
        fputc(helper,merge);
    }
    fprintf(merge,"%s"," ");
    
    while ((helper=fgetc(two))!=EOF)
    {
        fputc(helper,merge);
    }
    fclose(one);
    fclose(two);
    fclose(merge);
    
    return 0;
}