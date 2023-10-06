//#include "iostream"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/10/6 15:50
//* @description:
//*/
//
///**
// * p5
// */
//void demo1() {
//    cout << "input two numbers:" << endl;
//    int num1, num2;
//    cin >> num1 >> num2;
//    cout << "the sum of " << num1 << " and " << num2
//         << " is " << num1 + num2 << endl;
//}
//
///**
// * p9 practice 1.2
// */
//void demo2() {
//    cout << "hello" << " world" << endl;
//    cout << "----------------" << endl;
//
//    int a , b;
//    cout << "input a and b:" << endl;
//    cin >> a >> b;
//    cout << "a * b = " << a * b << endl;
//
//    cout << "-------------------" << endl;
//    int v1 , v2;
//    cout << "input two numbers:" << endl;
//    cin >> v1 >> v2;
//    cout << "the sum of ";
//    cout << v1;
//    cout << " and ";
//    cout << v2;
//    cout << " is ";
//    cout << v1 + v2;
//    cout << endl;
//
//}
//
//
///**
// * p9 practice 1.3
// */
//void demo3() {
//    // wrong note
////    /**
////     * hello/* */
////     *
////     */
//
////    cout << "/*";
////    cout << "*/";
////    cout << /* "*/" */;
////    cout << /* "*/" /* "/*" */;
//
//    string note;
//    cout << "input note: " << endl;
//    getline(cin, note);
//    note = note + "\"";
//    cout << "note = " << note << endl;
//
//}
//
///**
// * p10
// */
//void demo4() {
//    int sum = 0;
//    int value = 0;
//    while (value <= 10) {
//        sum += value;
//        value++;
//    }
//    cout << "sum = " << sum << endl;
//}
//
///**
// * p11 practice 1.4.1
// */
//void prac1_9() {
//    int start = 50;
//    int sum = 0;
//    while (start <= 100) {
//        sum += start;
//        start++;
//    }
//    cout << "sum = " << sum << endl;
//}
//void prac1_10() {
//    int value = 10;
//    while (value >= 0) {
//        cout << value << endl;
//        value--;
//    }
//}
//void prac1_11() {
//    cout << "input two integer: " << endl;
//    int num1, num2;
//    cin >> num1 >> num2;
//    if (num1 > num2) {
//        cout << "first number must be less than second number!" << endl;
//        return;
//    }
//    cout << "the number between number1 and number2 is:" << endl;
//    while (num1 <= num2) {
//        cout << num1 << endl;
//        num1++;
//    }
//}
//void demo5() {
////    prac1_9();
////    prac1_10();
//    prac1_11();
//}
//
///**
// * p12 practice 1.4.2
// */
//void prac1_12() {
//    int sum = 0;
//    for (int i = -100; i <= 100; ++i) {
//        sum += i;
//    }
//    cout << "sum = " << sum << endl;
//}
//void prac1_13() {
//    int sum = 0;
//    for (int i = 50; i <= 100; ++i) {
//        sum += i;
//    }
//    cout << "sum = " << sum << endl;
//
//    cout << "---------------" << endl;
//
//    for (int i = 10; i > -1; i--) {
//        cout << i << endl;
//    }
//
//    cout << "-----------------" << endl;
//
//    cout << "input two numbers: " << endl;
//    int num1, num2;
//    cin >> num1 >> num2;
//    for (int i = num1; i <= num2; ++i) {
//        cout << i << " ";
//    }
//    cout << endl;
//
//}
//void demo6() {
////    prac1_12();
//    prac1_13();
//}
//
//
///**
// * p13
// */
//void demo7() {
//    int sum = 0;
//    int value = 0;
//    while (cin >> value ) {
////        if (value == -1) {
////            break;
////        }
//        sum += value;
//    }
//    cout << "sum = " << sum << endl;
//}
//
///**
// * p15 practice 1.16
// */
//void prac1_16() {
//    int sum = 0;
//    int value;
//    int count = 0;
//    cout << "input a group of number end with -1: " << endl;
//    while (cin >> value) {
//        if (value == -1) {
//            break;
//        }
//        if (2 == value) {
//            count++;
//        }
//        sum += value;
//    }
//    cout << "sum = " << sum << endl;
//    cout << "count = " << count << endl;
//}
//void demo8() {
//
////    prac1_16();
//
//    int currValue = 0, value = 0;
//    if (cin >> currValue) {
//        int cnt = 1;
//        while (cin >> value) {
//
//            if (currValue == value) {
//                cnt++;
//            } else {
//                cout << "the number of " << currValue
//                    << " occurs " << cnt << " times." << endl;
//                currValue = value;
//                cnt = 1;
//            }
//            // 这里打印不出最后的数，程序还是要自己判断结尾
//            if (value == -1) {
//                return;
//            }
//        }
//
//    }
//
//}
//
//
///**
// * p16 prac
// */
//void prac1_19() {
//    cout << "input two numbers: " << endl;
//    int a , b;
//    cin >> a >> b;
//    if (a > b) {
//        swap(a,b);
//    }
//    while (a <= b) {
//        cout << a << endl;
//        a++;
//    }
//}
//void demo9() {
//    prac1_19();
//}
//
//
//
//
//void demo(){}
//int main() {
//
////    demo1();
////    demo2();
////    demo3();
////    demo4();
////    demo5();
////    demo6();
////    demo7();
////    demo8();
//    demo9();
//
//
//
//
//    return 0;
//}