////[Ë®ÏÉ»¨Êý]
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	int n = 100;
//	do {
//		int ge = n % 10;
//		int bai = n / 10 % 10;
//		int qian = n / 100;
//		if (pow(ge, 3) + pow(bai, 3) + pow(qian, 3) == n) {
//			cout << n << endl;
//		}
//		n++;
//	} while (n < 1000);
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	for (int i = 1; i <= 100; i++) {
//		if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
//			cout << "ÇÃ×À×Ó" << endl;
//		}
//		else {
//			cout << i << endl;
//		}
//	}
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int arr[5] = { 300,350,200,400,250 };
//	int max = arr[0];
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//	return 0;
//}


////[Ã°ÅÝÅÅÐò]
//#include <iostream>
//
//using namespace std;
//
//void bubble_sort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, n);
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct Student {
//	string name;
//	int score;
//};
//
//struct Teacher {
//	string name;
//	Student stu[5];
//};
//
//void Initial(Teacher t[]) {
//	string arr = "12345";
//	int score[5] = { 80,81,68,96,85 };
//	for (int i = 0; i < 3; i++) {
//		t[i].name = "Teacher_";
//		t[i].name += arr[i];
//		for (int j = 0; j < 5; j++) {
//			t[i].stu[j].name = "Student_";
//			t[i].stu[j].name += arr[j];
//			t[i].stu[j].score = score[j];
//		}
//	}
//}
//
//void Print_data(Teacher t[]) {
//	for (int i = 0; i < 3; i++) {
//		cout << t[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << t[i].stu[j].name << " " << t[i].stu[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	Teacher t[3];
//	Initial(t);
//	Print_data(t);
//	return 0;
//}