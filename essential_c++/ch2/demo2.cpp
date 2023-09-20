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

void test() {}
int main() {

//    test01();
//    test02();
//    test03();
    test04();
//    test05();




    return 0;
}