#include "iostream"
#include "headers/Sales_item.h"

using namespace std;

/**
* @author: vikingar
* @time: 2023/10/6 21:18
* @description:  
*/

/**
 * p20
 */
void prac1_20() {
    Sales_item item;
    while (cin >> item) {
        cout << item << endl;
    }
}
void prac1_21() {
    Sales_item item1, item2;
    cout << "input two sales_items: ";
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;
}
void prac1_22() {
    Sales_item item, sum;
    while (cin >> item) {
        sum += item;
        cout << "sum = " << sum << endl;
    }
}
void demo1() {
//    prac1_20();
//    prac1_21();
//    prac1_22();

    Sales_item item1, item2;
    cout << "input two item: " << endl;
    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        cout << item1 + item2 << endl;
    } else {
        cerr << "Data must be refer to same ISBN." << endl;
        return;
    }


}




void demo() {}
int main() {

    demo1();
//    demo2();
//    demo3();
//    demo4();
//    demo5();
//    demo6();
//    demo7();
//    demo8();
//    demo9();

    return 0;
}