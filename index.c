#include <stdio.h>
#include "temperature.h"

#define RESET  "\x1B[0m"
#define GREEN  "\x1B[32m"
#define BLUE   "\x1B[34m"

int main() {
    char choice;

    printf("Would you like to convert Celsius to Fahrenheint (C), or Fahrenheint to Celsius ? (F) : ");
    scanf("%c", &choice);
    float input;

    if (choice == 'C' || choice == 'c') {
    printf("Please, input the celsius value you wish to convert : ");
    scanf("%f", &input);

    float value = celToFah(input);

    printf("The fahrenheit value is : %s%.2f F°%s, rounded at 2 decimals.\n", value > 0 ? GREEN : BLUE, value, RESET);

    return 0;
    } else if (choice == 'F' || choice == 'f') {
    printf("Please, input the fahrenheint value you wish to convert : ");
    scanf("%f", &input);
    float value = fahToCel(input);
    printf("The celsius value is : %s%.2f C°%s, rounded at 2 decimals.\n", value > 0 ? GREEN : BLUE, value, RESET);

    return 0;
    } else {
        printf("\nNon valid answer, try again. \n");
        main();
    }

    return 0;
}