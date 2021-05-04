#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

int main()
{
    char ip[MAX];
    char ip2[MAX];
    printf("Enter IP address in decimal dotted form\n");
    scanf("%s",&ip);
    strcpy(ip2,ip);
    int ctr = 0;
    char *toc = strtok(ip,".");
    while(toc!=NULL)
    {
        char n2=toc[0];
        int num = atoi(toc);
        if(num<=255 && num>=0 && n2!='0')
        {
            ctr++;
        }
        else
        {
            break;
        }
        toc = strtok(NULL,".");
    }
    if(ctr==4)
    {
        printf("\nIP: %s is VALID",ip2);
    }
    else
    {
        printf("\nIP: %s is INVALID",ip2);
    }
    return 0;
}
