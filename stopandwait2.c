#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 
int main()
{
int n,a[10],b,i=0;;
printf("Enter the number of frames: "); 
scanf("%d",&n);
for(int i=0;i<n;i++)
    a[i]=i;
b=1;
printf("\n");
while(i<n)
{
int c=0;
for(int j=i;j<i+b && j<n;j++)
printf("Sending frame: %d\n",j);
 
   for(int j=i;j<i+b && j<n;j++) {
if(rand()%10<5) {
printf("Acknowledgement: %d\n",j);
c++; }
else {
printf("Frame %d Not Received\n",j);
break; }
} printf("\n"); i+=c;
}
return 0; 
}