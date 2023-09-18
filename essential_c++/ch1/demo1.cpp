#include "iostream"
#include "vector"
#include "map"
#include "list"
#include "ctime"

using namespace std;

/**
* @author: vikingar
* @time: 2023/9/17 22:16
* @description:  ch1
*/

/**
 *  p7 1.4
 */
void test01() {
    cout << "please input your first name: ";
    string first_name;
    cin >> first_name;
    cout << "input your last name: ";
    string last_name;
    cin >> last_name;

    cout << "your first name is " << first_name << "; your last name is " << last_name << endl;
    cout << "your name is " << first_name << " " << last_name << endl;

}

/**
 * p7
 */
void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

vector<int> fib_seq() {
    int num1 = 1;
    int num2 = 1;
    vector<int> v;
    v.push_back(num1);
    v.push_back(num2);
    for (int i = 2; i < 10; ++i) {
        v.push_back(v[i - 1] + v[i - 2]);
    }
    return v;
}

pair<int, int> get_rand_two_key() {
    srand((unsigned int) time(NULL));
    int pos = rand() % 10;
    return pair<int, int>(pos, pos + 1);
}

void test02() {

    vector<int> v = fib_seq();
    printVector(v);

    pair<int, int> p = get_rand_two_key();
    cout << "first num is :" << v[p.first] << endl;
    cout << "second num is：" << v[p.second] << endl;
    cout << "please input next number: ";
    int guess_num = 0;
    cin >> guess_num;
    const int max_try = 3;
    int try_num = 0;
    int right_num = 0;
    double right_rate = 0.0;

    while (try_num < max_try) {
        try_num++;
        if (v[p.second + 1] == guess_num) {
            cout << "you are right! " << endl;
            right_num++;
        } else {
            cout << "please try again: ";
            cin >> guess_num;
        }
    }
    right_rate = (double) right_num / max_try;
    cout << "your right rate is " << right_rate << endl;
}


/**
 * p25
 */
void test03() {
    int arr[] = {1, 2, 3};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << " ----------------" << endl;

    int arr2[][3] = {
            {1, 3, 4},
            {3, 4, 5}
    };
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr2[i][j] << " ";
        }
    }
}

void test04() {
    vector<vector<int>> v;
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    vector<int> v3;
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
        for (vector<int>::iterator it2 = it->begin(); it2!=it->end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }
}


/**
 * p37
 */
void test05() {
    int a = 10;
    int * p = &a;
    cout << "a = " << *p << endl;
    cout << "the address of a is " << &p << endl;

    int arr[]  = {1,2,3};
    int * p2 = arr;

    for (int i = 0; i < 3; ++i) {
        cout << (*p2)++ << " ";
    }
    cout << "\n-------------" << endl;

    int arr2[2][3] = {
            {1, 3, 4},
            {3, 4, 5}
    };
    // 定义一个指向包含 3 个整数的数组的指针
    int (*p3)[3] = arr2;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << p3[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * pointer
 */
class MyClass1{
public:
    string m_name;
    int m_age;
    MyClass1(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }
};
void test06() {
    int a = 10;
    int * p = &a;
    cout << "a 的地址为： " << &a << endl;
    cout << "a 的地址为： " << p << endl;

    cout << "-----------------" << endl;
    int b = 20;
//    float * p = &b;

    vector<MyClass1> v;
    auto mc1 = MyClass1("zs", 11);
    MyClass1 mc2("ls",33);
    v.push_back(mc1);
    v.push_back(mc2);
    vector<MyClass1> * p2 =  &v;
    for (vector<MyClass1>::iterator it=v.begin(); it!=v.end();it++) {
        cout << "name = " << (*it).m_name << "; "
            << "age = " << (*it).m_age << endl;
    }
    cout << "--------------" << endl;
    vector<MyClass1>::iterator it2 = v.begin();
    while (it2 != v.end()) {
        cout << "name = " << it2->m_name << "; age = " << it2->m_age << "; " << endl;
        it2++;
    }
}

void test07() {
    int a = 0;
    int * p = NULL;
    if (p && *p != 1) {
        cout << *p << endl;
    } else {
        cout << "p is null";
    }

}

int add_num(int & num, int & num2) {
    num++;
    num2++;
    return num + num2;
}
void test08() {
    int a = 10;
    int b = 20;
    int res = add_num(a,b);
    cout << "res  = " << res << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "-----------------" << endl;
    cout << "the difference between reference and pointer: " << endl;
    // 指向一个地址后还可以指向另一个地址
    int c = 1;
    int d = 2;
    int * p = &c;
    p = &d;
    cout << *p << endl;
    // 引用绑定到一个对象后，就不能发生改变，r 就相当于同一个变量的不同名称，更改了r就是更改d，就是创建别名
    int & r = c;
    r = d;
    cout << c << endl;


}


void test() {}

int main() {

//    test01();
//    test02();
//    test03();
//    test04();
//    test05();
//    test06();
//    test07();
    test08();
//    test09();
//    test10();
//    test11();
//    test12();




    return 0;
}