#include<stdio.h>
#include<stdlib.h>
#define max 100
int xor(int a,int b){
    if(a==b){
        return 0;
    }else{
        return 1;
    }
}
int main()
{
    printf("Harshit Srivastava 19BCE0382");
    int a1[max],a2[max],a3[max],n,temp[max],r1[max],r2[max],r3[max];
    printf("Sender Side\n");
    printf("Enter Message Size\n");
    scanf("%d",&n);
    printf("Enter Component 1\n");
    for(int i=0;i<n/2;i++)
        scanf("%d",&a1[i]);
    printf("Enter Component 2\n");
    for(int i=0;i<n/2;i++)
        scanf("%d",&a2[i]);
    for(int i=0;i<n/2;i++)
    {
        a3[i]=xor(a1[i],a2[i]);
    }
    printf("Sender message: ");
    for(int i=0;i<n/2;i++)
        printf("%d ",a1[i]);
    printf("|");
    for(int i=0;i<n/2;i++)
        printf("%d ",a2[i]);
    printf("|");
    for(int i=0;i<n/2;i++)
        printf("%d ",a3[i]);

    printf("\nReceiver Side\n");
    printf("enter the code received\n");
    for(int i=0;i<n+n/2;i++)
    {
        scanf("%d",&temp[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        r1[i]=temp[i];
        r2[i]=temp[i+n/2];
        r3[i]=temp[i+n];
    }
    int t[max];
    for(int k=0;k<n/2;k++)
        t[k]=xor(r1[k],r2[k]);
    for(int k=0;k<n/2;k++)
        t[k]=xor(t[k],r3[k]);
    int ctr=0;
    printf("Checksum= ");
    for(int k=0;k<n/2;k++)
    {
        printf("%d",t[k]);
        if(t[k]==0)
            ctr++;
    }
    if(ctr==n/2)
        printf("\nNo error");
    else
        printf("\nError is present");
}
