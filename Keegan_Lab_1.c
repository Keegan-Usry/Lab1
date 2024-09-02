#include <stdio.h>
 
int main()

{

int age;

float height;

char grade;



printf("Enter Age (Years): ");
scanf("%d", &age);

printf("Enter Height (Meters): ");
scanf("%f", &height);

printf("Enter Grade (Letters): ");
scanf(" %c", &grade);

printf(" \nEntered:  \n");
printf("Age: %d years\n", age);
printf("Height: %.2f meters\n", height);
printf("Grade: %c\n", grade);


    return 0;
}


 