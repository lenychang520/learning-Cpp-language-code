////[水仙花数]
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
//			cout << "敲桌子" << endl;
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


////[冒泡排序]
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
//#include <ctime>
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
//	for (int i = 0; i < 3; i++) {
//		t[i].name = "Teacher_";
//		t[i].name += arr[i];
//		for (int j = 0; j < 5; j++) {
//			t[i].stu[j].name = "Student_";
//			t[i].stu[j].name += arr[j];
//			t[i].stu[j].score = rand() % 41 + 60;//分数必须是60到100
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
//	srand((unsigned int)time(NULL));
//	Teacher t[3];
//	Initial(t);
//	Print_data(t);
//	return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct character {
//	string name;
//	int age;
//	string sex;
//};
//
//void bubble_sort(character* h, int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (h[j].age > h[j + 1].age) {
//				character temp = h[j];
//				h[j] = h[j + 1];
//				h[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	character hero[5] = { 
//		{"刘备", 23, "男"},
//		{"关羽", 22, "男"},
//		{"张飞", 20, "男"},
//		{"赵云", 21, "男"},
//		{"貂蝉", 19, "女"}
//	};
//	int n = sizeof(hero) / sizeof(hero[0]);
//	bubble_sort(hero, n);
//	for (int i = 0; i < n; i++) {
//		cout << hero[i].name << " " << hero[i].age << " " << hero[i].sex << endl;
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int* p = new int(10);
//	cout << *p << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 0;
//	int& ref = a;
//	ref = 10;
//	cout << a << endl;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//class Student {
//public:
//	string name;
//	long long id;
//};
//
//int main() {
//	Student stu;
//	stu.name = "章志宇", stu.id = 6020252591;
//	cout << stu.name << " " << stu.id << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Cube {
//public:
//	void SetLenth(float a, float b, float c) {
//		side_lenth1 = a;
//		side_lenth2 = b;
//		side_lenth3 = c;
//	}
//	float Volume() {
//		return side_lenth1 * side_lenth2 * side_lenth3;
//	}
//	float Square() {
//		return 2 * (side_lenth1 * side_lenth2 + side_lenth2 * side_lenth3 + side_lenth1 * side_lenth3);
//	}
//	void is_common(Cube& a, Cube& b) {
//		if (a.Square() == b.Square() && a.Volume() == b.Volume()) {
//			cout << "该两个立方体相等" << endl;
//		}
//		else {
//			cout << "该两个立方体不等" << endl;
//		}
//		return;
//	}
//private:
//	float side_lenth1;
//	float side_lenth2;
//	float side_lenth3;
//};
//
//int main() {
//	Cube a;
//	Cube b;
//	cout << "输入第一个立方体三条边的各自的长度" << endl;
//	float s1 = 0.0f, s2 = 0.0f, s3 = 0.0f;
//	cin >> s1 >> s2 >> s3;
//	cout << "输入第二个立方体三条边的各自的长度" << endl;
//	float s_1 = 0.0f, s_2 = 0.0f, s_3 = 0.0f;
//	cin >> s_1 >> s_2 >> s_3;
//	a.SetLenth(s1, s2, s3);
//	b.SetLenth(s_1, s_2, s_3);
//	a.is_common(a, b);
//	return 0;
//}


#include <iostream>
using namespace std;

class Circle {
private:
	float m_R;
public:
	void setR(float r) {
		if (r > 0) {
			m_R = r;
		}
		else {
			cout << "圆的半径必须为正数" << endl;
		}
		return;
	}
	float getR() {
		return m_R;
	}
};

class Point {
private:
	float x, y;
public:
	void set_ordinate(float a, float b) {
		x = a;
		y = b;
		return;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
};

void PrintRelation(float x, float y, float r) {
	if (x * x + y * y > r * r) {
		cout << "点在圆外" << endl;
	}
	else if (x * x + y * y == r * r) {
		cout << "点在圆上" << endl;
	}
	else {
		cout << "点在圆内" << endl;
	}
	return;
}

int main() {
	Circle a;
	Point b;
	float r = 0.0f, x = 0.0f, y = 0.0f;
	cout << "请输入圆的半径" << endl;
	cin >> r;
	a.setR(r);
	cout << "请输入点的横纵坐标" << endl;
	cin >> x >> y;
	b.set_ordinate(x, y);
	PrintRelation(b.getX(), b.getY(), a.getR());
	return 0;
}
