//#include <iostream>
//
//using namespace std;
//
//int main() {
//	cout << "Hello World!\n" << endl;
//
//	system("pause");
//
//	return 0;
//}



//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a = 10;
//	cout << "a = " << a << endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int day = 7;
//	cout << "一个星期有" << day << "天" << endl;
//	system("pause");
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	cout << sizeof(short) << endl;
//	cout << sizeof(int) << endl;
//	cout << sizeof(long) << endl;
//	cout << sizeof(long long) << endl;
//	//system("pause");
//	return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string arr = "abcdefg";
//	cin >> arr;
//	cout << arr << endl;
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a = 10;
//	cout << a / 2.1 << endl;
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int score = 0;
//	cout << "请输入你的高考分数" << endl;
//	cin >> score;
//	if (score > 600) {
//		cout << "很不错，你可以上211了" << endl;
//	}
//	else {
//		cout << "回家养猪去吧" << endl;
//	}
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int a = 0, b = 0, c = 0;
//	cin >> a >> b >> c;
//	int max = 0;
//	if (a > b) {
//		max = a;
//	}
//	else {
//		max = b;
//	}
//	if (c > max) {
//		cout << "最大的数是c" << endl;
//	}
//	else if (max == b) {
//		cout << "最大的数是b" << endl;
//	}
//	else if (max == a) {
//		cout << "最大的数是a" << endl;
//	}
//	return 0;
//}


//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//	srand((unsigned int)time(NULL));
//	int num = rand() % 100 + 1;
//	int input = 0;
//	while (1) {
//		cout << "请猜一个1到100的数字" << endl;
//		cin >> input;
//		if (input == num) {
//			cout << "恭喜你猜中了" << endl;
//			break;
//		}
//		else if (input < num) {
//			cout << "比这个数大" << endl;
//		}
//		else {
//			cout << "比这个数小" << endl;
//		}
//	}
//	return 0;
//}


//#include <iostream>
//#include <ctime>
//#include <string>
//
//using namespace std;
//
//int main() {
//	srand((unsigned int)time(NULL));
//	string dick[4] = { "大", "小", "小", "小" };
//	cout << "Ian的弔很" << dick[rand() % 4] << endl;
//	return 0;
//}