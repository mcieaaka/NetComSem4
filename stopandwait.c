#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,a,b,c,t,s[10],r[10],ch;
    printf("Enter the no. of frames sent:");
    scanf("%d",&n);
    a=1;
    b=1;
    printf("Enter the time limit:");
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        s[i]=i;
        r[i]=i;
    }
    i=0;
    printf("\n");
    while(n>0)
    {
        printf("1.Normal transmission\n2.Frame lost\n3.Acknowledgement lost\nEnter your choice:");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:printf("Sending frame %d\n",s[i]);
                printf("Received frame %d\n",s[i]);
                printf("Acknowledgement received for frame %d\n",s[i]);
                i=i+a;
                break;
            case 2:printf("Sending frame %d\n",s[i]);
                printf("Resending frame %d\n",s[i]);
                printf("Received frame %d\n",s[i]);
                printf("Acknowledgement received for frame %d\n",s[i]);
                i=i+a;
                break;
            case 3:printf("Sending frame %d\n",s[i]);
                printf("Received frame %d\n",s[i]);
                printf("Resending frame %d\n",s[i]);
                printf("Received frame %d\n",s[i]);
                printf("Acknowledgement received for frame %d\n",s[i]);
                i=i+a;
                break;
        }
         n--;
         printf("\n");
    }
}
