// Memory Management
#include <memory>
// Stream
#include <iostream>
#include <fstream>
#include <sstream>
// Iterator
#include <iterator>
// Data Structure
#include <vector>
#include <list>
#include <array>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <tuple>
#include <bitset>
// Generic Algorithm
#include <algorithm>
#include <numeric>
// Regular Expression
#include <regex> 
// Callable Object
#include <functional>
// Random Number
#include <random>
// C Standard Library
#include <cmath>
#include <cstdio>
#include <climits>

template <typename T> 
class A
{
public:
    bool bitAnd(const T&);
    T mem;
};

template <typename T>
bool A<T>::bitAnd(const T &rhs)
{
    return (this->mem + rhs).size();
}

template class A<std::string>;