//#include <iostream>
//using namespace std;
//
//void Std() {
//	cout << "hello" << endl;
//}
//
//int main() {
//	Std();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	static int m_A;
//};
//
//int Person::m_A = 10;
//
//void test1() {
//	Person p;
//	cout << p.m_A << endl;
//}
//
//int main() {
//	test1();
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	Person() {
//		m_age = 18;
//		m_sex = "male";
//	}
//	Person operator+(Person& p);
//	int m_age;
//	string m_sex;
//};
//
//Person Person::operator+(Person& p) {
//	Person temp;
//	temp.m_age = this->m_age + p.m_age;
//	temp.m_sex = "male";
//	return temp;
//}
//
//int main() {
//	Person p1;
//	p1.m_age = 10;
//	p1.m_sex = "female";
//	Person p2;
//	p2.m_age = 10;
//	p2.m_sex = "female";
//	Person p3;
//	p3 = p1 + p2;
//	cout << p3.m_age << endl;
//	cout << p3.m_sex << endl;
//	return 0;
//}


////[递减运算符重载]
//#include <iostream>
//using namespace std;
//
//class MyInteger {
//public:
//	friend ostream& operator<<(ostream& cout, const MyInteger& p);
//	MyInteger() {
//		m_Num = 521;
//	}
//	//前置--的重载
//	MyInteger& operator--() {
//		m_Num--;
//		return *this;
//	}
//	//后置--的重载
//	MyInteger operator--(int) {
//		//先要记录原始值
//		MyInteger temp = *this;
//		//再对值进行减1操作
//		m_Num--;
//		//再返回原始值
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, const MyInteger& p) {
//	cout << "m_Num = " << p.m_Num << endl;
//	return cout;
//}
//
//void Print(MyInteger& p) {
//	cout << --p << endl;
//	cout << p-- << endl;
//	cout << p << endl;
//}
//
//int main() {
//	MyInteger p;
//	Print(p);
//	return 0;
//}


////[赋值运算符重载]
//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	friend void test01();
//	Person(int age) {
//		m_Age = new int(age);
//	}
//	~Person() {
//		if (m_Age != nullptr) {
//			delete m_Age;
//			m_Age = nullptr;
//		}
//	}
//	Person& operator=(Person& p) {
//		*m_Age = *p.m_Age;
//		return *this;
//	}
//private:
//	int* m_Age;
//};
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	p2 = p1;
//	cout << *p1.m_Age << endl << *p2.m_Age << endl;
//}
//
//int main() {
//	test01();
//	return 0;
//}


////[关系运算符的重载]
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		m_Age = age;
//		m_Name = name;
//	}
//	bool operator==(Person& p) {
//		if (p.m_Age == m_Age && p.m_Name == m_Name) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//
//private:
//	string m_Name;
//	int m_Age;
//};
//
//void test01() {
//	Person p1("Tom", 18);
//	Person p2("Leny", 18);
//	if (p1 == p2) {
//		cout << "两个人完全相同" << endl;
//	}
//	else {
//		cout << "两个人不同" << endl;
//	}
//}
//
//int main() {
//	test01();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 3;
//	float b = 1.5f;
//	cout << a / b << endl;
//  return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 10;
//	int* b = new int[6];
//	int* c = new int(10);
//	cout << *c << endl;
//  return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 0;
//	cin >> a;
//	int& b = a;
//	cout << b << endl;
//  return 0;
//}



//#include <iostream>
//using namespace std;
//
//int ADD(int a = 0, int b = 0) {
//	return a + b;
//}
//
//void PRINT(int a) {
//	cout << a << endl;
//}
//
//int main() {
//	int a = 0, b = 0;
//	/*cin >> a >> b;*/
//	int ret = ADD();
//	PRINT(ret);
//  return 0;
//}


//#include <iostream>
//using namespace std;
//
//void PRINT(int a) {
//	cout << a << endl;
//}
//
//void PRINT(int b, int) {
//	cout << b + 1 << endl;
//}
//
//int main() {
//	int a = 0;
//	PRINT(a, 10);
//	return 0;
//}


////[初始化列表]
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	Person() :m_Age(18), m_Sex("Male") {};
//	int GetAge() {
//		return m_Age;
//	}
//	string GetSex() {
//		return m_Sex;
//	}
//private:
//	int m_Age;
//	string m_Sex;
//};
//
//int main() {
//	Person p1;
//	int age = p1.GetAge();
//	string sex = p1.GetSex();
//	cout << "age = " << age << endl << "sex = " << sex << endl;
//	return 0;
//}


////[静态成员]
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	static int m_Age;
//	string m_Sex;
//};
//
//int Person::m_Age = 10;
//
//int main() {
//	Person p1;
//	cout << p1.m_Age << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	/*Person AddPerson(Person& p) {
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//	int m_A;
//	int m_B;
//};
//
//Person operator+ (const Person& p1, const Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//int main() {
//	Person p1;
//	p1.m_A = 10, p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10, p2.m_B = 10;
//	Person p3 = p1 + p2;
//	cout << p3.m_A << endl << p3.m_B << endl;
//	return 0;
//}


//#include <iostream>
//#include <cmath>
//#define endl '\n'
//using namespace std;
//
//int Is_prime_number(int n) {
//	for (int i = 2; i < sqrt(n); i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	cout << "请输入一个整数" << endl;
//	int n = 0;
//	cin >> n;
//	int ret = Is_prime_number(n);
//	if (ret == 1) {
//		cout << "该数是个素数" << endl;
//	}
//	else {
//		cout << "该数不是个素数" << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//class Person {
//public:
//	Person(): m_A(10), m_B(10) {}
//	int m_A;
//	int m_B;
//};
//
//Person operator- (const Person& p1, const Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A - p2.m_A;
//	temp.m_B = p1.m_B - p2.m_B;
//	return temp;
//}
//
//int main() {
//	Person p1, p2;
//	Person p3 = p1 - p2;
//	cout << p3.m_A << endl << p3.m_B;
//	return 0;
//}


//#include <iostream>
//#define endl '\n'
//using namespace std;
//
//class Person {
//public:
//	Person(): m_A(10), m_B(10) {}
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<<(ostream& out, Person& p) {
//	out << p.m_A << " " << p.m_B << " ";
//	return out;
//}
//
//int main() {
//	Person p1, p2, p3;
//	cout << p1 << p2 << p3;
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//class FountainPen {
//public:
//	string m_Material;
//	int m_Length;
//	int m_Weight;
//};
//
//class SailorPen : public FountainPen {
//public:
//	SailorPen() {
//		m_Length = 15;
//		m_Material = "Resin";
//		m_Weight = 20;
//	}
//};
//
//int main() {
//	SailorPen moon;
//	cout << moon.m_Length << " " << moon.m_Material << " " << moon.m_Weight << endl;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void MyPrint(int val) {
//	cout << val << endl;
//}
//
//void test() {
//	//创建容器
//	vector<int> a;
//	//存入数据
//	for (int i = 1; i <= 4; i++) {
//		a.push_back(i * 10);
//	}
//	vector<int>::iterator it_begin = a.begin();
//	vector<int>::iterator it_end = a.end();
//	for_each(a.begin(), a.end(), MyPrint);
//}
//
//int main() {
//	test();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "Hello World!" << endl;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test() {
//	vector<int> a;
//	for (int i = 1; i <= 4; i++) {
//		a.push_back(i * 10);
//	}
//	vector<int>::iterator it_begin = a.begin();
//	vector<int>::iterator it_end = a.end();
//	while (it_begin != it_end) {
//		cout << *it_begin << endl;
//		it_begin++;
//	}
//}
//
//int main() {
//	test();
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test() {
//	vector<int> a;
//	for (int i = 1; i <= 4; i++) {
//		a.push_back(i * 10);
//	}
//	for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
//		cout << *it << endl;
//	}
//}
//
//int main() {
//	test();
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	Person() : m_A(10), m_B(10) {}
//	int m_A;
//	int m_B;
//};
//
//ostream& operator<< (ostream& out, Person& p) {
//	cout << p.m_A << " " << p.m_B << " ";
//	return out;
//}
//
//int main() {
//	Person p1, p2;
//	p2.m_A += 10, p2.m_B += 10;
//	cout << p1 << p2;
//	return 0;
//}


//#include <iostream>
//#include <vector>
//using namespace std;
//
//void test() {
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	for (int i = 1; i <= 4; i++) {
//		v1.push_back(1 * i);
//		v2.push_back(2 * i);
//		v3.push_back(3 * i);
//		v4.push_back(4 * i);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	test();
//	return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//void test() {
//	string s1;//创造空字符串，调研无参构造函数
//	cout << "s1 = " << s1 << endl;
//	string str = "Long live the people";
//	string s2(str);
//	cout << "s2 = " << s2 << endl;
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//}
//
//int main() {
//	test();
//	return 0;
//}