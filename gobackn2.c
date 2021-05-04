#include<stdio.h>
#include<math.h>
int main()
{
    printf("Harshit Srivastava 19BCE0382\n");
    int n,m,k,r,p[50],i,w=0,a=0,zx=0,ch,rf=0,bf,s=0,sb,sm,d,rn[50],t,rn1[50],e[50],g,y=0,h;
    printf("Enter the no. of frames:");
    scanf("%d",&n);
    printf("Enter the m-bit value:");
    scanf("%d",&m);
    k=pow(2,m);
    h=k-2;
    bf=k-2;
    printf("Sender window size is:%d",k-1);
    printf("\nEnter the receiver window size:");
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        p[i]=i;
    }
    printf("Numbering of frames:");
    for(i=0;i<n;i++)
        printf("%d ",p[i]);
    int u=0;
    while(n>0)
    {
        printf("\n1.Normal transmission\n2.Frame lost\n3.Acknowledgement lost\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:sb=p[y];
                if(u<k-2)
                    sm=k-2;
                else
                    sm=p[u-1];
                printf("Sending frames %d-%d",sb,sm);
                printf("\nEnter the received frames one by one:");
                g=0;
                for(i=0;i<=h;i++)
                {
                    scanf("%d",&rn1[i]);
                    rn[i]=p[s++];
                    if(rn[i]!=rn1[i])
                        g=1;
                }
                if(g==0)
                    printf("Frames have arrived in order");
                else
                    printf("Frames haven't arrived in order");
                break;
             case 2:sb=p[y];
                zx=0;
                s=y;
                if(u<k-2)
                    sm=k-2;
                else
                    sm=p[u-1];
                i=0;
                int x=0;
                printf("Sending frames %d-%d",sb,sm);
                printf("\nEnter the data bits received one by one:");
                while(1)
                {
                    scanf("%d",&rn1[i]);
                    rn[i]=p[s++];
                    if(rn[i]!=rn1[i])
                    {
                        t=p[y+i];
                        printf("Acknowledgement received till frame %d",p[(y+i)-1]);
                        printf("\nLost frame is %d",t);
                        break;
                    }
                    i++;
                    zx++;
                }
                 printf("\nResending frames %d-%d",t,sm);
                 printf("\nEnter the data bits received one by one including the lost frame");
                 g=0;
                 for(i=zx;i<=h;i++)
                 {
                    scanf("%d",&e[x]);
                    rn[x]=p[y+i];
                    if(rn[x]!=e[x])
                        g=1;
                    x++;
                }
                if(g==0)
                    printf("Frames have arrived in order:");
                else
                    printf("Frames haven't arrived in order");
                break;
            case 3:sb=p[y];
                 rf=y;
                 a=0;
                 if(u<k-2)
                    sm=k-2;
                 else
                    sm=p[u-1];
                 int j=0;
                 printf("Sending frames %d-%d",sb,sm);
                 printf("\nEnter the acknowledgement no. of frame lost:");
                 scanf("%d",&d);
                 while(rf<=bf)
                 {
                    if(d==p[rf])
                        break;
                    a++;
                    rf++;
                 }
                 printf("Resending frames %d-%d",d,sm);
                 printf("\nEnter the data bits received one by one including the lost frame:");
                 g=0;
                 for(i=a;i<=h;i++)
                 {
                    scanf("%d",&e[j]);
                    rn[j]=p[y+i];
                    if(rn[j]!=e[j])
                        g=1;
                    j++;
                 }
                 if(g==0)
                    printf("Frames have arrived in order:");
                 else
                    printf("Frames haven't arrived in order");
                 break;
        }
        h=n-k;
        n=n-(k-1);
        y=y+(k-1);
        s=y;
        u=y+n;
        bf=y+n;
    }
}
