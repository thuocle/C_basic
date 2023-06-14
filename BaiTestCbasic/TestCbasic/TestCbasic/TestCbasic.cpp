#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

void bai1() {
	int a = 100;
	double b = 121.343;
	char c = 'x';
	printf("a = %d \nb = %.3lf \nc = %c", a, b, c);
}
void ngaythangnam() {
	int ngay, thang, nam;
	printf("\nNhap ngay thang nam: ");
	scanf_s("%d%d%d", &ngay, &thang, &nam);
	if (nam >= 1900 && nam <= 2022 && thang >= 1 && thang <= 12) {
		switch (thang)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (ngay >= 1 && ngay <= 31) {
				printf("YES");
			}
			else
			{
				printf("NO");
			}
			break;
		case 2: 
			if (nam % 4 == 0 && ngay >= 1 && ngay <= 29) {
				printf("YES");
			}
			else if(nam % 4 != 0 && ngay >= 1 && ngay <= 28) {
				printf("YES");
			}
			else
			{
				printf("NO");
			}
			break;
		case 4 : case 6: case 9: case 11:
			if (ngay >= 1 && ngay <= 30) {
				printf("YES");
			}
			else {
				printf("NO");
			}
			break;
		}
	}
	else {
		printf("NO");
	}
}
void bai3() {
	double S = 0;
	int n;
	printf("\nNhap n: ");
	scanf_s("%d", &n);

	for (int a = 1, i = 2;i <= n; i++)
	{
		a = a * (2 * i - 2) * (2 * i - 1);// vidu i = 2 --> a = 1 * ( 2 * i - 2) * (2 * i - 1) = 2 * 3 = 3!;
		S += 1.0 / a;					 // vidu i = 3 --> a = 1 * ( 2 * i - 2) * (2 * i - 1) = 3! * 4 * 5 = 2 * 3 * 4 * 5 = 5!;
	}
	printf("Tong la %lf", S + 0.5);
}
void main()
{
	int a, b, i, j, n;
	char c; 
	bai1();
	ngaythangnam();
	bai3();
}

