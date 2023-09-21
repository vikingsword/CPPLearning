//#include "iostream"
//#include "vector"
//#include "algorithm"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/9/21 13:12
//* @description:  lambda 表达式
//*/
//
///**
// * lambda 表达式的格式
// * [OuterVar] (int x, int y) -> int {
// *      return OuterVar + x + y;
// * }
// * [OuterVar]: 捕获变量
// * (int x, int y): 参数列表
// * int: 返回类型
// * OuterVar + x + y: 函数主体
// */
//
//void test01() {
//    vector<int> vec{0, 11, 319, 22, 7, 1, 5};
//    auto f = [](int a, int b) {
//        return a < b;
//    };
//    sort(vec.begin(), vec.end(), f);
//}
//
//void test02() {
//    auto f = [](int a, int b) {
//        return a + b;
//    };
//    cout << f(1, 2) << endl;
//}
//
///**
// * 使用 [] 进行变量捕获
// * 只写 [&] 捕获所有封闭范围内的变量，按引用捕获
// * 只写 [=] 所有的变量都按值捕获
// */
//void test03() {
//    int N = 100, M = 10;
//    auto f = [N, &M](int i) {
//        M = 20;
//        return N * i;
//    };
//    cout << f(10) << endl;
//    cout << M << endl;
//}
//void test04() {
//    int N = 100, M = 10;
//    auto f = [&N](int i){
//        cout << N << endl;
//        return N;
//    };
//    f(10);
//}
//int main() {
//
////    test01();
////    test02();
//    test03();
//
//    return 0;
//}