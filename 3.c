#include<stdio.h>
int main () {
    int O,HR,age;
    printf("enter oxygen level:   ");
    scanf("%d",&O);
    printf("enter age:   ");
    scanf("%d",&age);
    printf("enter hear rate:  ");
    scanf("%d",&HR);
    if (O<90) {
        printf("Critical: immediate attention");
    }else if(HR>130 || HR<40) {
        printf("Critical: cardiac alert");
    }else if(age>=65 && O<95) {
        printf("Hight priority");
    }else if (age<=5 && HR>110) {
        printf("high priority");
    }else if (O<97) {
        printf("medium priority");
    }else {printf("low priority");}

return 0;
}