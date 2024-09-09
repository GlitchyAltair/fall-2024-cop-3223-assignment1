// Damian Santana Gray
// Assignment name: Fracture
// COP 3223
// September 6th, 2024
// math.h library for math functions
// stdio.h input/ouput functions
//PI for pi
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double getInput(char *prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}
// double calc for Distance
double calculateDistance() {
    double x1 = getInput("Enter x1: ");
    double x2 = getInput("Enter x2: ");
    double y1 = getInput("Enter y1: ");
    double y2 = getInput("Enter y2: ");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    printf("The distance between the two points is %.3f\n", distance);
    return distance;
}
// double calc for area
double calculateArea() {
    double x1 = getInput("Enter x1: ");
    double x2 = getInput("Enter x2: ");
    double y1 = getInput("Enter y1: ");
    double y2 = getInput("Enter y2: ");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);
    printf("The area of the city encompassed by your request is %.3f\n", area);
    return 1.0; 
}
// Calculation of Perimeter
double calculatePerimeter() {
    double x1 = getInput("Enter x1: ");
    double x2 = getInput("Enter x2: ");
    double y1 = getInput("Enter y1: ");
    double y2 = getInput("Enter y2: ");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);
    return 1.0; 
}
// Calculation of Width
double calculateWidth() {
    double x1 = getInput("Enter x1: ");
    double x2 = getInput("Enter x2: ");
    double y1 = getInput("Enter y1: ");
    double y2 = getInput("Enter y2: ");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    printf("The width of the city encompassed by your request is %.3f\n", distance);
    return 1.0; // difficulty level
}
// Calucaltion of height 
double calculateHeight() {
    double x1 = getInput("Enter x1: ");
    double x2 = getInput("Enter x2: ");
    double y1 = getInput("Enter y1: ");
    double y2 = getInput("Enter y2: ");
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.3f; y1 = %.3f\n", x1, y1);
    printf("Point #2 entered: x2 = %.3f; y2 = %.3f\n", x2, y2);
    printf("The height of the city encompassed by your request is %.3f\n", distance);
    return 1.0; 
}
// int main with var
int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}