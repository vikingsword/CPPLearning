#include "iostream"
#include "fstream"
#include "vector"

using namespace std;

/**
* @author: vikingar
* @time: 2023/9/18 18:50
* @description:  ch1
*/

/**
 * p31 file io
 */
void test01() {
    ofstream ofs ("./essential_c++/ch1/test.txt", ios::app);
    if (!ofs) {
        cout << "文件打开失败！" << endl;
    } else {
        cout << "文件开启成功！" << endl;
    }

    ofs.write("hello", 10);
    ofs.close();
}
void test02() {
    ifstream ifs("./essential_c++/ch1/test.txt", ios::in);
    string name = "zs";
    ifs >> name;
}


/**
 * file input and output
 */
void test03() {
    ifstream ifs("./essential_c++/ch1/test.txt", ios::in);
    if (ifs.is_open()) {
        string line;
        while (getline(ifs, line)) {
            cout << line << endl;
        }
        ifs.close();
    } else {
        cerr << "cannot open file" << endl;
    }
}

void test04() {
    ofstream ofs("./essential_c++/ch1/test.txt", ios::out | ios::app);
    if (ofs.is_open()) {
        string input;
        while (input != "0") {
            cout << "please input string: " << endl;
            cin >> input;
            ofs << input << endl;
        }
    } else {
        cerr << "can't open this file" << endl;
    }
}

void test() {

}

int main() {

//    test01();
//    test02();
//    test03();
    test04();

    test();

    return 0;
}
