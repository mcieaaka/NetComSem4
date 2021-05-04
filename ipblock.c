#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 20

void first(char[MAX],int a)
{

}
int main()
{
    char ch[]="205.16.37.38/28";
    char ip[MAX];
    strcpy(ip,ch);
    char *toc = strtok(ch,"/");
    char *tocsub = strtok(NULL,"/");
    int mask = atoi(tocsub);
    int fr = 32-mask;
    char toc2 = strtok(toc,".");
    char toc2 = strtok(NULL,".");
    char toc2 = strtok(NULL,".");
    char toc2 = strtok(NULL,".");


    return 0;
}
