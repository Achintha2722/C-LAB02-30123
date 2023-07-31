#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Achintha\n");
    printf("23.1 batch\n");
    printf("19 years old\n");

    printf("Achintha\n"
           "23.1 batch\n"
           "19 years old\n");

    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");


    printf("*\n"
           "**\n"
           "***\n"
           "****\n"
           "*****\n");

    printf("*\t"
           "**\t"
           "***\t"
           "****\t"
           "*****\t");

    printf("*\a"
           "**\a"
           "***\a"
           "****\a"
           "*****\n");


    int num_1 ,b_year  ;

    printf("Enter a Number:");
    scanf("%d" , &num_1);

    printf("The number is %d \n" , num_1);

    char name;

    printf("Enter your name:\n");
    scanf("%c" , &name);
    printf("Your name is %c \n" , name);


    printf("Enter your Birth year:\n");
    scanf("&d" , &b_year );
    printf("Your Birth Year is %d \n" , b_year);














    return 0;
}
