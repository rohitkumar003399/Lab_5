#include<stdio.h>
int main() {
    int stream,interest,medicine;
    printf("enter stream\n1=Science\n2=Commerce\n3=Arts\n");
    scanf("%d",&stream);
    switch(stream) {
        case 1:printf("In which subject you are interest\n1=Biology\n2=Chemistry\n3=Physics\n");
        scanf("%d",&interest);
        switch(interest) {
            case 1:printf("Recommended couse: Biology\n");
            printf("\nare you interested in Medicine\n1=yes\n0=no");
            scanf("%d",&medicine);
            if(medicine==1) {
                printf("Recommended: MBBS");
            }else if(medicine==0) {
                printf("Recommended: Biotechnology");
            }else {
                printf("Invalid medicine choice");
            }
            break;
            case 2:printf("Recommended couse: Chemistry");
            break;
            case 3:printf("Recommended couse: Physics");
            break;
            default: printf("Invalid Choice");
        }
        break;
        case 2:printf("In which subject you are interest\n1=Accounting\n2=Marketing\n");
        scanf("%d",&interest);
        switch(interest) {
            case 1:printf("Reccomended: course Accounting");
            break;
            case 2:printf("Reccomended: course Marketing");
            break;
            default:printf("Invalid Interest");
        }
        break;
        case 3:printf("In which subject you are interest\n1=Literatue\n2=History\n3=Psychology\n");
        scanf("%d",&interest);
        switch(interest) {
            case 1:printf("Reccomended: course Literature");
            break;
            case 2:printf("Reccomended: course History");
            break;
            case 3:printf("Reccomended: course Psychology");
            break;
            default:printf("Invalid Interest");
        }break;
        default:printf("Invalid Interest");
    }
    return 0;
}