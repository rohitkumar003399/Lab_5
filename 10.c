#include<stdio.h>
int main() {
    int Accuracy,Confidence,Role,Status;
    float Model,Data;
    printf("enter Accuracy(0 to 100): ");
    scanf("%d",&Accuracy);
    printf("enter Confidence level:(0 to 100): ");
    scanf("%d",&Confidence);
    printf("enter User Role (1=Intern 2=Engineer 3=Admin): ");
    scanf("%d",&Role);
    printf("enter Status Flag:  ");
    scanf("%d",&Status);
    printf("enter Data size:  ");
    scanf("%f",&Data);
    Data=Data/1000.0;
    if(Data>10) {Data=10;}
    Model=(Accuracy*0.5)+(Confidence*0.3)+(Data*2);
    printf("Model Score if %.2f\n",Model);
    if(Status & 8) {printf("Rejected: Model deprecated");}
    else if(!(Status & 1)) {printf("Rejected: not Trained");}
    else if(!(Status & 2)) {printf("Rejected: not Validated");}
    else if(!(Status & 4)) {printf("Rejected: awaiting Aproval");}
    else if(Accuracy<70 || Confidence<60) {printf("Rejected: performance too low");}
    else if(Data<5000) {printf("Rejected: Dataset too small");}
    else if(Role==1) {printf("Denied: Interns can't Deploy");}
    else if(Role==2 && Model<80) {printf("Denied: Engineer need higher Score");}
    else {printf("Approved for Deployment");}

    printf("\nSize of Accuracy = %zu bytes\n", Accuracy);
    printf("Size of Confidence = %zu bytes\n", Confidence);
    printf("Size of Role = %zu bytes\n", Role);
    printf("Size of Status = %zu bytes\n", Status);
    printf("Size of Data = %zu bytes\n", Data);
    printf("Size of Model = %zu bytes\n", sizeof(Model));

    return 0;

}