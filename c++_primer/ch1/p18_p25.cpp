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

/**
 * p21 prac
 */
void prac1_23() {
    Sales_item current_item, item;
    if (cin >> current_item) {
        int cnt = 1;
        while (cin >> item) {
            if (item.isbn() == current_item.isbn()) {
                cnt++;
            } else {
                cout << "current item " << current_item.isbn() << " occurs " << cnt << " times.";
                current_item = item;
                cnt = 1;
            }
            if (item.isbn() == "-1") {
                return;
            }
        }
    }
}
void demo2() {
    prac1_23();
}


/**
 * p21 + prac 1.25
 */
void demo3() {
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                cout << "total = " << total << endl;
                total = trans;
            }
            if (trans.isbn() == "-1") {
                break;
            }
        }
    } else {
        cout << "No data?" << endl;
        return;
    }
}




void demo() {}
int main() {

//    demo1();
//    demo2();
    demo3();
//    demo4();
//    demo5();
//    demo6();
//    demo7();
//    demo8();
//    demo9();

    return 0;
}