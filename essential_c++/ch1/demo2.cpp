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
    ofstream ofs("./essential_c++/ch1/test.txt", ios::app);
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
            ofs.close();
        }
    } else {
        cerr << "can't open this file" << endl;
    }
}

void test05() {

    std::fstream file("./essential_c++/ch1/file/demo2.txt", std::ios::in | ios::app); // 以读写模式打开文件

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl; // 读取并输出文件内容
        }

        file << "This is a new line." << std::endl; // 写入新的内容

        file.close(); // 关闭文件
    } else {
        std::cerr << "无法打开文件" << std::endl;
    }

}

void test06() {
    ofstream ofs("./essential_c++/ch1/file/demo2.txt", ios::app);
    if (ofs.is_open()) {
        string input;
        cin >> input;
        cout << "please input your content to file: ";
        while (input != "exit") {
            ofs << input << endl;
            cin >> input;
        }
    }
}
void test07() {
    fstream iofile("./essential_c++/ch1/file/demo2.txt", ios_base::in|ios_base::app);
    if (!iofile) {
        cout << "can't open file" << endl;
    } else {
        string input;
        cin >> input;
        while (input != "exit") {
            cout << "input your content , type exit to end" ;

        }
        iofile.seekg(0);
    }
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
