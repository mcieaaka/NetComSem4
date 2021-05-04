#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("Harshit Srivastava 19BCE0382");
    int n;
    int ch;
    printf("\nenter the number of frames:");
    scanf("%d",&n);
    int p=0,i;
    for(i=0;i<n;i++)
    {
        printf("frame %d has been transmitted\n",i);
        printf("enter acknowledgment received for frame %d :1 for Yes or 0 for No:",i);
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Frame %d has been successfully received\n",i);
            p=1;
        }
        else
        {
            while(p==0)
            {
                printf("\nframe %d has been retransmitted\n",i);
                printf("\nenter acknowledgment received for frame %d :1 for Yes or 0 for No:",i);
                scanf("%d",&ch);
                if(ch==1)
                {
                    p=1;
                }
            }
            printf("Frame %d has been successfully received\n",i);

        }
        p=0;
     }
}
