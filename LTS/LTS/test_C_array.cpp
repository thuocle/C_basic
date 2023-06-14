//#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <ctype.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <iostream>
//
//void bai1() {
//	int n, sum = 0, count = 0 ;
//	int a[100];
//	printf("-------BAI 1--------");
//	printf("\nNhap so phan tu cua mang: ");
//	scanf_s("%d", &n);
//	while (n < 2 || n > 50)
//	{
//		printf("\nKhong hop le! Nhap lai: ");
//		scanf_s("%d", &n);
//	}
//	printf("\nNhap phan tu mang.");
//	for (int i = 0; i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nCac phan tu co dang 2^(n+i) la: ");
//	for (int i = 0;i < n;i++) {
//		if (a[i] == pow(2, n + i)) {
//			printf("%d ", a[i]);
//			sum += a[i];
//			count++;
//		}
//	}
//	if (count > 0) {
//		printf("\nTBC cac phan tu co dang 2^(n+i) la:%.2lf ", (sum * 1.0) / count);
//	}
//	else {
//		printf("\nKhong tinh duoc TBC vi khong co phan tu nao!");
//	}
//}
//void bai2() {
//	int a[100] = {1,5,8,9,10,7};
//	int n = 6;
//	//tim min max
//			for (int i = 0; i <(n-1) ; i++) { // sap xep lai mang theo buble sort 
//				for (int j = i + 1; j < n; j++) {
//					if (a[i] > a[j]) {
//						int temp = a[i];
//						a[i] = a[j];
//						a[j] = temp;
//					}
//				}
//			}
//	printf("\n-------BAI 2--------");
//	printf("\nSo nho nhat la: %d", a[0]);
//	printf("\nSo lon nhat la: %d", a[n - 1]);
//	//TBC min + max
//	printf("\nTBC cua min va max la: (%d + %d) /2 = %.2lf", a[0], a[n - 1], (a[0] + a[n - 1])*1.0 / 2);
//}
//void bai3() {
//	int n, sum = 0, count = 0, temp;
//	int a[100];
//	printf("\n-------BAI 3--------");
//	printf("\nNhap so phan tu cua mang: ");
//	scanf_s("%d", &n);
//	while (n < 2 || n > 50)
//	{
//		printf("\nKhong hop le! Nhap lai: ");
//		scanf_s("%d", &n);
//	}
//	printf("\nNhap phan tu mang.");
//	for (int i = 0; i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	//sap xep duong tang dan, am giam dan
//	for (int i = 0; i < (n - 1); i++) { // sap xep lai mang theo buble sort 
//		for (int j = i + 1; j < n; j++) {
//			if (a[i]>0 && a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//			else if (a[i] < 0 && a[i] < a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	printf("\nMang da sap xep la: ");
//	for (int i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//}
//void main() {
//	int n, sum = 0, count = 0;
//	int a[100];
//	/*bai1();
//	bai2();*/
//	bai3();
//}