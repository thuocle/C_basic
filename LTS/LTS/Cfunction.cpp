//#include <stdio.h>
//#include <math.h>
//#include <conio.h>
//#include <ctype.h>
//#include <stdio.h>
//#include <stdbool.h>
//#include <string.h>
//#include <iostream>
//int multiplicationTwoNum(int a, int b);
//void nhapMang(int arr[], int n);
//void xuatMang(int arr[] , int n);
//int squareNumber(int num);
//int getFirstElement(int arr[], int n, int x);
//int getUCLN(int a, int b);
//void print_multi_table(int n);
//int isPrime(int n);
//void printPrimeOfArr(int arr[], int n);
//int printUCLNOfArr(int arr[], int n);
//int strLength(char s[]);
//
//int multiplicationTwoNum(int a, int b) {
//	return a * b;
//}
////nhap xuat mang
//void nhapMang(int arr[], int n){
//	for (int i = 0;i < n;i++) {
//		printf("\narr[%d] = ", i);
//		scanf_s("%d", &arr[i]);
//	}
//}
//void xuatMang(int arr[], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void nhapMangThuc(double arr3[], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("\narr3[%d] = ", i);
//		scanf_s("%lf", &arr3[i]);
//	}
//}
//void xuatMangThuc(double arr3[], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("%.2lf ", arr3[i]);
//	}
//}
//void nhapMangChuoi(char s[]) {
//	printf("Nhap chuoi s: ");
//	fgets(s, 100, stdin);
//}
//void xuatMangChuoi(char s[]) {
//	printf("Chuoi vua nhap: %s", s);
//}
//// kiem tra so chinh phuong
//int isSquareNumber(int num)		
//{
//	if (sqrt(num) == (int)sqrt(num)&& sqrt(num)>1) {
//		return 1;
//	}
//	return 0;
//}
//// tim so x vi tri dau tien
//int getFirstElement(int arr[], int n, int x) {
//	for (int i = 0;i < n;i++) {
//		if (x == arr[i]) {
//			printf("Phan tu %d xuat hien dau tien o vi tri %d", x, i);
//			return 1;
//			break;
//		}
//	}
//	printf("Khong tim thay %d", x);
//	return 0;
//}
//// tim uoc chung lon nhat a b
//int getUCLN(int a, int b) {
//	int x = a, y = b;
//	if (x == 1 || y == 1) {
//		return 1;
//	}else if (x == y || x % y == 0) {
//		return y;
//	}
//	else
//	{
//		while (x != y) {
//			x > y ? x -= b : y -= x;
//		}
//	}
//	return x;
//}
//// in bang cuu chuong
//void print_multi_table(int n) {
//	printf("----Bang nhan %d ----", n);
//	for (int i = 1;i <= 10;i++) {
//		printf("\n%d x %d = %d", n, i, n * i);
//	}
//	printf("\n");
//}
//void printAll() {
//	for (int i = 1;i <= 9;i++) {
//		print_multi_table(i);
//	}
//}
////ham tinh giai thua
//int giaiThua(int n) 
//{
//	int res = 1;
//	for (int i = 1;i <= n;i++) {
//		res *= i;
//	}
//	return res;
//}
//double sumGiaithua(int n) {
//	double sum = 0;
//	for (int i = 1;i <= n;i++) {
//		sum += (1*1.0)/giaiThua(i);
//	}
//	return sum;
//}
////in ra so nguyen to
//int isPrime(int n) {
//	if (n == 2) return 1;
//	else if(n < 2)
//	{
//		return 0;
//	}
//	else {
//		for (int i = 2;i <= (n / 2);i++) {
//			if (n % i == 0) {
//				return 0;
//				break;
//			}
//		}
//		return 1;
//	}
//}
//void printPrimeOfArr(int arr[], int n) {
//	int count = 0;
//	for (int i = 0;i < n;i++) {
//		if (isPrime(arr[i]) == 1) {
//			count++;
//			printf("%d ", arr[i]);
//		}
//	}
//	if (count == 0) {
//		printf("\nMang khong co so nguyen to nao!");
//	}
//}
////UCLN cua tat ca phan tu trong mang
//int printUCLNOfArr(int arr[], int n) {
//	printf("\nCac UCLN cua cac phan tu trong mang la: ");
//	int ucln = arr[0];
//	for (int i = 0;i < n;i++) 
//		ucln = getUCLN(ucln, arr[i]);
//	return ucln;
//}
////tim so fibonaci thu n
//int getFibo(int n) {
//	if (n == 1 || n == 2) return 1;
//	return getFibo(n - 2) + getFibo(n - 1);
//}
////tinh giai thua
////khong de quy
////giai thua de quy
//int giaiThuaDeQuy(int n) {
//	if (n == 1) return 1;
//	return n * giaiThuaDeQuy(n - 1);
//}
////in cac cap so chan lien ke
//void print_EvenNear(int arr[], int n) {
//	for (int i = 0;i < n-1;i++) {
//		if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0) {
//			printf("(%d, %d) ", arr[i], arr[i+1]);
//		}
//	}
//}
////in tam giac ky tu
//void print_star(int n) {
//	for (int i = 0; i < n; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//void printAllStar(int n) {
//	if (n % 2 != 0) {
//		for (int i = 1; i <= n; i += 2)
//		{
//			print_star(i);
//		}
//	}
//}
////Sap xep mang
//void sortArr(int arr[], int n) {
//	int tmp = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[i] > arr[j]) {
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//// in cac cap so lien ke theo dieu kien
//void print_NumNear(int arr[], int n) {
//	for (int i = 0;i < n - 1;i++) {
//		if (arr[i] <= arr[i + 1]) {
//			printf("(%d, %d) ", arr[i], arr[i + 1]);
//		}
//	}
//}
//////Nhập mảng A hai chiều các số nguyên N, M, số các chiều và N,M<100)
////void NhapMang_matrix(int a[100][100], int n, int m);
//////Tính tổng N số nguyên liên tiếp(từ 1 đến N)
////int sumAB(int n);
//////Kiểm tra một số nguyên là chẵn hay lẻ
////bool checkEvenOdd(int n);
//////Hoán vị hai số thực
////void swapAB(double &a, double &b);
//////Kiểm tra một số nguyên có phải số chính phương hay không
////bool isChinhPhuong(int n);
//////Tìm và trả về diện tích hình chữ nhật 
////double dienTichHCN(double a, double b);
//////Tìm giá trị lớn nhất và nhỏ nhất trong mảng số nguyên có n phần từ
////void getMin(int arr[], int n);
////void getMax(int arr[], int n);
//////Tìm và trả vể giá trị nhỏ nhất của ba số nguyên
////int getMinOfthree(int a, int b, int c);
//////In ra mảng gồm N phần tử nguyên
////void print_arr(int arr[], int n);
//////Nhập vào một số nguyên N và kiểm tra N là chẵn hay là lẻ
////void nhapN(int n);
////bool checkEvenodd(int n);
//////Tìm và trả về các chuỗi có độ dài nhỏ nhất trong N chuỗi
////char min_string(char s[], int n);
//////In ra một chuỗi với chuỗi đó là tham số
////void inChuoi(char s[], int n);
//////Tìm giá trị nhỏ nhất và đếm số phần tử bằng với giá trị nhỏ nhất đó trong N số nguyên.Hàm này trả về giá trị nhỏ nhất.Số phần tử bằng với giá trị nhỏ nhất là tham số đầu vào của hàm
////int getMin(int so);
////void print_min(int n, int so);
//////Nhập vào số nguyên N và kiểm tra số nguyên dương hay âm
////bool checkAmDuong(int so);
//////Tính giai thừa của N
////int tinhGiaiThuaa(int so);
//////Hiển thị tất cả các số nguyên trong mảng số nguyên 1 chiều
////void hienSoNguyen(int arr[], int n);
//////Thay đổi các chữ cái đầu tiên trong chuỗi sang chữ hoa VD : hvit clan->Hvit Clan
////void UperCase(char s[], int n);
//////Sinh một số chẵn ngẫu nhiên trong khoảng 0 - N
////void randomEven(int n);
//////Đếm số nguyên âm trong một chuỗi
////int countAmchuoi(char s[], int n);
//////Đếm số số âm trong mảng số nguyên một chiều
////int countSoAm(int arr[], int n);
//////Giải phương trình bậc hai(ax ^ 2 + bx + c = 0).Hàm có 3 tham số là các hệ số của phương trình.Kết quả được in ra ngay trong thân hàm
////void gptb2(int a, int b, int c);
//////Nhập mảng A hai chiều NxM các số thực(N <= 50, M <= 60)
////void nhpMang2Chieu(double arr[50][60], int n, int m);
//////Tính tổng mảng N số thực
////double sumArr(double arr[], int n);
//////Kiểm tra một số nguyên có là số nguyên tố hay không
////bool checkNguyenTo(int n);
//////Hoán vị hai số nguyên
////void hoanVi(int& a, int& b);
//////Tìm số lập phương của số nguyên n
////int lapPhuong(int n);
//////Kiểm tra 3 số có phải là 3 cạnh của một tam giác đều hay không
////bool checkTamGiac(double a, double b, double c);
//////Tìm phần tử xuất hiện nhiều nhất trong một mảng số nguyên
////int phanTuNhieu(int arr[], int n, int x);
//////Hiển thị danh sách của n số nguyên chia hết cho 3 và 5
////void dsSo35(int arr[], int n);
//////Tìm và trả về ước chung lớn nhất của 3 số nguyên
////int UCLN3(int a, int b, int c);
//////Tìm và trả về giá trị nhỏ nhất của N số nguyên
////int minNguyen(int arr[], int n);
//////Kiểm tra một số nguyên là số chẵn hay số lẻ
////bool chanLe(int n);
//////In ra N số thực kiểu float
////void printSoThuc(float arr[], int n);
//////Tìm và trả về giá trị lớn nhất của 3 số nguyên
////int maxSo(int a, int b, int c);
//////Nhập vào một số nguyên N và in mảng N số nguyên
////void nhapMg(int arr[], int n);
////void xuatMg(int arr[], int n);
//////Tìm và trả về các chuỗi có độ dài lớn nhất trong N chuỗi
////char maxChuoi(char s[], int n);
//////Kiểm tra số nguyên X có tồn tại trong mảng gồm N số nguyên không
////bool checkX(int arr[], int n, int x);
//////Tính tổng N số thực
////double sumThuc(double arr[], int n);
//////Cắt toàn bộ kí tự trắng ở đầu chuỗi
////char cutChar(char s[], int n);
//////Tính trung bình cộng của các phần tử trong mảng nguyên hai chiều có kích thước MxN
////double sumNguyen(double arr[100][100], int n, int m);
//////Chuyển một số nguyên hệ thập phân sang hệ nhị phân
////int decToBi(int n);
//////Viết hàm in ra N số thực
////void printSoThuc(double arr[], int n);
//////Tính số tiền lãi khi gửi X USD trong N tháng với lãi suất I(i là một số thực)
////double tienLai(int x, int n, double i);
//////Kiểm tra 2 mảng 1 chiều có bằng nhau không
////bool chechHaiMang(double arr[], double arr2[], int n, int m);
//////Chuyển một chuỗi sang số nguyên
////int charToInteger(char s[], int n);
//////Tính trung bình cộng N số thực
////int avgSoThuc(double arr[], int n);
//////Đổi một số nguyên hệ thập phân sang hệ thập lục
////char integerToHex(int n);
//////Tìm số lớn nhất và đếm số các số lớn nhất của n số nguyên
////int maxNguyen(int arr[], int n);
////int demMaxNguyen(int arr[], int n, int x);
//////Nhập vào một số nguyên N và kiểm tra xem N có nằm trong đoạn 1..100 hay không.Nếu nhập đúng trả về 1 ngược lại trả về 0
////bool checkNguyen(int n);
//////Tính chi phí tiền điện theo số KW điện đã tiêu thụ
////double tienDien(double kw);
//////Tách một mảng số nguyên 1 chiều thành 2 mảng số nguyên 1 chiều, một mảng chứa các số chẵn, 1 mảng chứa các số lẻ
////void tachMang(int arr[], int n);
//////Tính tổng giai thừa của tất cả các số trong mảng số nguyên một chiều
////int sumGiaiThua(int arr[], int n);
//////Tìm số nghịch đảo của 1 số thực
////double nghichDao(double n);
//////Nhập mảng số nguyên hai chiều nxn và hiển thị các phần tử trong mảng dưới dạng ma trận(nx100)
////void nhapHaichieu(int arr[][100], int n);
////void hienHaichieu(int arr[][100], int n);
//////Đếm số kí tự viết hoa trong một chuỗi
////int demKyTuHoa(int n, char s[]);
//////Tính tổng các số chẵn trong 1 mảng số nguyên gồm n phần tử
////int sumEven(int arr[], int n);
//////Tìm kí tự xuất hiện nhiều nhất trong n kí tự
////char kyTuNhieu(char s[], int n);
//////Tìm ước chung lớn nhất của tất cả số nguyên trong 1 mảng gồm n phần tử
////int UCLN(int arr[], int n);
//////Biến đổi chuỗi thành chữ hóa từ 1 chuỗi cho trước
////char chuoiUpper(char s[], int n);
//////Tìm độ dài của 1 chuỗi
////int doDaiChuoi(char s[]);
//
//
////tim so nguyen to nho nhat lon hon max cua mang
//int maxOfArr(int arr[], int n) {
//	sortArr(arr, n);
//	return arr[n - 1];
//}
//int primeNear(int arr[], int n) {
//	int x = 0;
//	int tmp = maxOfArr(arr, n);
//	for (int i = tmp;i != 0; i++) {
//		if (isPrime(i) && i > tmp) {
//			return x = i;
//			break;
//		}
//	}
//	return x;
//}
//// xoa cac phan tu trung nhau
//// Xoa phan tu cua mang tai vi tri bat ky
//void deleteOfArr(int arr[], int& n, int vitri) {
//	for (int i = vitri; i < n; i++) {
//		arr[i] = arr[i+1];
//	}
//	n--;// giam 1 phan tu cua mang sau khi xoa; int& n: tham chieu toi &n de thay doi tham chieu tai n 
//}
//// Xoa cac phan tu trung nhau
//void delete_DuplicateArr(int arr[], int& n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (arr[i] == arr[j]) {
//				deleteOfArr(arr, n, j);
//				i--;
//			}
//		}
//	}
//}
////Tim 2 phan tu co gia tri gan nhau nhat trong mang
//double hieuHaiSo(double p, double q) {
//	if (q > p) {
//		return q - p;
//	}
//	else
//	{
//		return false;
//	}
//}
//double minOfArr(double arr3[], int n) {
//	double min = hieuHaiSo(arr3[0], arr3[1]);
//	for (int i = 0;i < n;i++) {
//		double tmp = hieuHaiSo(arr3[i], arr3[i + 1]);
//		if (tmp < min && tmp > 0) {
//			min = tmp;
//		}
//	}
//	return min;
//}
//void getAdjacentRealNum(double arr3[], int n) {
//	for (int i = 0; i < n; i++)
//	{
//		double tmp = hieuHaiSo(arr3[i], arr3[i + 1]);
//		if (tmp == minOfArr(arr3, n)) {
//			printf("(%.1lf, %.1lf) ", arr3[i], arr3[i+1]);
//		}
//	}
//}

