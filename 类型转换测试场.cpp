#include <functional>
#include <iostream>
#include <initializer_list>
using namespace std;

// 在此定义你需要测试的类型变量
bool bv = true; char cv = -2; signed char scv = -3; unsigned char ucv = 4;
short sv = -5; unsigned short usv = 6; int iv = -7; unsigned uv = 8;
long lv = -9; unsigned long ulv= 10; long long llv = -11; unsigned long long ullv = 12;
float fv = -13.1; double dv = -14.2;

class A
{
private:
    int mem;
public:
    A(int n = 0): mem(n) {}
    explicit operator int() { cerr << "trans\n"; return mem; }
};

int main()
{
    // 使用IDE的lint工具查看变量的类型
    A a(42);
    int i = static_cast<int>(a);
    return 0;
}