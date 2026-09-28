#include<stdio.h>
int main () {
    int time,room,light,motion,cook;
    printf("enter time (0 to 23):  ");
    scanf("%d",&time);
    printf("enter room type\n(1 for Living Room)\n(2 for Bad room)\n(3 for Kitchen)\n");
    scanf("%d",&room);
    printf("enter tlight level\n(0 to 100):  ");
    scanf("%d",&light);
    printf("enter motion \n(1 for detected)\n(0 for undetected)\n");
    scanf("%d",&motion);

    if(motion == 1) {
        switch (room) {
            case 1: {
                if(time>=6 && time<18) {
                printf("Mode: Day\n Lights On");
                }else if(time>=18 && time<23) {
                    printf("Mode: Evening\n Dim Lights");
                }else if(23<=time<6) {
                    printf("Mode: Night\n Lights OFF");
                }else {printf("Ivalid time!");}
            }
            break;
            case 2:  {
                if(time>=6 && time<18) {
                printf("Mode: Day\n Lights On");
                }else if(time>=18 && time<23) {
                    printf("Mode: Evening\n Dim Lights");
                }else if(23<=time<6) {
                    printf("Mode: Night\n Lights OFF");
                }else {printf("Ivalid time!");}
            }
            break;
            case 3:  {
                if(time>=6 && time<18) {
                printf("Mode: Day\n Lights On");
                }else if(time>=18 && time<23) {
                    printf("Mode: Evening\n Dim Lights");
                }else if(23<=time<6) {
                    printf("Mode: Night\n Lights OFF");
                }else {printf("Ivalid time!");}
            }
            break;
            default: {printf("Invalid room type!");}
            break;
        }

    }else if(motion == 0) {printf("Mode: Motion away\nAll lights OFF");

    }else {printf("Invalid motion");}
    return 0;
}