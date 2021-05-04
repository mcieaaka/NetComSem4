#include<stdio.h>>
#include<stdlib.h>
#include<math.h>
#define max 100
int out[100];
int xor(int a, int b)
{
    if(a==b)
        return 0;
    else
        return 1;
}
void append_zeros(int l,int n, int data[]){
    for (int i = n; i < n+l-1; i++)
    {
        data[i] = 0;
    }
}
void CRC(int m, int n, int data [], int div[]){
    printf("intermediate values in division\n");
    for (int i = 0; i < m-1; i++) //calculates initial values
    {
        if (data[0]==1)
        {
            out[i] = xor(data[i+1],div[i+1]);
        }else{
            out[i] = xor(data[i+1],0);
        }
    }
    out[m-1] = data[m];
    for (int i = 0; i < m; i++)
    {
        printf("%d",out[i]); //printing out initial values
    }
    printf("\n");
    for (int j = m+1; j < n+m; j++) //calculates remaining values
    {
        if (out[0]==1)
        {
            for (int i = 0; i < m-1; i++)
           {
            out[i] = xor(out[i+1],div[i+1]);
           }
        }else
        {
           for (int i = 0; i < m-1; i++)
           {
            out[i] = xor(out[i+1],0);
           }
        }
        out[m-1] = data[j];
        for (int i = 0; i < m; i++)
        {
        printf("%d",out[i]);
        }
        printf("\n");
    }
    printf("CRC = ");
    for (int i = 0; i < m-1; i++)
    {
        printf("%d",out[i]);
    }
    printf("\n");
}
int main()
{
    printf("HARSHIT SRIVASTAVA 19BCE0382\n");
    int n;
    printf("Enter length of data\n");
    scanf("%d",&n);
    int data[max];
    printf("\n Enter data bits\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    int m;
    printf("Enter length of divisor\n");
    scanf("%d",&m);
    int div[max];
    printf("\n Enter data bits\n");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&div[i]);
    }
    printf("\nSender Side\n");
    append_zeros(m,n,data);
    CRC(m,n,data,div);
    for(int i=n;i<=m+n-1;i++)
    {
        data[i]=out[i-n];
    }
    printf("Generated message = ");
    for (int i = 0; i < n+m-1; i++)
    {
        if (i==n)
        {
            printf(" | ");
        }
        printf("%d",data[i]);
    }
    printf("\nReceiverSide\n");
    printf("Enter the data received: ");
    for (int i = 0; i < n+m-1; i++)
    {
        scanf("%d",&data[i]);
    }
    CRC(m,n,data,div);
    int ctr=0;
    for(int k =0;k<m-1;k++)
    {
        if(out[k]==0)
            ctr++;
    }
    if(ctr==m-1)
        printf("\nNo Error");
    else
        printf("\nError Present");
}
