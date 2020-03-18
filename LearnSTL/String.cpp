#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//sting和const char* 互转
void test02()
{
	//const char* ->string
	const char* cstr = "abcd";
	string sstr(cstr);


	//string->const char*
	string s = "abcde";
	const char* cs = s.c_str();

	cout << sstr << endl;
	cout << cs << endl;
}

//string构造
void test03()
{
	//string的构造函数
	//string();//创建空的字符串
	//string(const string& str);//使用一个string对象初始化另一个string对象
	//string(const char* s);//使用字符串s初始化
	//string(int n, char c);//使用n个字符c初始化


	//string初始化
	string s; // 默认构造

	string s2 = "abcd";
	
	string s3(s2);//拷贝构造

	string s4(10, 'd');

}

//string容器字符串赋值和存取
void test04()
{
//string容器赋值
	string s;
	s = "abcd";

	string s2;
	s2.assign("pppp");



//string容器存取
	string s3 = "abcdefg";
	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}	

	cout << endl;
	
	//区别在于at可以捕获异常
	for (int i = 0; i < s3.size(); i++) {
		cout << s3.at(i) << " ";
	}

	cout << endl;

	//[]访问方式，访问越界时候不会抛出异常，crash掉
	//at会抛出异常
	try
	{
		//cout << s3[100] << endl;//程序崩溃
		cout << s3.at(100) << endl;
	}
	catch (const std::exception&)
	{
		cout << "访问越界！" << endl;
	}

}


//string容器拼接操作
void test05()
{
	string s1 = "aaa";
	string s2 = "bbb";

//**string s3 = s1 + s2;
	//cout << s3;

//**s1 += s2;
	//cout << s1 << endl;

//**成员方法方式 append
	//s1.append(s2);
	//cout << s1;

}


//string查找和替换、比较
void test06()
{
	string s = "abcdefgbc";
//查找
	string target = "bc";
	int pos = s.find(target);
	const char* target2 = "ef";
	int pos2 = s.find(target2);

	cout << pos << ' ' << pos2 << endl;

	//rfind从后往前查找
	int pos3 = s.rfind(target);
	cout << pos3 << endl;

//替换
	string s1 = "qqqq";
	s.replace(0, 2, s1);
	cout << s << endl;
		
}

//string 比较 字符串 插入和删除
void test07()
{

//比较
	string s1 = "abc";
	string s2 = "abb";

	int ret = s1.compare(s2);
	if (ret == 1)
	{
		//cout << "s1 > s2" << endl;
	}
	else if (ret == -1)
	{
		//cout << "s1 < s2 " << endl;
	}
	else
	{
		//cout << "s1 == s2"<< endl;
	}


//子串
	string s3 = "abcdefg";
	string s4 = s3.substr(2, 3);
	cout << "s4:  " << s4 << endl;

//插入和删除
	string s5 = "abcd";
	s5.insert(0, "pppp");
	string s6 = "qqqq";
	s5.insert(s5.size() - 1, s6);
	//cout << s5 << endl;

	s5.erase(1, 2);
	//cout << s5 << endl;

}

int main()
{
	test07();
}