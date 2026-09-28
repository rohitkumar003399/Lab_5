#include<stdio.h>
int main() {
    int type,time,m;
    float fee,discount;
    printf("etner vehicle type:(1 for bike, 2 for car, 3 for truck)\n"  );
    scanf("%d", &type);
    printf("entre how many hour parked\n");
    scanf("%d", &time);
    printf("you have membership(1 for yes, 2 for no)\n");
    scanf("%d",&m);

    if(type==1) {
        fee=20*time;
    }else if(type==2) {
        if(time<=2) {
            fee=50;
        }else if(time>2) {
            fee=50+(30*(time-2));
        }else {
            printf("\ninvalid time\n");
        }

    }else if(type==3) {
        if(time<=2) {
            fee=80;
        }else if(time>2) {
            fee=100+(50*(time-3));
        }else {
            printf("\ninvalid time\n");
        }
    }else {printf("\ninvalide type\n");}
    if(m==1) {
        discount=fee*1.5;
    }else{
        discount=0;
    }
    printf("\nyour total fees is %f\n",fee);

    return 0;
}