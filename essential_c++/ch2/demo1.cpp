#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/**
* @author: vikingar
* @time: 2023/9/19 23:02
* @description:  ch2
*/

void printVectorInt(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

/**
 * p36 fib_elem --> O(n)
 */
void test01() {
    vector<int> v;
    int num1 = 1;
    int num2 = 1;
    int elem;
    cout << "input your index number: ";
    int index = 0;
    cin >> index;
    for (int i = 2; i < index; ++i) {
        elem = num1 + num2;
        num1 = num2;
        num2 = elem;
    }
    cout << elem << endl;
}

/**
 * p36 ----> O(2^n)
 */
int Fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

void test02() {
    cout << Fibonacci(4);
}


void test() {}

int main() {

//    test01();
    test02();
//    test03();
//    test04();
//    test05();
//    test06();

    return 0;
}