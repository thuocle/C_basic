//#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <ctype.h>
//
//void ptb2() {
//	int a, b, c;
//	double x1 = 0, x2 = 0;
//	printf_s("Nhap he so a, b, c: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//	int delta = (b * b) - (4 * a * c);
//	if (a != 0 && delta == 0) {
//		x1 = x2 = -b / (2 * a);
//	}
//	if (a != 0 && delta > 0)
//	{
//		x1 = (-b - sqrt(delta)) / (2 * a);
//		x2 = (-b + sqrt(delta)) / (2 * a);
//	}
//	if (delta < 0) {
//		printf_s("Phuong trinh vo nghiem!");
//	}
//	if (a == 0)
//	{
//		printf_s("Nhap he so a, b, c: ");
//		scanf_s("%d %d %d", &a, &b, &c);
//	}
//	printf_s("Phuong trinh co nghiem: x1 = %.1lf, x2 = %.1lf", x1, x2);
//}
//void chia3chia5() {
//	int a;
//	printf_s("Nhap so nguyen a: ");
//	scanf_s("%d", &a);
//	if (a >= 1 && a <= 100) {
//		if (a % 3 == 0 && a % 5 != 0) {
//			printf("a chia het cho 3");
//		}
//		if (a % 5 == 0 && a % 3 != 0) {
//			printf("a chia het cho 5");
//		}
//		if (a % 5 == 0 && a % 3 == 0) {
//			printf("a chia het cho 3 va 5");
//		}
//	}
//	else
//	{
//		printf("khong thoa man input!");
//	}
//}
//void even_odd() {
//	int a;
//	printf_s("Nhap so nguyen a: ");
//	scanf_s("%d", &a);
//	if (a % 2 == 0) {
//		printf_s("a la so chan");
//	}else
//		printf_s("a la so le");
// }
//void nam_nhuan() {
//	int a;
//	printf_s("Nhap so nguyen a: ");
//	scanf_s("%d", &a);
//	if (a > 2020 || a < 1000) {
//		printf_s("khong tinh duoc");
//	}
//	else {
//		if (a % 4 == 0) {
//			printf_s("a = %d la nam nhuan", a);
//		}
//		else
//		{
//			printf_s("a = %d khong phai nam nhuan", a);
//		}
//	}
//}
//void tamgiac() {
//	int a = 0, b = 0, c = 0;
//	printf_s("Nhap do dai 3 canh a, b, c: ");
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a + b > c && a + c > b && c + b > a) {
//		if (a == b == c) {
//			printf_s("Day la tam giac deu");
//		}
//		else if (((a * a) == (b * b) + (c * c)) || ((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b) )){
//			printf_s("Day la tam giac vuong");
//		}
//		else if (((a == b) && a != c) || ((a == c) && a != b) || ((c == b) && c != a)) {
//			printf_s("Day la tam giac can");
//		}
//		else
//		{
//			printf_s("Day la tam giac thuong");
//		}
//	}
//}
//void ascii() {
//	char c = 'a';
//	switch (c)
//	{
//	case 65: case 69: case 73: case 79: case 85: case 97: case 101: case 105: case 111: case 117: //u e o a i ---nguyen am--- 
//		printf("Ky tu %c la nguyen am!\n", c);
//		break;
//	default:
//		printf("Ky tu %c la phu am!\n", c);
//		break;
//	}
//	if (c >= 65 && c <= 90) {
//		printf("Ky tu %c la chu in Hoa!\n", c);
//	}
//	else if(c >= 97 && c <= 121)
//	{
//		printf("Ky tu %c la chu in thuong!\n", c);
//	}
//}
//void voice_number() {
//	int n;
//	printf_s("Nhap so nguyen n: ");
//	scanf_s("%d", &n);
//	int a = n / 100;			//tram: chia 100 lay nguyen
//	int b = (n % 100) / 10;		//chuc: chia 100 lay du sau do chia 10 lay phan nguyen
//	int c = (n % 100) % 10;		//dvi: chia 100 lay du sau do chia 10 lay du
//	if (n < 0 && n > 999) {
//		printf_s("Nhap so nguyen n tu 0 den 999!");
//	}
//	else
//	{
//		switch (a)
//		{
//		case 1: printf("mot tram ");	break;
//		case 2: printf("hai tram ");	break;
//		case 3: printf("ba tram ");		break;
//		case 4: printf("bon tram ");	break;
//		case 5: printf("nam tram ");	break;
//		case 6: printf("sau tram ");	break;
//		case 7: printf("bay tram ");	break;
//		case 8: printf("tam tram ");	break;
//		case 9: printf("chin tram ");	break;
//		}
//		switch (b)
//		{
//		case 0: printf("linh ");		break;
//		case 1: printf("muoi ");		break;
//		case 2: printf("hai muoi ");	break;
//		case 3: printf("ba muoi ");		break;
//		case 4: printf("bon muoi ");	break;
//		case 5: printf("nam muoi ");	break;
//		case 6: printf("sau muoi ");	break;
//		case 7: printf("bay muoi ");	break;
//		case 8: printf("tam muoi ");	break;
//		case 9: printf("chin muoi ");	break;
//		}
//		switch (c)
//		{
//		case 1: printf("mot");			break;
//		case 2: printf("hai");			break;
//		case 3: printf("ba");			break;
//		case 4: printf("bon");			break;
//		case 5: printf("nam");			break;
//		case 6: printf("sau");			break;
//		case 7: printf("bay");			break;
//		case 8: printf("tam");			break;
//		case 9: printf("chin");			break;
//		}
//	}
//}
//void caculator() {
//	int a, b;
//	char op;
//	printf("Nhap vao 2 so a va b: ");
//	scanf_s("%d %d", &a, &b);
//	printf("Nhap vao phep tinh: ");
//	scanf_s(" %c", &op);
//	if (op == '+') {
//		printf_s("Tong cua 2 so a va b = %d", a + b);
//	}
//	if (op == '-') {
//		printf_s("Hieu cua 2 so a va b = %d", a - b);
//	}
//	if (op == '*') {
//		printf_s("Tich cua 2 so a va b = %d", a * b);
//	}
//	if (op == '/') {
//		printf_s("Thuong cua 2 so a va b = %lf", a*1.0 / b);
//	}	
//}
//void postage_phone() {
//	int n;
//	int Mand_fare = 25000;
//	printf("Nhap so phut goi: ");
//	scanf_s("%d", &n);
//	if (n > 0 && n <= 50) {
//		printf("Tong so tien can phai tra: %d", (600 * n) + Mand_fare);
//	}
//	if (n > 50 && n <= 200) {
//		printf("Tong so tien can phai tra: %d", ((600 * 50) + (400 * (n - 50))) + Mand_fare);
//	}
//	if (n > 200 ) {
//		printf("Tong so tien can phai tra: %d", ((600 * 50) + (400 * 150) + (200 * (n - 200))) + Mand_fare);
//	}
//}
//void avg_mark() {
//	double a, b, c, avg;
//	printf("Nhap diem Toan Van Anh: ");
//	scanf_s(" %lf %lf %lf", &a, &b, &c);
//	avg = (a + b + c) / 3;
//	if (a < 0 || b < 0 || c < 0 || a > 10 || b > 10 || c > 10) {
//		printf("Nhap khong dung gia tri diem!");
//	}
//	else if (avg < 5) {
//		printf("Diem trung binh la: %.2lf ---Xep loai TB", avg);
//	}
//	else if (avg >= 5 && avg < 6) {
//		printf("Diem trung binh la: %.2lf ---Xep loai TB Kha", avg);
//	}
//	else if (avg >= 6 && avg < 7.5) {
//		printf("Diem trung binh la: %.2lf ---Xep loai Kha", avg);
//	}
//	else if (avg >= 7.5 && avg < 9) {
//		printf("Diem trung binh la: %.2lf ---Xep loai Kha Gioi", avg);
//	}
//	else {
//		printf("Diem trung binh la: %.2lf ---Xep loai Gioi", avg);
//	}
//}
//void commission(){
//	double bonus = 0;
//	double total = 0;
//	printf("Nhap doanh thu: ");
//	scanf_s("%lf", &total);
//	bonus = total <= 100 ? total * 0.05 : total <= 300 ? total * 0.1 : total > 300 ? total * 0.2 : 0;
//	printf("So hoa hong la: %lf %", bonus);
//}
//void print_num() {
//	int n; 
//	printf("Nhap so n: ");
//	scanf_s("%d", &n);
//	if (n < 0) {
//		printf("Nhap n la nguyen duong!");
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++) {
//			printf("%d ", i);
//		}
//	}
//}
//void print_evennum() {
//	int n;
//	printf("Nhap so n: ");
//	scanf_s("%d", &n);
//	if (n < 0) {
//		printf("Nhap n la nguyen duong!");
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++) {
//			if(i % 2 == 0)
//			printf("%d ", i);
//		}
//	}
//}
//void sum_divi() {
//	int a = 3;
//	int n = 10;
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		if (i % a == 0) {
//			printf("%d ", i);
//			sum += i;
//		}
//		if (i == n) {
//			printf("\n");
//		}
//	}
//	printf("Tong cac so chia het cho a = %d", sum);
//}
//void rectangle() {
//	int n = 5;
//	for (int i = 1; i <= 2 * n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("* ");
//			if (j == n) {
//				printf("\n");
//			}
//		}
//	}
//}
//void Triangle_right_angle() {
//	int n = 5;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//}
//void count_num() {
//	int n, count = 0;
//	printf("Nhap so nguyen n: ");
//	scanf_s("%d", &n);
//	for (int i = n; i != 0; i = i / 10) {
//		count++;
//	} 
//	printf("n co so chu so la: %d ", count);
//}
//void print_sumnum() {
//	int n, sum = 0, count = 0, du = 0;
//	printf("Nhap so nguyen n: ");
//	scanf_s("%d", &n);
//	for (int i = n; i != 0; i /= 10) {
//		du = i % 10;
//		printf("%d ", du);
//		sum += du;
//	}
//	printf("Tong cac chu so cua n = %d", sum);
//}
//void print_straight_star() {
//	int n;
//	printf("Nhap n: ");
//	scanf_s("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		printf("*");
//	}
//}
//void even_of_arr(){
//	int a, b;
//	printf("Nhap doan [a, b]: ");
//	scanf_s("%d%d", &a, &b);
//	for (int i = a; i <= b; i++) {
//		if(i % 2 == 0) {
//			printf("%d ", i);
//		}
//	}
//}
//void rectangle_blank() {
//	int m = 4, n = 7;
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i == 1 || i == m || j == 1 || j == n) {
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}
//void fibonaci() {
//	int n;
//	int count = 0;
//	printf("Nhap so nguyen n: ");
//	scanf_s("%d", &n);
//	/*if(n < 2) {
//		printf("Nhap n la so nguyen duong > 2!");
//	}*/
//
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			count++;
//		}
//	}
//	if (count >= 1) {
//		printf("So n khong phai so nguyen to");
//	}
//	else {
//		printf("So n la so nguyen to");
//	}
//}
//void inverse_fibonaci() {
//	int n;
//	double sum = 0;
//	int count = 0;
//	printf("Nhap so nguyen n: ");
//	scanf_s("%d", &n);
//	printf("Cac so nguyen to nghich dao tu 0 - %d la: \t", n);
//	for (int i = 2; i <= n; i++) {
//		count = 0;
//		for (int j = 2; j <= i/2; j++) {
//			if (i % j == 0) {
//				count += 1;
//				break;
//			}
//		}
//		if (count == 0) {
//			printf("1/%d\t", i);
//			sum += 1.0 / i;
//		}
//	}	
//	printf("\nTong cac so nguyen to nghich dao 0 - %d la: \t%.2lf", n, sum);
//}
//void sum_factorial() {
//	int n = 20;
//	double sum = 0;
//	for (int i = 1; i <= (n/2); i++) {
//		sum = sum + (1.0 /( 2* i ));
//	}
//	printf("Tong cua day nghich dao giai thua chan la: %lf", sum);
//}
//void num_toascii() {
//		int n;
//		printf("\nNhap so nguyen n: ");
//		scanf_s("%d", &n);
//
//		printf("\nSo %d trong bang ASC II la: %c", n, n);
//}
//void ucln() {
//	int a, b;
//	int sum = 0;
//	printf("Nhap a, b: ");
//	scanf_s("%d %d", &a, &b);
//	if (a == 0 || b == 0) {
//		sum = a + b;
//	}
//	while (a != b) {
//		if (a > b) {
//			a -= b; // a = a - b
//		}
//		else {
//			b -= a; // b = b - a 
//		}
//	}
//	printf("UCLN la %d", a);
//}
//void bcnn() {
//	int a, b;
//	int multi = 0, ucln = 0, sum = 0;
//	printf("Nhap a, b: ");
//	scanf_s("%d %d", &a, &b);
//	multi = a * b;
//	if (a == 0 || b == 0) {
//		sum = a + b;
//	}
//	while (a != b) {
//		if (a > b) {
//			a -= b; // a = a - b
//		}
//		else {
//			b -= a;
//		}
//	}
//	ucln = a;
//	printf("BCNN la %d", multi / ucln);
//}
//void time() {
//	int h = 23, m = 59, s = 59;
//	for (int i = 0; i <= h; i++) {
//		for (int j = 0; j <= m; j++) {
//			for (int k = 0; k <= s; k++) {
//				printf("%d:%d:%d\n", i, j, k);
//			}
//		}
//	}
//}
//void money() {
//	int count = 0;
//	for (int i = 0; i <= 200; i++) {
//		for (int j = 0; j <= 100; j++) {
//			for (int k = 0; k <= 40; k++) {
//				if ((i * 1000) + (j * 2000) + (k * 5000) == 200000) {
//					printf("Can %d to 1000, %d to 2000 va %d to 5000\n", i, j, k);
//					count++;
//				}
//			}
//		}
//	}
//	printf("\nCo tong %d cach!", count);
//}
//void synthetic_first() {
//	int a, b;
//	int check = 0 ,sum = 0;
//	printf("Nhap 2 so a, b: ");
//	scanf_s("%d %d", &a, &b);
//	int tmp = a;
//	int tmp2 = b;
//	//Tim cac boi so
//	printf("1. Cac boi so cua 5 trong [%d, %d]: ", a, b);
//	for (int i = a; i <= b; i++) {
//		if (i % 5 == 0) {
//			printf("%d ", i);
//		}
//	}
//	//cac so nguyen to trong [a, b]
//	printf("\n2. Cac so nguyen to trong (%d, %d) la: ", a, b);
//	for (int i = 3; i <= b; i++) {
//		check = 0;
//		for (int j = 2; j <= i / 2; j++) {
//			if (i % j == 0) {
//				check = 1;
//				break;
//			}
//		}
//		if (check == 0) {
//			printf("%d ", i);
//		}
//	}
//	//a b co la 2 so nguyen to cung nhau khong
//	while (a != b) {
//		if (a > b) {
//			a -= b; // a = a - b
//		}
//		else {
//			b -= a;
//		}
//	}
//	if (a == 1) {
//		printf("\n3. %d va %d la hai so nguyen to cung nhau.", tmp, tmp2);
//	}else
//		printf("\n3. %d va %d khong phai la hai so nguyen to cung nhau.", tmp, tmp2);
//
//	//check so ban be
//	for (int i = 1; i <= tmp/2; i++) {
//		if (tmp % i == 0) {
//			sum += i;
//		}
//	}
//	if (sum == tmp2) {
//		printf("\n4. YES");
//	}
//	else
//	{
//		printf("\n4. NO");
//	}
//}
//void synthetic_second() {
//	int n;
//	int sum = 0;
//	printf("Nhap N: ");
//	scanf_s("%d", &n);
//	printf("N: %d", n);
//	// Cac so le tu [1, n]
//	printf("\nCac so le tu 1 den %d la: ", n);
//	for (int i = 1; i <= n; i++) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//			sum += i;
//		}
//	}
//	printf("\nTong cac so le tu 1 den %d la: %d", n, sum);
//	//Tong S co chia het 3 khong
//	if (sum % 3 == 0) {
//		printf("\n%d / 3 = %.0lf", sum, sum * 1.0 / 3);
//	}
//	else
//	{
//		printf("\n%d", sum - 10);
//	}
//}
//void main() {
//	int a, b, c, n, sum, check, count;
//	char op;
//	double avg, bonus, total;
//	/*ptb2();*/
//	/*chia3chia5();*/
//	/*even_odd();*/
//	/*nam_nhuan();*/
//	/*tamgiac();*/
//	/*ascii();*/
//	/*voice_number();*/
//	/*caculator();*/
//	/*postage_phone();*/
//	/*avg_mark();*/
//	/*commission();*/
//	/*fibonaci();*/
//	/*print_num();*/
//	/*print_evennum();*/
//	/*sum_divi();*/
//	/*rectangle();*/
//	/*Triangle_right_angle();*/
//	/*count_num();*/
//	/*print_sumnum();*/
//	/*print_straight_star();*/
//	/*even_of_arr();*/
//	/*rectangle_blank();*/
//	/*inverse_fibonaci();*/
//	/*sum_factorial();*/
//	/*num_toascii();*/
//	/*ucln();*/
//	/*bcnn();*/
//	/*time();*/
//	/*money();*/
//	/*synthetic_first();*/
//	/*synthetic_second();*/
//	_getch;
//}