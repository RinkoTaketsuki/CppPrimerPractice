#include <iostream>
#include <initializer_list>
using namespace std;

// 在此定义你需要测试的类型变量
bool bv = true; char cv = -2; signed char scv = -3; unsigned char ucv = 4;
short sv = -5; unsigned short usv = 6; int iv = -7; unsigned uv = 8;
long lv = -9; unsigned long ulv= 10; long long llv = -11; unsigned long long ullv = 12;
float fv = -13.1; double dv = -14.2;

int main()
{
    // 使用IDE的lint工具查看auto变量的类型
    auto v0 = bv + fv;
    auto v1 = llv + fv;
    auto v2 = ullv + fv;
    auto v3 = (__int128_t)1 + fv;
    const int *p = &iv;
    short *const q = &sv;
    int *pp;
    static_cast<const int *>(pp);
    std::nullptr_t null = 0;
    int *p = null;
    return 0;
}