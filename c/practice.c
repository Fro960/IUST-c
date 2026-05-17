 #include <stdio.h>

 int main(void)
 {
    int r;
    float area;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = (float) 3.14 * r * r;
    printf("Area is %.2f\n", area);

    return 0;
 }