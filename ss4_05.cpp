#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("so thu 1: ");
    scanf("%d", &num1);
    printf("so thu 2: ");
    scanf("%d", &num2);
    printf("so thu 3: ");
    scanf("%d", &num3);
    if ((num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1)) {
        printf("So thu ba %d nam trong khoang giua so thu nhat %d va so thu hai %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba %d khong nam trong khoang giua so thu nhat %d va so thu hai %d.\n", num3, num1, num2);
    }

    return 0;
}