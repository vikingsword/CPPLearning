//#include "iostream"
//#include "vector"
//#include "algorithm"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/9/19 23:02
//* @description:  ch2
//*/
//
//void printVectorInt(vector<int> &v) {
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
///**
// * p36 fib_elem --> O(n)
// */
//void test01() {
//    vector<int> v;
//    int num1 = 1;
//    int num2 = 1;
//    int elem;
//    cout << "input your index number: ";
//    int index = 0;
//    cin >> index;
//    cout << num1 << " " << num2 << " ";
//    for (int i = 2; i < index; ++i) {
//        elem = num1 + num2;
//        num1 = num2;
//        num2 = elem;
//
//        cout << elem << (!(elem % 10) ? "\n" : " ");
//    }
//    cout << elem << endl;
//}
//
///**
// * p36 ----> O(2^n)
// */
//int Fibonacci(int n) {
//    if (n <= 2) {
//        return 1;
//    } else {
//        return Fibonacci(n - 1) + Fibonacci(n - 2);
//    }
//}
//
//void test02() {
//    cout << Fibonacci(12);
//}
//
//
///**
// * p41 2.1
// */
//void test03() {
//
//    while (true) {
//        int num1 = 1;
//        int num2 = 1;
//        int guess_index = 0;
//        int elem;
//        cout << "please input index(end with -1): ";
//        cin >> guess_index;
//        if (guess_index == -1) {
//            cout << "exit!" << endl;
//            break;
//        }
//        if (guess_index < 3) {
//            cout << "your input less than 3!" << endl;
//            continue;
//        }
//        for (int i = 2; i < guess_index; ++i) {
//            elem = num1 + num2;
//            num1 = num2;
//            num2 = elem;
//        }
//        cout << "elem = " << elem << endl;
//    }
//}
//
//
///**
// * p42 bubble_sort
// * 值传递和引用传递
// */
//// 无法工作的传值方法
//void swap(int num1, int num2) {
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;
//}
//
//void bubble_sort(vector<int> v) {
//    for (int i = 0; i < v.size() - 1; ++i) {
//        for (int j = i + 1; j < v.size(); ++j) {
//            if (v[i] > v[j]) {
//                swap(v[i], v[j]);
//            }
//        }
//    }
//}
//
//void test04() {
//    int arr[8] = {8, 34, 3, 13, 1, 21, 5, 2};
//    vector<int> v(arr, arr + 8);
//    printVectorInt(v);
//    bubble_sort(v);
//    printVectorInt(v);
//}
//
//// 改进后的传入引用方法
//void swap2(int & num1, int & num2) {
//    int temp = num1;
//    num1 = num2;
//    num2 = temp;
//}
//void bubble_sort2(vector<int> &v) {
//    for (int i = 0; i < v.size() - 1; ++i) {
//        for (int j = i + 1; j < v.size(); ++j) {
//            if (v[i] > v[j]) {
//                swap2(v[i], v[j]);
//            }
//        }
//    }
//}
//void test05() {
//    vector<int> v2 = {8, 34, 3, 13, 1, 21, 5, 2};
//    printVectorInt(v2);
//    bubble_sort2(v2);
//    printVectorInt(v2);
//}
//
//void test() {}
//
//int main() {
//
////    test01();
////    test02();
////    test03();
////    test04();
//    test05();
////    test06();
//
//    return 0;
//}