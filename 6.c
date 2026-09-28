#include<stdio.h>
int main() {
    int category,sub_type,delayed,del,quality;
    printf("take category (1=greeting , 2=query , 3=complaint , 4=feedback)\n");
    scanf("%d",&category);
    if(category==1) {
    printf("take sub_type (1=Morning, 2=evening)\n");
    scanf("%d",&sub_type);
    if(sub_type==1) {
        printf("good morning! How can i help you? ");
    }else if (sub_type==2) {
        printf("good evening! How can i help you? ");
    }else{printf("Invalid sub_type selected!\n");}
    }

    else if(category==2) {
    printf("take sub_type (1=Product, 2=Billing, 3=Technical)\n");
    scanf("%d",&sub_type);
    if (sub_type==1) {
        printf("what your complaint with your product? ");
    }else if (sub_type==2) {
        printf("what your issue comes with bill? ");
    }else if (sub_type==3) {
        printf("how can i help you in your technical problem!");
    }else{printf("Invalid sub_type selected!");}
}

    else if(category==3) {
    printf("take sub_type (1=Delivery, 2=Quality)\n");
    scanf("%d",&sub_type);
     if (sub_type==1) {
        printf("is your order delayed?(1=yes,any other=NO");
        scanf("%d",&del);
        (del==1)?printf("we really appologize for your delay "):printf("we appologize for your inconvenience");}
    else if(sub_type==2) {
        printf("are you recieved good quality or not(1=yes,any other =no)\n");
        scanf("%d",&quality);
        (quality==1)?printf("we will try more better "):printf("we really appologize for you recieved in bad quality,we can give you replacement");
    }else {printf("Invalid sub_type selected!");}
}   

    else if (category==4) {
        printf("take sub_type (1=positive, 2=Negative)\n");
    scanf("%d",&sub_type);
    if(sub_type==1) {
        printf("thank you");
    }else if(sub_type==2) {
        printf("sorry sir/mam we will try our best\n");
    }else {
        printf("Invalid sub_type selected");
    }
}
return 0;
}




