#include<stdio.h>
void main() {
    float PI = 3.141592;
    int diameter = 0;
    printf("���� ������ �Է��ϼ���.  ");
	scanf_s("%d", &diameter);
	fseek(stdin, 0,SEEK_END);

    float radius = diameter / 2;
    float roundOfCircle = diameter * PI;
    float areaOfCircle = radius * radius * PI;

    printf("���� ���� = %f, ���� �ѷ� = %f\n", roundOfCircle, areaOfCircle);
    fgetc(stdin);
}