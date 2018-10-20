//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
#include <iostream>
// 标志符： coder命名的：类名，变量名，函数名
//
using namespace std;//标准库 姓std 
int main() {
    const int PRICE = 30;
    //PRICE = 35
    int num, total; // 变量定义后没有被初始化，所以都是垃圾数据。
    // 因为内存空间之前被其他程序使用过，里面可能有数值。
    // 所以没有初始化是非常不安全的， 除非被const修饰，则初始化为零。
    double v, r, h;
    num = 10;
    total = num * PRICE;
    cout << total << endl; 
    r = 2.5;
    h = 3.2;
    v = 3.14159 * r * r * h;
    cout << v << endl;
    return 0;
}
/*
 * 一些特性：
 *     函数指针：     int (*pf)(int, char)
 *     表示pf是一个函数的指针， 它所指向的函数，返回值类型应该是 int， 该函数应有
 *     两个参数， 第一个是int类型， 第二个是char类型。
 *     使用方法：可以用一个原型匹配的函数的名字给一个函数指针赋值。
 *     要通过函数指针调用它所指向的函数，写法为：
 *     函数指针名（实参表）
 */