//#include "iostream"
//#include "fstream"
//
//using namespace std;
//
///**
//* @author: vikingar
//* @time: 2023/10/6 15:39
//* @description:
//*/
//
//void test01() {
//    ifstream ifs("./c++_primer/ch1/test/test.txt", ios::in|ios::app);
//    if (!ifs.is_open()) {
//        cout << "file not found" << endl;
//    } else {
//        string line;
//        while (getline(ifs, line)) {
//            cout << line << endl;
//        }
//        ifs.close();
//    }
//}
//
//void test02() {
//    ifstream ifs("./c++_primer/ch1/test/test.txt", ios::in);
//    if (ifs.is_open()) {
//        string line;
//        while (getline(ifs, line)) {
//            cout << line << endl;
//        }
//        ifs.close();
//    } else {
//        cout << "file not found " << endl;
//    }
//}
//
//int main() {
//
////    test01();
//    test02();
//
//
//
//    return 0;
//}