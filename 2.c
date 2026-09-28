#include<stdio.h>
int main() {
    int mark,atten,income;
    printf("\nenter your marks(0 to 100)\n");
    scanf("%d",&mark);
     printf("\nenter your attendence\n");
    scanf("%d",&atten);
     printf("\nenter your family income\n");
    scanf("%d",&income);

    if(mark>=90 && atten>=90 && income<=800000) {
        printf("\nFull Scholarship");
    }else if(mark>=75 && atten>=85 && income<=800000) {
        printf("\nHalf Scholarship");
    }else if(mark<50 || atten<75 || income>800000) {
        printf("\nNot eligible"); }
    else { printf("\n quater Scholarship");}
    return 0;
}