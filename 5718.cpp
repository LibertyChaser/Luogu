#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << *min_element(a, a+n);
    return 0;
}

/*
函数名：min_element

函数原型：min_element(_ForwardIterator __first, _ForwardIterator __last)

函数作用：返回一个数组里的最小值的迭代器（因为是迭代器所以求值时要加上 *）

时间复杂度：
O(n)

输入后输出 min_element(a,a+n) 即可
*/