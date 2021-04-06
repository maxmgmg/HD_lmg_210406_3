#include<stdio.h>
void main() {
    float PI = 3.141592;
    int diameter = 0;
    printf("원의 지름을 입력하세요.  ");
	scanf_s("%d", &diameter);
	fseek(stdin, 0,SEEK_END);

    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;

    printf("원의 넓이 = %f, 원의 둘레 = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}