#include<stdio.h>
#include <string.h>


int main(){
    int a,b;
    char op;
    char command[255], newline;
    printf("Which operation would you like to carry out \n");
    scanf("%c",&op);

    printf("User is requird to enter two numbers\n");
    scanf("%d %d",&a,&b);

    scanf("%c", &newline); // eat trailing newline
    fgets(command, 255, stdin);

    

    if (op == '+')
       printf("Sum = %d",a+b);
    else if (op == '-')
       printf("Subtraction = %d",a-b);
    else if (op == '*')
       printf("Multiplication = %d",a*b);
    else if (op == '/'){
        if (b==0){
            printf("Division not viable");
        }
        else{
             printf("division = %d",a/b);
        }    
    }  
    else
        printf("Operation n/a");
    return 0;
}