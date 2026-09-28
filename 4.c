#include<stdio.h>
int main() {
    int card,AB,withdraw,pin,A=0,B=0,C=0;
    printf("enter your card status:(1 for active 2 for blocked):   ");
    scanf("%d",&card);
     printf("enter your Pin(1234 for correct):  ");
    scanf("%d",&pin);
     printf("enter your account balance:  ");
    scanf("%d",&AB);
     printf("enter your wihtdraw amount:   ");
    scanf("%d",&withdraw);

    if(card==1) {
        printf("Card is valid");
        if(pin==1234) {
            if(withdraw<AB && withdraw<25000) {
                if(AB-withdraw>1000) {
                    AB=AB-withdraw;
                    if(withdraw%100==0) {
                        while(withdraw>0) {
                            if(withdraw>=2000){A++; withdraw=withdraw-2000;}
                            else if(withdraw>=500){B++; withdraw=withdraw-500;}
                            else if(withdraw>=100){C++; withdraw=withdraw-100;}
                        }
                        printf("your withdraw amount is %d\n%d\n%d\ntotal is %d\n",A*2000,B*500,C*100,A*2000+B*500+C*100);
                        printf("now your acount balance is %d\n",AB);
                        printf("thank you\n");
                    }else{printf("withdraw amount should be divisible of 100");}
                }
                else{printf("1000 minimum balanced must be maintained: ");}
            }
            else if(AB<withdraw) {printf("Insufficient balance!");
            }
            else if(withdraw>25000) {
                printf("\ndaily limit exceede\n");
            }
            else {printf("dispence cash");}
        }else {printf("Incorrect pin!");}
    }else if(card==2) {
        printf("card is blocked contact bank please:");
    }else {
        printf("Ivalid card status");
    }
return 0;
}