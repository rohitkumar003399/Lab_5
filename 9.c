#include <stdio.h>

int main()
{
    int permission;

    printf("Enter permissions: ");
    scanf("%d", &permission);
    if(permission & 16) {
        printf("Full access admin");
    }else if((permission & 8) && (permission & 2)) {
        printf("access: delete and write");
    }else if ((permission & 4) && !(permission & 2)) {
        printf("access: only execute");
    }else if((permission & 1) && !(permission & 4) && !(permission & 2)) {
        printf("Access Read only");
    }else if((permission & 16) && (permission & 8) &&!(permission & 1) && !(permission & 4) && !(permission & 2)) {
        printf("Access Denied");
    }else {printf("Access:Custom permissions");}
    return 0;
}


