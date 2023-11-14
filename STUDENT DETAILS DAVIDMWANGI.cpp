#include <stdio.h>
int main ()
{
    int regno;
    char firstname[20];
    char lastname[20];
    int intro_to_programming;
    int accounting;
    int computer_operations;
    int operating_system;
    printf("Enter reg number\n");
    scanf("%d", &regno);

    printf("Enter first name\n");
    scanf("%s",&firstname);

    printf("Enter last name\n");
    scanf("%s", &lastname);

    printf("Enter introduction to programming score\n");
    scanf("%d", &intro_to_programming);

    printf("Enter accounting score\n");
    scanf("%d", &accounting);

    printf("Enter computer operations score\n");
    scanf("%d", & computer_operations);
 printf("enter operating system score \n");
 scanf("%d", & operating_system);

    printf("your reg number is %d\n",regno);

    printf("your first name is %s\n",firstname);

    printf("your last name is %s\n",lastname);

    printf("marks in introduction to programming%d\n", intro_to_programming);

    printf("marks in accountingv%d\n",accounting);

    printf("computer operations marks %d\n", computer_operations);
    printf("operating system %d\n", operating_system);

    return 0;
}
