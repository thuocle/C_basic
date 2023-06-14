//#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <ctype.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <iostream>
//int a[100];
//void printf_id_evenodd(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 9;
//	int i = 0, j = 0;
//	printf("Cac phan tu o vi tri chan la: ");
//	while (i < n) {
//		if (i % 2 == 0) {
//			printf("%d ", arr[i]);
//		}
//		i++;
//	}
//	i = 0;
//	printf("\nCac phan tu o vi tri le la: ");
//	while (i < n) {
//		if (i % 2 != 0) {
//			printf("%d ", arr[i]);
//		}
//		i++;
//	}
//}
//void sum_id_odd() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 9;
//	int i = 0, sum = 0;
//	
//	while (i < n) {
//		if (i % 2 != 0) {
//			sum += arr[i];
//		}
//		i++;
//	}
//	printf("\nTong cac phan tu o vi tri le la: %d ", sum);
//}
//void sum_integer() {
//	int arr[] = { 1, 2, 3, -4, -5, -6, -7, -8, 9 };
//	int n = 9;
//	int i = 0, sum = 0;
//	printf("Tong cac phan tu nguyen duong la: ");
//	while (i < n) {
//		if(arr[i]>0)
//		{
//			sum += arr[i];
//		}
//		i++;
//	}
//	printf("%d ", sum);
//}
//void print_even_id_odd(){
//	int arr[] = { 1, 2, 3, -4, -5, -6, -7, -8, 9 };
//	int n = 9, i = n-1;
//	while(i >= 0) {
//		if (i % 2 != 0 && arr[i] % 2 == 0) {
//			printf("Phan tu chan o vi tri le cuoi cung la: %d", arr[i]);
//			break;
//		}
//		i--;
//	}
//}
//void arr_string() {
//	char s[] = { 'H','e', 'l', 'l', 'o'};
//	int n = 5;
//	for (int i = n - 1; i >= 0; i--) {
//		printf("%c", s[i]);
//	}
//}
//void doiso() {
//	int arr[] = { 1, 2, 3, -4, -5, -6, -7, -8, 9 };
//	int n = 9;
//	printf("arr[] = ");
//	for (int i = 0; i < n;i++) {
//		if (arr[i] > 0) {
//			printf("%d ", - arr[i]);
//		}
//		else if( arr[i] < 0)
//		{
//			printf("%d ", (- arr[i]));
//		}
//	}
//}
////Cho một mảng số nguyên gồm n phần tử.Tính tỉ lệ xuất hiện của các phần tử lẻ trong mảng và in những phần tử đó ra.
////
////Đầu vào : Một mảng số nguyên gồm n phần tử
////Đầu ra : In ra tỉ lệ xuất hiện của các phần tử lẻ trong mảng(thể hiện bằng dấu% và lấy sau dấu, 2 chữ số)  và hiển thị những phần tử đó trên màn hình
////
////VD : a[] = { 1,2,3,4,5,6 } = > Tỉ lệ = 3 / 6 = 50 % và các phần tử đó là 1, 3, 5
//void probability_odd() {
//	int arr[] = { 1, 2, 3, -4, -5, -6, -7, -8, 9 };
//	int n = 9, count = 0;
//	printf("Cac phan tu le la ");
//	for(int i = 0; i < n;i++) {
//		if (arr[i] % 2 != 0) {
//			count++;
//			printf("%d ", arr[i]);
//		}
//	}
//	printf("\nTy le %d/%d = %.2lf%%", count, n, (count*1.0/n)*100);
//}
//void print_arr() {
//	int arr[] = { 3, 6, 9, 12};
//	int n = 4, count = 0, count2 = 0;
//	for (int i = 0;i < n;i++) {
//		if (arr[i] % 3 == 0) {
//			count++;
//		}
//		else if (arr[i] % 5 == 0) {
//			count2++;
//		}
//		else
//			printf("%d ", arr[i]);
//	}
//	if (count == n ) {
//		printf("Fizz");
//	}else if(count2 == n)
//		printf("Buzz");
//}
//void divi_3_5() {
//	int a[] = { 3, 2, 9, 11, 15 };
//	int n = 5, sum = 0;
//	printf("Cac so chia het cho 3 hoac 5 la: ");
//	for (int i = 0;i < n;i++) {
//		if (a[i] % 3 == 0 || a[i] % 5 == 0) {
//			sum += a[i];
//			printf("%d ", a[i]);
//		}
//	}
//	printf("\nTong cac so do = %d ", sum);
//}
//void divi_10() {
//	int a[] = { 3, 2, 30, 11, 15, 20 };
//	int n = 6, sum = 0;
//	printf("So dau tien chia het cho 10 la: ");
//	for (int i = 0;i < n;i++) {
//		if (a[i] % 10 == 0) {
//			printf("%d Vi tri thu %d", a[i], i);
//			break;
//		}
//	}
//}
//void bubble_sort() {
//	int a[] = { 7, 4, 8, 6, 2, 1, 10, 9, 0, -5 };
//	int n = 10, i = 0;
//	printf("Mang da sap xep la a[] = ");
//	for(i = 0; i < n - 1 ; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//		printf("%d, ", a[i]);
//		if (i == n - 2) {
//			printf("%d ", a[i+1]);// in ra phan tu cuoi cung
//		}
//	}
//}
//void bubble_sort_tominmax() {
//	int a[] = { 7, 4, 8, 6, 2, 1, 10, 9, 0, -5 };
//	int n = 10, i = 0;
//	printf("Mang da sap xep la a[] = ");
//	for(i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//		printf("%d, ", a[i]); 
//		if (i == n - 2) {
//			printf("%d ", a[i+1]);
//		}
//	}
//	printf("\nMin = %d va Max = %d", a[0], a[n - 1]);//sau khi sort: min la a[0] max la a[n-1]
//}
//void min_max() {
//	int a[] = { 7, 4, 8, 6, 2, 1, 10, 9, 0, -5 };
//	int n = 10, min = a[0], max = a[0];
//	for (int i = 0; i < n; i++) {
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//	printf("MIN la %d", min);
//	for (int i = 0; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	printf("\nMAX la %d", max);
//	printf("\nTong binh phuong hai so do la %.4lf", pow(min, 2) + pow(max, 2));
//}
//
//void search_char() {
//	char a[] = { 'D', 'u', 'a', 't', 'a', 'y' };
//	int n = 6, count = 0;
//	char c = 'a';
//	for (int i = 0;i < n;i++) {
//		if (c == a[i]) {
//			count++;
//		}
//	}
//	printf("Ky tu %c xuat hien %d lan", c, count);
//}
//
//void search_num() {
//	int a[] = { 7, 4, 8, 2, 2, 1, 10, 9, 0, -5 };
//	int n = 10, count = 0;
//	int num = 0;
//	printf("Nhap vao so nguyen: ");
//	scanf_s("%d", &num);
//	for (int i = 0;i < n;i++) {
//		if (num == a[i]) {
//			count++;
//		}
//	}
//	printf("Ky tu %d xuat hien %d lan", num, count);
//}
//void evenodd_sort() {
//	int a[] = { 7, 4, 8, 6, 2, 1, 10, 9, 0, -5 };
//	int n = 10, i = 0, temp = 0;
//	printf("Mang da sap xep la a[] = ");
//	for (i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//			else if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] < a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//		printf("%d, ", a[i]);
//		if (i == n - 2) {
//			printf("%d ", a[i + 1]);// in ra phan tu cuoi cung
//		}
//	}
//}
//void odd_sort() {
//	int a[] = { 7, 4, 8, 6, 2, 1, 10, 9, 0, -5 };
//	int n = 10, i = 0, temp = 0;
//	printf("Mang da sap xep la a[] = ");
//	for (i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]) {
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//		printf("%d, ", a[i]);
//		if (i == n - 2) {
//			printf("%d ", a[i + 1]);// in ra phan tu cuoi cung
//		}
//	}
//}
//void checktype_arr() {
//	int a[] = /*{ 5, 4, 3, 2, 1 };*/ { 5, 4, 8, 2, 1 }; /*{ 1, 2, 5, 8, 9};*/
//	int n = 5, i = 0, count = 0;
//	for (i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				count++;
//			}
//		}
//	}
//	if (count == n * 2) {
//		printf("Mang giam dan!");
//	}
//	else if (count == 0) {
//		printf("Mang tang dan!");
//	}
//	else
//	{
//		printf("Mang hon don!");
//	}
//}
//void find_even_digits(int nums[], int n) {
//	for (int i = 0; i < n; i++) {
//		int num = nums[i];
//		bool is_all_even = true;
//		while (num > 0) {
//			int digit = num % 10;
//			if (digit % 2 != 0) {
//				is_all_even = false;
//				break;
//			}
//			num /= 10;
//		}
//		if (is_all_even) {
//			printf("%d ", nums[i]);
//		}
//	}
//}
//void find_num_full_even() {
//	int a[] = { 548, 468, 768, 888, 989, 646, 880 };
//	int n = 7, tmp = 0, check, num = 0;
//	for (int i = 0; i < n; i++) {
//		tmp = a[i];
//		check = 1;
//		while (tmp > 0) {
//			num = tmp % 10;
//			if (num % 2 != 0) {
//				check = 0;
//				break;
//			}
//			tmp /= 10;
//		}
//		if (check == 1) {
//			printf("%d ", a[i]);
//		}
//	}
//}
//void max_maxsecond() {
//	int a[] = {1, 2, 10, 4, 9};
//	int n = 5, max = 0, max2 = 0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (a[i] > max2 && a[i] < max) {
//			max2 = a[i];
//		}
//	}
//	printf("\nSo lon nhat la %d, so lon thu 2 la %d", max, max2);
//}
//void perfect_sqr() {
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 9;
//	printf("Cac so chinh phuong trong mang la: ");
//	for (int i = 0;i < n;i++) {
//		if (sqrt(a[i]) == (int)sqrt(a[i])&& sqrt(a[i]) > 1) {
//			printf("%d ", a[i]);
//		}
//	}
//}
//void print_arr_input(){
//	int n;
//	printf("Nhap so phan tu cua mang: ");
//	scanf_s("%d", &n);
//	int a[100];
//	printf("\nNhap phan tu mang.");
//	for (int i = 0; i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nMang da nhap la: ");
//	for (int i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\nMang nguoc la: ");
//	for(int i = n - 1;i >= 0;i--) {
//		printf("%d ", a[i]);
//	}
//}
//void printf_arr_range() {
//	int n;
//	int a[100];
//	printf("Nhap so phan tu cua mang: ");
//	scanf_s("%d", &n);
//	while (n < 1 || n > 100)
//	{
//		printf("Khong hop le! Nhap lai: ");
//		scanf_s("%d", &n);
//	}
//	printf("\nNhap phan tu mang.");
//	for (int i = 0; i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nMang da nhap la: ");
//	for (int i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\nMang nguoc la: ");
//	for (int i = n - 1;i >= 0;i--) {
//		printf("%d ", a[i]);
//	}
//}
//void search_x() {
//	int n, x;
//	int check = 0;
//	int a[100];
//	printf("Nhap so phan tu cua mang: ");
//	scanf_s("%d", &n);
//	while (n < 1 || n > 100)
//	{
//		printf("Khong hop le! Nhap lai: ");
//		scanf_s("%d", &n);
//	}
//	printf("\nNhap phan tu mang.");
//	for (int i = 0; i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nNhap phan tu can tim: ");
//	scanf_s("%d", &x);
//	for (int i = 0;i < n;i++) {
//		if (a[i] == x) {
//			printf("\nVi tri dau tien cua x la: %d", i);
//			check = 1;
//			break;
//		}
//	}
//	if (check == 0) {
//		printf("\n-1");
//	}
//}
//void search_midnum() {
//	int n;
//	int a[100], i = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 3) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nCac vi tri thoa man de bai: ");
//	for (i = 1;i < n;i++) {
//		if (a[i] == a[i - 1] * a[i + 1]) {
//			printf("%d ", i);
//		}
//	}
//}
//void avg_even_idodd() {
//	int n;
//	int a[100], i = 0, count = 0 ;
//	double sum = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 3) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nCac so chan o vi tri le: ");
//	for (i = 1;i < n;i+=2) {
//		sum = a[i];
//		if (a[i] % 2 == 0) {
//			printf("%d ", a[i]);
//			sum += sum;
//			count++;
//		}
//	}
//	printf("\nTBC = %.0lf/%d = %lf",sum, count, sum / count);
//}
// 
//void arr_doixung() {
//	int n;
//	int a[100], i = 0, check = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0;i <n/2;i++) {
//		if (a[i] != a[n - i - 1]) {
//			check = 1;
//			printf("Mang khong doi xung");
//			break;
//		}
//	}
//	if (check == 0) {
//		printf("Mang doi xung");
//	}
//}
//void num_chinhphuong() {
//	int n;
//	int a[100], i = 0, check = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	if (n < 0) {
//		printf("\nKhong co so chinh phuong nao trong mang.");
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0;i < n;i++) {
//		if (sqrt(a[i]) * sqrt(a[i]) == a[i]) {
//			printf("\nSo chinh phuong dau tien la %d o vi tri %d.", a[i], i);
//			check = 1;
//			break;
//		}
//	}
//	if (check == 0) {
//		printf("\nKhong co so chinh phuong nao trong mang.");
//	}
//}
//void num_pow2k() {
//	int n;
//	int a[100], i = 0, check = 0, count = 0;
//	double sum = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	for (i = 0;i < n;i++) {
//		int num = a[i];
//		if (num == pow(2, i)) {
//			printf("%d ", num);
//			sum += num;
//			count++;
//		}
//	}
//		printf("\nTBC: %lf ", sum/count);
//}
//void perfect_num(){
//	int n;
//	int a[100], i = 0, num, count = 0;
//	int sum = 0, sumtg = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	printf("\nCac so hoan hao la: ");
//	for (i = 0; i < n;i++) {
//		num = a[i];
//		sum = 0;
//		for (int j = 1; j <= num / 2;j++) {
//			if (num % j == 0) {
//				sum += j;
//			}
//		}
//		if (sum == num) {
//			sumtg += num;
//			printf("%d ", num);
//		}
//	}
//	printf("\nTong cac so hoan hao la: %d", sumtg);
//}
//void merge_arr() {
//	int n = 5, m = 5;
//	int a[] = { 3,6,2,1,7 };
//	int b[] = { 10,8,5,4,9 };
//	int c[100];
//	for (int i = 0;i < n;i++) {// cho cac phan tu cua mang a vao c
//		c[i] = a[i];
//	}
//	for (int j = 0;j < m;j++) {//cho cac phan tu cua mang b vao c
//		c[n+j] = b[j]; 
//	}
//		printf("Mang c[] = ");
//		for (int i = 0; i <= (n + m)-1 ; i++) { // sap xep lai mang theo buble sort 
//			for (int j = i + 1; j < (n + m); j++) {
//				if (c[i] > c[j]) {
//					int temp = c[i];
//					c[i] = c[j];
//					c[j] = temp;
//				}
//			}
//			printf("%d ", c[i]);
//		}
//}
//void uncommon_number() {
//	int n, m;
//	int i = 0, num, count = 0 ,check = 0, count2 =0;
//	
//	int a[] = { 1, 7, 3 };
//	int b[] = { 1, 8, 3 };
//	n = 3, m = 3;
//	for (int i = 0; i < n;i++) {
//		check = 0;
//		for (int j = 0; j < m;j++) {
//			if (a[i] == b[j]) {
//				check = 1;
//				break;
//			}
//		}
//		if (check == 0) {
//			count++;
//		}
//	}
//	for (int i = 0; i < m;i++) {
//		check = 0;
//		for (int j = 0; j < n;j++) {
//			if (b[i] == a[j]) {
//				check = 1;
//				break;
//			}
//		}
//		if (check == 0) {
//			count2++;
//		}
//	}
//	
//		printf("So phan tu chi xuat hien o 1 trong 2 mang la: %d", count + count2);
//}
//void arr_odd() {
//	int n;
//	int a[100], i = 0, num, count = 0, check = 0;
//	int sum = 0, sumtg = 0;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0 || n > 50) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	for (int i = 0;i < (n-1);i++) {
//		if ((a[i] + a[i + 1]) % 2 == 0) {
//			check = 1;
//			printf("\nNO");
//			break;
//		}
//	}
//	if (check == 0) {
//		printf("\nYES");
//	}
//}
////Bai tap sinh chuoi binary
//void print(int a[100], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("%d", a[i]);
//	}
//	printf("\n");
//}
//void printBinary() {
//	int a[30], n, i;
//
//	printf("\Nhap vao do dai cua day: ");
//	scanf_s("%d", &n);
//	// Khoi gan gia tri cua day
//	for (i = 0; i < n; i++)
//		a[i] = 0;
//	while (i >= 0)
//	{
//		for (i = 0; i < n; i++)
//			printf("%d  ", a[i]);
//		printf("\n");
//		i = n - 1;
//		while ((i >= 0) && (a[i] == 1)) i--;
//		if (i >= 0)
//		{
//			a[i] = 1;
//			for (int j = i + 1; j < n; j++)
//				a[j] = 0;
//		}
//
//	}
//}
////end
//void summary_first() {
//	int n;
//	int a[100], i = 0, num, count = 0, check = 0;
//	int total = 1;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	//in mang
//	printf("\nMang vua nhap la: ");
//	for (i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//	//in so le
//	printf("\nPhan tu le trong mang la: ");
//	for (i = 0;i < n;i++) {
//		if (a[i] % 2 != 0) {
//			printf("%d ", a[i]);
//		}
//	}
//	//le nguyen to
//	printf("\nPhan tu le la so nguyen to trong mang la: ");
//	for (int i = 0;i < n;i++) {
//		count = 0;
//		if (a[i] > 2) {
//			for (int j = 2;j <= (a[i] / 2);j++) {
//				if (a[i] % j == 0) {
//					count++;
//					break;
//				}
//			}
//			if (count == 0) {
//				printf("%d ", a[i]);
//			}
//		}
//	}
//	//le nguyen to vt chan
//	printf("\nTich Phan tu le la so nguyen to o vi tri chan trong mang la: ");
//	for (int i = 0;i < n;i++) {
//		count = 0;
//		if (a[i] > 2) {
//			for (int j = 2;j <= (a[i] / 2);j++) {
//				if (a[i] % j == 0) {
//					count++;
//					break; 
//				}
//			}
//			if (count == 0 && i % 2 == 0) {
//				total = total * a[i];
//			}
//		}
//	}
//	printf("%d ", total);
//}
//void summary_second() {
//	int n;
//	int a[100], i = 0, num, count = 0, check = 0;
//	int total = 1;
//	printf("Nhap vao so phan tu n: ");
//	scanf_s("%d", &n);
//	while (n < 0) {
//		printf("\nKhong hop le! Nhap lai so phan tu n: ");
//		scanf_s("%d", &n);
//	}
//	for (i = 0;i < n;i++) {
//		printf("\na[%d] = ", i);
//		scanf_s("%d", &a[i]);
//	}
//	//in mang nguyen duong
//	printf("\nCac so nguyen duong trong mang la: ");
//	for (i = 0;i < n;i++) {
//		if (a[i] > 0) {
//			printf("%d ", a[i]);
//		}
//	}
//	//in cac so nguyen duong co so chu so chia het 3
//	printf("\nCac so nguyen duong co so chu so chia het 3 trong mang la: ");
//	for (i = 0;i < n;i++) {
//		num = a[i];
//		count = 0;
//		for (int j = a[i];j != 0;j /= 10) {
//			count++;
//		}
//		if (count % 3 == 0) {
//			printf("%d ", num);
//		}
//	}
//}
//void mix_arr() {
//	int a[] = { 5,3,4,2,1 };
//	int b[] = { 8,7,5,4,10 };
//	int c[100];
//	int n = 5, m = 5, tmp;
//	for (int i = 0; i < n-1;i++) {
//		for (int j = i+1;j < n;j++) {
//			if (a[i] > a[j]) {
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n - 1;i++) {
//		for (int j = i + 1;j < n;j++) {
//			if (b[i] > b[j]) {
//				tmp = b[i];
//				b[i] = b[j];
//				b[j] = tmp;
//			}
//		}
//	}
//	printf("a[] = ");
//	for (int i = 0;i < n;i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\nb[] = ");
//	for (int i = 0;i < m;i++) {
//		printf("%d ", b[i]);
//	}
//	//mix 2 mang
//	for (int i = 0;i < n;i++) {
//		c[i] = a[i];
//	}
//	for (int j = 0;j <m;j++) {
//		c[n+j] = b[j];
//	}
//	//sort mang c
//	for (int i = 0; i < n - 1;i++) {
//		for (int j = i + 1;j < n;j++) {
//			if (c[i] > c[j]) {
//				tmp = c[i];
//				c[i] = c[j];
//				c[j] = tmp;
//			}
//		}
//	}
//	printf("\nc[] = ");
//	for (int i = 0;i < (n + m);i++) {
//		printf("%d ", c[i]);
//	}
//}
//void main() {
//	int n;
//	int arr[100];
//	char s[100];
//	int a[100];
//	//int n;
//	//int nums[] = { 12, 24, 35, 68 };
//	//int n = sizeof(nums) / sizeof(nums[0]);
//	//find_even_digits(nums, n);
//	/*printf_id_evenodd();*/
//	/*sum_id_odd();*/
//	/*sum_integer();*/
//	/*print_even_id_odd();*/
//	//arr_string();
//	/*doiso();*/
//	/*probability_odd();*/
//	//print_arr();
//	//divi_3_5();
//	//divi_10();
//	//bubble_sort();
//	//bubble_sort_tominmax();
//	//min_max();
//	//search_char();
//	//search_num();
//	//evenodd_sort();
//	//odd_sort();
//	//checktype_arr();
//	//num_fulleven();
//	//max_maxsecond();
//	//find_num_full_even();
//	//perfect_sqr();
//	//print_arr_input();
//	//printf_arr_range();
//	//search_x();
//	//search_midnum();
//	//avg_even_idodd();
//	//arr_doixung();
//	//num_chinhphuong();
//	//num_pow2k();
//	//perfect_num();
//	//merge_arr();
//	//uncommon_number();
//	//arr_odd();
//	//printBinary();
//	//summary_first();
//	//summary_second();
//	mix_arr();
//	_getch;
//}