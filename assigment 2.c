#include<stdio.h>
int main(void)
{
    float number; float answer;
    int choice;
    printf("1 pounds into kg:");
    printf("2 kg into pounds:");
    printf("Enter A Number:");
    scanf("%f", &number);
    printf("Enter A choice:");
    scanf("%f", &choice);
    if(choice == 1)
    {
        answer = 2.2046 * number;
    }
    else if (choice == 2)
    {
        answer = number / 2.2046;

    }
    printf("The result is %f,Answer");
}
