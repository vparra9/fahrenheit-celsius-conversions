#include <stdio.h> // for printf and scanf

// Function prototypes
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);
double convtemp(double input, int userChoice);

int main() {
    int userChoice;
    double input, output;

    // Asks the user which conversion they would like to use.
    printf("Would you like to convert:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    // Prompts the user to choose 1 or 2 as in F to C or C to F.
    printf("Enter 1 or 2: ");
    scanf("%d", &userChoice);

    // Prompts the user to enter the temperature value they want to convert.
    printf("Temperature value: ");
    scanf("%lf", &input);

    // Assigns output to convtemp which holds the conversion.
    output = convtemp(input, userChoice);

    // Will calculate using the correct conversion based on the user's choice.
    if (userChoice == 1) {
        printf("%.2lf in Fahrenheit is %.2lf in Celsius\n", input, output);
    } else if (userChoice == 2) {
        printf("%.2lf in Celsius is %.2lf in Fahrenheit\n", input, output);
    } else {
        printf("ERROR\n");
    }

    return 0;
}

// Conversion for Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Conversion for Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

// Determines which conversion will be used based on the user's choice of 1 or 2.
double convtemp(double input, int choice) {
    if (choice == 1) {
        return fahrenheitToCelsius(input);
    } else if (choice == 2) {
        return celsiusToFahrenheit(input);
    } else {
        printf("Invalid choice\n");
        return 0.0; // Return a default value
    }
}