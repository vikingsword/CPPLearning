#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

/**
* @author: vikingar
* @time: 2023/9/21 18:12
* @description:  ch3
*/

/**
 * p68 判断某个值是否存在 vector 中
 * 如果存在返回一个指针指向该值
 */
const int *find(const vector<int> &v, int value) {
    for (int i = 0; i < v.size(); ++i) {
        if (value == v[i]) {
            return &v[i];
        }
    }
    return 0;
}

void test01() {
    int elem = 1;
    vector<int> v{1, 2, 3};
    const int *p = find(v, elem);
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
}


/**
 * p68
 */
template<typename T>
T *find2(vector<T> &v, T value) {
    for (int i = 0; i < v.size(); ++i) {
        if (value == v[i]) {
            return &v[i];
        }
    }
    return NULL;
}

void test02() {
    vector<int> v = {1, 2, 3};
    int value = 2;
    int *p = find2(v, value);
    cout << "*p = " << *p << endl;

    vector<string> v2 = {"hello", "world", "vikingar"};
    string str = "vikingar";
    string *p2 = find2(v2, str);
    cout << "* p2 = " << *p2 << endl;

    string str2 = "demo";
    string *p3 = find2(v2, str2);
    cout << "*p3 = " << p3 << endl;
}


/**
 * p69
 */
template<typename T>
T * find3(T *arr, T size, T &value) {
    if (size < 1 || arr) {
        return 0;
    }
    for (int i = 0; i < size; ++i, ++arr) {
        if (value == *arr) {
            return arr;
        }
    }
    return 0;
}

void test03() {
    int arr[] = {1, 2, 3};
    int elem = 2;
    int len = sizeof(arr) / sizeof(arr[0]);
    int *p = find3(arr, len, elem);
    cout << "*p = " << p << endl;

}

/**
 * p74
 */
template<typename R>
void display(vector<R> &v) {
    // 加上typename，告诉编译器 iterator 是一个类型，而不是一个成员变量
    typename vector<R>::iterator it = v.begin();
    typename vector<R>::iterator it_end = v.end();
    for (; it!=it_end; it++) {
        cout << *it << " ";
    }
    cout << endl;
}
void test04() {
    vector<int> v {1,2,3};
    display(v);
}
// another way
template<typename iteratorType, typename elemType>
iteratorType display2(iteratorType first, iteratorType last, elemType &value) {
    for (; first != last; first++) {
        if (value == *first) {
            return first;
        }
    }
    return last;
}


int main() {

//    test01();
//    test02();
//    test03();
    test04();
//    test05();



    return 0;
}