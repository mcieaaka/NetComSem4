#include<stdio.h>
#include<stdlib.h>
int check( long a){
    long temp = a;
    int ctr=0;
    while(temp!=0){
        int c = temp%10;
        if (c==1)
            ctr++;
        temp=temp/10;
    }
    if(ctr%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
void even_cr(long a){
    int p = check(a);
    if (p==0){
        printf("\nEven parity: message = %ld; Parity bit =%d",a,p);
    }
    else
    {
        printf("\nEven parity: message = %ld; Parity bit =%d",a,p);
    }
}

int main(){
    long a;
    while(1){
        int ch;
        printf("\nHarshit Srivastava 19BCE0382");
        printf("\n1.Sender parity message\n2.Check Receiver Side parity\n3.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                {
                    printf("enter a message");
                    scanf("%ld",&a);
                    even_cr(a);
                    break;
                }
            case 2:
                {
                    printf("enter a message");
                    scanf("%ld",&a);
                    int ans=check(a);
                    if(ans==0)
                        printf("Message is Even parity, No Error");
                    else
                        printf("Message is Not Even parity, Hence Error");
                    break;
                }
            case 3:
                {
                    exit(0);
                    break;
                }
            default:
                {
                    printf("Wrong Choice");
                    break;
                }
        }
    }
    return 0;
}