////Hàm tính tổng các số được hình thành trong mảng: vd: s[]={a, b, 1, 2, c,d, 5, 6,h, f, g,7,8,}; 12 + 56 + 78 = sum
// //// tinh do dai của chuoi s[];
//// khoi tao chuoi s1
//int strLength(char s[]) {
//	int i = 0, length = 0;
//	while (s[i] != '\0') {
//		length = i;
//		i++;
//	}
//	return length;
//}
//bool isNumber(char c);
//bool isNumber(char c) {
//	return (c >= '0' && c <= '9');  // xet bang ma ascii
//}
//int ghepNum(int socu, char kt) {
//	return socu = socu * 10 + (kt - '0');
//}
//int sumMatchNum(char *s) {
//	int n = strLength(s), sum = 0, num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (isNumber(s[i])) {
//			num = ghepNum(num, s[i]);
//		}
//		else
//		{
//			sum += num;
//			num = 0;
//		}
//	}
//	return sum;
//}
//// Bai Tong hop
//// tim min 3 so
//int minOf3Num(int a, int b, int c) {
//	int min = 0;
//	if (a < b && a < c) {
//		return min = a;
//	}
//	else if( b < a && b < c)
//	{
//		return min = b;
//	}
//	else
//	{
//		return min = c;
//	}
//	return min;
//}
//// kiem tra min co phai fibo
//bool checkFibo(int n) {
//	
//	for (int i = 1;getFibo(i)<= n;i++) {
//		if (n == getFibo(i)) {
//			return true;
//			break;
//		}
//	}
//	return false;
//}
////doi 1 so thanh binary luu cac so 0, 1 vao mang
//void decimalToBinary(int arr[], int& n, int num)
//{
//	int x = num;
//	for (int i = 0;pow(2, i - 1) <= num;i++) {
//		arr[i] = x % 2;
//		x /= 2;
//		n = i;//dem so pt cua mang
//	}
//	//dao mang sau khi co
//	for (int i = 0; i < n/2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - i - 1] = tmp;
//	}
//}
////tim pt xuat hien nhieu nhat
//void getNumAppearMostArr(int arr[],int n) {
//	int count = 0, count2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == 0) {
//			count++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	if (count > count2) {
//		printf("\nPhan tu xuat hien nhieu nhat la: 0 voi %d lan", count);
//	}
//	else
//	{
//		printf("\nPhan tu xuat hien nhieu nhat la: 1 voi %d lan", count2);
//
//	}
//}
//// Last Cfuntion
////# B1
////- Khai báo biến a kiểu số nguyên, được gán giá trị 10
////- Khai báo biến b kiểu số thực có độ chính xác kép, được gán giá trị 100.5E+2
////- Khai báo biến c kiểu ký tự được gán giá trị 'x'
////- In các biến a, b, c ra ngoài màn hình, mỗi biến trên một dòng
//void B1(int a, double b, char c) {
//	
//	printf("%d\n%lf\n%c", a, b, c);
//}
////#B2
////- Khai báo mảng số nguyên 10 phần tử, được gán sẵn các giá trị trong đó.
////
////- In các phần tử trong mảng
////
////- In các phần tử chẵn trong mảng
////
////- In các phần tử chia hết cho 3 hoặc cho 5
//void B2_1(int arr[], int n) {
//	for (int i = 0;i < n;i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void B2_2(int arr[], int n) {
//	for (int i = 0;i < n;i++) {
//		if (arr[i] % 2 == 0) {
//			printf("%d ", arr[i]);
//		}
//	}
//}
//void B2_3(int arr[], int n) {
//	for (int i = 0;i < n;i++) {
//		if (arr[i] % 3 == 0 || arr[i] % 5 == 0) {
//			printf("%d ", arr[i]);
//		}
//	}
//}
////B3
////1. Hàm in một mảng số thực có N phần tử
//void inMangThuc(double arr[], int n);
////2. Hàm tính căn bậc hai của tổng N phần tử
//double sqrtOfSum(int arr[], int n);
////3. Hàm hoán đổi giá trị của hai biến ký tự x và y cho nhau
//void hoanVi(int& x, int& y);
////4. Tính tổng của mảng số nguyên A có N phần tử và mảng số thực B có M phần tử
//int sumA(int arr[], int n);
//double sumB(int arr[], int m);
//
////5. Tính căn bậc x của n
//double sqrtOfNum(int n);
////6. Kiểm tra một số nguyên là dương hay âm
//bool checkNum(int n);
////7. Tìm số bé nhất trong một mảng số thực
//int minArr(double arr[], int n);
////8. Tìm vị trí số x trong mảng số nguyên n phần tử(Lấy vị trí đầu tiên xuất hiện nếu các phần tử trùng nhau).Nếu không tìm thấy thì hiển thị Not Found!
//int timX(int arr[], int n, int x);
////B3
////Viết chương trình nhập vào mảng số nguyên dương gồm N phần tử.Hãy tính tổng các số đối xứng trong mảng.Biết rằng số đối xứng là số viết xuôi hay ngược vẫn là chính nó.
//bool getSoDoiXung(int n) {
//	int numdao = 0, rem;//numdao so dao nguoc, rem so du
//	int tmp = n;
//	while (tmp != 0)
//	{
//		// Lấy chữ số cuối của số nguyên sử dụng toán tử chia lấy dư (Modulus)
//		rem = tmp % 10;
//
//		// Nhân số đảo với 10 và cộng với chữ số cuối
//		numdao = (numdao * 10) + rem;
//
//		// Xóa chữ số cuối bằng cách sử dụng toán tử chia lấy phần nguyên (Division)
//		tmp = tmp / 10;
//	}
//	if (numdao == n) {
//		return true;
//	}
//	return false;
//}
//
//int sumNumDoiXung(int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (getSoDoiXung(arr[i]) == true) {
//			sum += arr[i];
//		}
//	}
//	return sum;
//}
////Ví dụ : 11, 121…
////
////Chương trình bắt buộc chia thành tối thiểu 3 hàm như sau :
////
////-Hàm nhập liệu
////
////- Hàm hiển thị kết quả
////
////- Hàm xử lý(Lưu ý chia nhỏ các công việc trong cần xử lý thành các hàm con nếu có thể)
//void main() {
//	int num, n, x, a, b, so, c, decimalnum;
//	long binarynum;
//	int arr[100];
//	//n = 10;
//	//printf("Cac phan tu cua mang la: ");
//	//B2_1(arr, n);
//	//printf("\nCac phan tu chan cua mang la: ");
//	//B2_2(arr, n);
//	//printf("\nCac phan tu chia het cho 3 va 5 cua mang la: ");
//	//B2_3(arr, n);
//	printf("\nNhap n phan tu: ");
//	scanf_s("%d", &n);
//	while (n < 0 || n>100) {
//		printf("\nKhong hop le, nhap lai: ");
//		scanf_s("%d", &n);
//	}
//	nhapMang(arr, n);
//	printf("\nTong cac so doi xung la: %d", sumNumDoiXung(arr, n));
//	int arr2[100];
//	double arr3[100];
//	char s[100];
//	//printf("Nhap so a: ");
//	//scanf_s("%d", &a);
//	//printf("\nNhap so b: ");
//	//scanf_s("%d", &b);
//	//printf("\nNhap so c: ");
//	//scanf_s("%d", &c);
//	/*printf("Nhap so nguyen n: ");
//	scanf_s("%d", &n);*/
//	
//	/*printf("\nNhap mang: ");
//	nhapMang(arr, n);
//	printf("\nXuat mang: ");
//	xuatMang(arr, n);*/
//
//	/*printf("\nNhap phan tu can tim: ");
//	scanf_s("%d", &x);
//	getFirstElement(arr, n, x);*/
//
//	/*printf("Nhap vao mot so: ");
//	scanf_s("%d", &num);
//	if (isSquareNumber(num)) {
//		printf("Day la so chinh phuong.");
//	}
//	else
//	{
//		printf("Day khong phai so chinh phuong.");
//	}*/
//
//	//int result = getUCLN(a, b);
//	//printf("\nUCLN cua %d va %d la %d", a, b, result);
//	//print_multi_table(n);
//	//printAll();
//	//int result = giaiThua(n);
//	////printf("%d! = %d ", n, result);
//	//double resul = sumGiaithua(n);
//	//printf("Tong nghich dao cua 1! den %d! la %lf ", n,resul);
//	//printf("\nCac so nguyen to trong mang la:");
//	//printPrimeOfArr(arr, n);
//	//printUCLNOfArr(arr, 3);
//	//printf("So fibonaci thu %d la %d", n, getFibo(n));
//	//printf("Giai thua cua %d la %d ", n, giaiThuaDeQuy(n));
//	/*printf("\nCac cap so chan lien ke la:");
//	print_EvenNear(arr, n);*/
//	//printAllStar(n);
//	//sortArr(arr, n);
//	//printf("\nXuat mang: ");
//	//xuatMang(arr, n);
//	//print_NumNear(arr, n);
//	/*int max = maxOfArr(arr, n);
//	printf("\nMax = %d", max);
//	int snt = primeNear(arr, n);
//	printf("\nSO nguyen to be nhat lon hon max la: %d", snt);*/
//	/*delete_DuplicateArr(arr, n);
//	printf("\nMang sau khi xoa phan tu trung nhau: ");
//	xuatMang(arr, n);*/
//	//printf("\nNhap mang: ");
//	//nhapMangThuc(arr3, n);
//	//printf("\nXuat mang: ");
//	//xuatMangThuc(arr3, n);
//	//minOfArr(arr3, n);
//	//printf("\nCac cap so thuc co gia tri gan nhau: ");
//	//getAdjacentRealNum(arr3, n);
//	//printf("\n%lf", minOfArr(arr3, n));
//	/*nhapMangChuoi(s);
//	xuatMangChuoi(s);
//	printf("\nTong cac so trong chuoi la: %d", sumMatchNum(s));*/
//	/*int min = minOf3Num(a, b, c);
//	printf("\nSo nho nhat trong 3 so nguyen: %d",min );
//	if (checkFibo(min) == true) {
//		printf("\nSo %d la so fibonaci\n", min);
//	}
//	else
//	{
//		printf("\nSo %d khong la so fibonaci\n", min);
//	}
//	decimalToBinary(arr, n, min);
//	printf("\nSo %d sang binary: ", min);
//	xuatMang(arr, n);
//	getNumAppearMostArr(arr, n);*/
//	/*int a;
//	double b;
//	char c;
//	a = 10;
//	b = 100.5E+2;
//	c = 'x';
//	B1(a, b, c);*/
//	_getch;
//}
//
