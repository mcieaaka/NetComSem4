#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX 20

int main()
{
    printf("Harshit Srivastava 19BCE0382\n");
    char ch[]="205.16.37.38/28";
    char ip[MAX];
    strcpy(ip,ch);
    char *toc = strtok(ch,"/");
    char *tocsub = strtok(NULL,"/");
    int mask = atoi(tocsub);
    int fr = 32-mask;
    char *toc2 = strtok(toc,".");
    toc2=strtok(NULL,".");
    toc2=strtok(NULL,".");
    toc2=strtok(NULL,".");

    int st= atoi(toc2);
    int ar[8]={0,0,0,0,0,0,0,0};
    int i=7;
    while(st!=0)
    {
        ar[i]=st%2;
        i--;
        st=st/2;
    }
    //For subnets:
    int sn=pow(2,fr);
    printf("\nNo. of Subnets= %d\n",sn);
    //For First Address:
    for(int j=7;j>7-fr;j--)
    {
        ar[j]=0;
    }
    printf("\nFIRST ADDRESS:\n");
    int sf=0;
    for(int i=7;i>=0;i--)
    {
        sf += ar[i]*pow(2,7-i);
    }
    printf("205.16.37.%d/28",sf);
    //For Last Address:
    for(int j=7;j>7-fr;j--)
    {
        ar[j]=1;
    }
    printf("\n\nLast ADDRESS:\n");
    int sl=0;
    for(int i=7;i>=0;i--)
    {
        sl += ar[i]*pow(2,7-i);
    }
    printf("205.16.37.%d/28",sl);
    //For No. of Addresses:
    int na = (sl-sf)+1;
    printf("\n\nNo. of Addresses = %d\n",na);
    return 0;
}
