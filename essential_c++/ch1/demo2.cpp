//#include "iostream"
//#include "fstream"
//#include "vector"
//#include "algorithm"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/9/18 18:50
//* @description:  ch1
//*/
//
///**
// * p31 file io
// */
//void test01() {
//    ofstream ofs("./essential_c++/ch1/test.txt", ios::app);
//    if (!ofs) {
//        cout << "文件打开失败！" << endl;
//    } else {
//        cout << "文件开启成功！" << endl;
//    }
//
//    ofs.write("hello", 10);
//    ofs.close();
//}
//
//void test02() {
//    ifstream ifs("./essential_c++/ch1/test.txt", ios::in);
//    string name = "zs";
//    ifs >> name;
//}
//
//
///**
// * file input and output
// */
//void test03() {
//    ifstream ifs("./essential_c++/ch1/test.txt", ios::in);
//    if (ifs.is_open()) {
//        string line;
//        while (getline(ifs, line)) {
//            cout << line << endl;
//        }
//        ifs.close();
//    } else {
//        cerr << "cannot open file" << endl;
//    }
//}
//
//void test04() {
//    ofstream ofs("./essential_c++/ch1/test.txt", ios::out | ios::app);
//    if (ofs.is_open()) {
//        string input;
//        while (input != "0") {
//            cout << "please input string: " << endl;
//            cin >> input;
//            ofs << input << endl;
//            ofs.close();
//        }
//    } else {
//        cerr << "can't open this file" << endl;
//    }
//}
//
//void test05() {
//
//    std::fstream file("./essential_c++/ch1/file/demo2.txt", std::ios::in | ios::app); // 以读写模式打开文件
//
//    if (file.is_open()) {
//        std::string line;
//        while (std::getline(file, line)) {
//            std::cout << line << std::endl; // 读取并输出文件内容
//        }
//
//        file << "This is a new line." << std::endl; // 写入新的内容
//
//        file.close(); // 关闭文件
//    } else {
//        std::cerr << "无法打开文件" << std::endl;
//    }
//
//}
//
//void test06() {
//    ofstream ofs("./essential_c++/ch1/file/demo2.txt", ios::app);
//    if (ofs.is_open()) {
//        string input;
//        cin >> input;
//        cout << "please input your content to file: ";
//        while (input != "exit") {
//            ofs << input << endl;
//            cin >> input;
//        }
//    }
//}
//void test07() {
//    fstream iofile("./essential_c++/ch1/file/demo2.txt", ios_base::in|ios_base::app);
//    if (!iofile) {
//        cout << "can't open file" << endl;
//    } else {
//        string input;
//        cin >> input;
//        while (input != "exit") {
//            cout << "input your content , type exit to end" ;
//
//        }
//        iofile.seekg(0);
//    }
//}
//
//
///**
// * p33 1.5  string 实现
// */
//void test08(){
//    cout << "please input your name: " ;
//    string name;
//    cin >> name;
//    while (true) {
//        if (name.size() > 2) {
//            cout << "your name is " << name << endl;
//            break;
//        } else {
//            cout << "your length of name less than two character " << endl;
//            cout << "please try again: ";
//        }
//    }
//}
//
//
///**
// * p33 1.6
// */
//void test09() {
////    cout << "please input three number: ";
////    const int count = 3;
////    int arr[count];
////    int num = 0;
////    for (int i = 0; i < count; ++i) {
////        cin >> num;
////        arr[i] = num;
////    }
////    int len = sizeof(arr) / sizeof(arr[0]);
////    for (int i = 0; i < len; ++i) {
////        cout << arr[i] << " " ;
////    }
////    cout << endl;
//
//    cout << "------------" << endl;
//
//    vector<int> v;
//    const int count2 = 3;
//    for (int i = 1; i < count2 + 1; ++i) {
//        v.push_back(i);
//    }
//    int sum = 0;
//    for (vector<int>::iterator it=v.begin(); it!=v.end(); it++) {
//        sum += *it;
//    }
//    cout << "sum = " << sum << endl;
//    cout << "average = " << sum / count2 << endl;
//    cout << endl;
//
//}
//
//
///**
// * read file, get content and sort
// */
//void getFile() {
//    ifstream ifs("./essential_c++/ch1/file/demo3.txt", ios::in);
//    string line;
//    vector<string> v;
//    while (getline(ifs, line)) {
//        cout << line << endl;
//        v.push_back(line);
//    }
//    for (vector<string>::iterator it=v.begin(); it!=v.end(); it++) {
//        cout << *it << " ";
//    }
//    cout << endl;
//
//    sort(v.begin(), v.end());
//
//    ofstream ofs("./essential_c++/ch1/file/demo2_sort.txt");
//    cout << "排序后的结果为： " << endl;
//    for (const string & str : v) {
//        cout << str << " " ;
//        ofs << str << endl;
//    }
//    cout << endl;
//
//
//
//}
///**
// * p34 1.7
// */
//void test10() {
//    ofstream ofs("./essential_c++/ch1/file/demo3.txt", ios::trunc);
//    cout << "please two line character: " << endl;
//    const int line = 2;
//    string content;
//    for (int i = 0; i < line && ofs.is_open(); ++i) {
//        cin >> content;
//        ofs << content << endl;
//    }
//    ofs.close();
//
//    getFile();
//}
//
//
//
//
//void test() {}
//
//int main() {
//
////    test01();
////    test02();
////    test03();
////    test04();
////    test05();
////    test06();
////    test07();
////    test08();
////    test09();
//    test10();
//
//
//
//
//    return 0;
//}
