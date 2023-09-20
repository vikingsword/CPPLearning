#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/**
* @author: vikingar
* @time: 2023/9/20 19:06
* @description: reference and pointer
*/

void test01() {
    int a = 10;
    int *p = &a;
    int &r = a;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "r = " << r << endl;
    cout << "&r = " << &r << endl;

}

/**
 * p47 reference
 */
void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void printVector2(vector<int> *v) {
    for (vector<int>::iterator it = v->begin(); it != v->end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void printVector3(vector<int> *v) {
    for (int i = 0; i < v->size(); ++i) {
        cout << (*v)[i] << " ";
    }
    cout << endl;
}

void getVectorInfo(vector<int> &v) {
    printVector(v);
}


void test02() {
    vector<int> v = {1, 2, 3};
    getVectorInfo(v);
    cout << "----------------" << endl;
    printVector2(&v);
    cout << "-----------------" << endl;
    printVector3(&v);

    int arr[3] = {1, 2, 3};
    vector<int> v2(arr, arr + 3);
}


/**
 * p49
 */
int demo1;
void test03() {
    cout << "demo1 = " << demo1 << endl;
}


/**
 * p50 dynamic extent
 */
void test04() {
    int * p = new int(1);
    cout << (*p) << endl;
    delete p;

    int * p2 = new int[10];
    delete [] p2;
}


/**
 * p54
 */
const vector<int> * fibon_seq(int size) {
    const int max_size = 100;
    static vector<int> elems;
    if (size < 0 || size > max_size) {
        cerr << "error" << endl;
    }
    for (int i = elems.size(); i < size; ++i) {
        if (i == 0 || i == 1) {
            elems.push_back(1);
        } else {
            elems.push_back(elems[i - 1] + elems[i - 2]);
        }
    }
    return &elems;
}

void test04_2() {
    vector<int> v;
    fibon_seq(10);

}

int * demo2() {
    int a = 10;
    int * p = &a;
    return p;
}

int test05() {
    cout << *demo2();
}

int & demo3() {
    int a = 10;
    int &r = a;
    return a;
}

/**
 * 你提供的 demo4 函数试图返回一个指向局部变量 test 的指针。然而，这会导致问题，因为局部变量在函数执行完毕后会被销毁，而返回一个指向已销毁对象的指针将导致未定义行为。
 * 在这个函数中，test 是在函数体内声明的局部变量，它的生命周期仅限于函数的执行期间。一旦函数执行结束，test 将被销毁，它所占用的内存将被释放。
 * 因此，返回 &test（test 的地址）是不安全的，因为在函数返回后，指向已经销毁的对象的指针将变得无效。
 * 如果你想在函数外部使用一个 vector<int> 对象，你应该使用动态内存分配，例如使用 new 运算符来创建一个堆上的对象，然后返回指向该对象的指针。在这种情况下，你需要负责手动释放分配的内存，以防止内存泄漏。
 */
vector<int> * demo4() {
    vector<int> test;
    return &test;
}

int test06() {
//    cout << demo3();
    cout << demo4();
}

void test() {}
int main() {

//    test01();
//    test02();
//    test03();
//    test04();
//    test05();
    test06();



    return 0;
}