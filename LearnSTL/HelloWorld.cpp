#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void Test01()
{
	//容器
	vector<int> v;//创建容器：动态数组，容器中数据类型为int
	v.push_back(10); //vector成员方法，向容器尾部添加元素
	v.push_back(4);
	v.push_back(5);
	v.push_back(4);

	//迭代器
	vector<int>::iterator pStart = v.begin(); // 指向第一个元素的迭代器
	vector<int>::iterator pEnd = v.end(); // 指向结束标志的迭代器（最后一个元素的下一个位置）

	//算法
	//容器和算法通过迭代器关联
	//count统计容器中某个元素的个数
	int n = count(v.begin(), v.end(), 4);
}
