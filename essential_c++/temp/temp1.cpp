//#include "iostream"
//#include "vector"
//#include "algorithm"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/9/22 9:25
//* @description:
//*/
//void test01() {
//    auto f = [](int a, int b) {
//        return a + b;
//    };
//    cout << f(1, 2) << endl;
//}
//
//void test02() {
//    vector<int> v{1, 2, 3};
//    int value = 2;
//    auto res = [&v, &value]() {
//        for (int i = 0; i < v.size(); ++i) {
//            if (value == v[i])
//                return 2;
//        }
//        return 0;
//    };
//    cout << res() << endl;
//}
//
//void test03() {
//    vector<int> v{1, 2, 3, 4, 5};
//    for_each(v.begin(), v.end(), [](int elem) {
//        cout << elem << " ";
//    });
//    cout << endl;
//}
//
//void test04() {
//    auto add = [](int a, int b) { return a + b; };
//    cout << "input two number: " << endl;
//    cout << "num1: ";
//    int num1;
//    cin >> num1;
//    cout << "num2: ";
//    int num2;
//    cin >> num2;
//    auto sum = add(num1,num2);
//    cout << "sum = " << sum << endl;
//}
//
//void test05() {
//
//}
//
//int main() {
//
////    test01();
////    test02();
////    test03();
////    test04();
//    test05();
////    test06();
////    test07();
//
//
//
//
//    return 0;
//}