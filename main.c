#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    char longestSide;

    printf("Enter the side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        longestSide = 'a';
    } else if (b > a && b > c) {
        longestSide = 'b';
    } else {
        longestSide = 'c';
    }
    if (longestSide == 'a') {
        if (a*a == b*b + c*c) {
            printf("The triangle is a right triangle.\n");
        } else if (a*a > b*b + c*c) {
            printf("The triangle is an obtuse triangle.\n");
        } else {
            printf("The triangle is an acute triangle.\n");
        }

    if (longestSide == 'b') {
        if (b*b == a*a + c*c) {
            printf("The triangle is a right triangle.\n");
        } else if (b*b > a*a + c*c) {
            printf("The triangle is an obtuse triangle.\n");
        } else {
            printf("The triangle is an acute triangle.\n");
        }
    }

    if (longestSide == 'c') {
        if (c*c == a*a + b*b) {
            printf("The triangle is a right triangle.\n");
        } else if (c*c > a*a + b*b) {
            printf("The triangle is an obtuse triangle.\n");
        } else {
            printf("The triangle is an acute triangle.\n");
        }
    }

    return 0;
}