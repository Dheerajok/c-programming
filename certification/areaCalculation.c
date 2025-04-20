#include <stdio.h>


// it will calculate area for cicrcle
float area_circle(float r) {
    return 3.14 * r * r;
}

// it will calculate circumference for cicrcle
float circumference_circle(float r) {
    return 2 * 3.14 * r;
}

// it will calculate circumference rectangle
float area_rectangle(float l, float w) {
    return l * w;
}

//it will calculate area for rectangle
float perimeter_rectangle(float l, float w) {
    return 2 * (l + w);
}

// it will calculate area for triangle
float area_triangle(float b, float h) {
    return 0.5 * b * h;
}

// it will calculate perimeter for triangle
float perimeter_triangle(float a, float b, float c) {
    return a + b + c;
}


int main() {
    int choice; // it will help to choose the shape
    float a, b, c; //for inputs

    printf("===== geometry calculator =====\n");
    printf("1. circle\n");
    printf("2. rectangle\n");
    printf("3. triangle\n");
    printf("enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("enter radius of circle: ");
        scanf("%f", &a);
        printf("area: %.2f\n", area_circle(a));
        printf("circumference: %.2f\n", circumference_circle(a));
    }
    else if (choice == 2) {
        printf("enter length and width of rectangle: ");
        scanf("%f %f", &a, &b);
        printf("area: %.2f\n", area_rectangle(a, b));
        printf("perimeter: %.2f\n", perimeter_rectangle(a, b));
    }
    else if (choice == 3) {
        printf("enter three sides of triangle: ");
        scanf("%f %f %f", &a, &b, &c);
        printf("enter base and height for area: ");
        float base, height;
        scanf("%f %f", &base, &height);
        printf("area: %.2f\n", area_triangle(base, height));
        printf("perimeter: %.2f\n", perimeter_triangle(a, b, c));
    }
    else {
        printf("please select from 1 to 3.\n");
    }

    return 0;
}

