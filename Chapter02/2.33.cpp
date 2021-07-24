#include <iostream>
using namespace std;
// auto 推断类型时自动忽略顶层const，遇到引用时只考虑被引用对象的类型
// 可以使用 const auto 添加顶层const
// T &r = v; 等价于 T *const rp = &v; r = *rp;
int main()
{
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    auto a = r; // int
    auto b = ci; // int
    auto c = cr; // int（考虑的是ci）
    auto d = &i; // int*
    auto e = &ci; // const int*
    const auto f = ci; // const int
    auto &g = ci; // const int&（auto *const gp = &ci => auto = const int => const int *const gp = &ci => const int &g = ci）
    const auto &h = 42; // const int&（int temp = 42; const auto &h = temp => auto = int => const int &h = 42）
    return 0;
}