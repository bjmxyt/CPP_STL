#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//sting��const char* ��ת
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

//string����
void test03()
{
	//string�Ĺ��캯��
	//string();//�����յ��ַ���
	//string(const string& str);//ʹ��һ��string�����ʼ����һ��string����
	//string(const char* s);//ʹ���ַ���s��ʼ��
	//string(int n, char c);//ʹ��n���ַ�c��ʼ��


	//string��ʼ��
	string s; // Ĭ�Ϲ���

	string s2 = "abcd";
	
	string s3(s2);//��������

	string s4(10, 'd');

}

//string�����ַ�����ֵ�ʹ�ȡ
void test04()
{
//string������ֵ
	string s;
	s = "abcd";

	string s2;
	s2.assign("pppp");



//string������ȡ
	string s3 = "abcdefg";
	for (int i = 0; i < s3.size(); i++) {
		cout << s3[i] << " ";
	}	

	cout << endl;
	
	//��������at���Բ����쳣
	for (int i = 0; i < s3.size(); i++) {
		cout << s3.at(i) << " ";
	}

	cout << endl;

	//[]���ʷ�ʽ������Խ��ʱ�򲻻��׳��쳣��crash��
	//at���׳��쳣
	try
	{
		//cout << s3[100] << endl;//�������
		cout << s3.at(100) << endl;
	}
	catch (const std::exception&)
	{
		cout << "����Խ�磡" << endl;
	}

}


//string����ƴ�Ӳ���
void test05()
{
	string s1 = "aaa";
	string s2 = "bbb";

//**string s3 = s1 + s2;
	//cout << s3;

//**s1 += s2;
	//cout << s1 << endl;

//**��Ա������ʽ append
	//s1.append(s2);
	//cout << s1;

}


//string���Һ��滻���Ƚ�
void test06()
{
	string s = "abcdefgbc";
//����
	string target = "bc";
	int pos = s.find(target);
	const char* target2 = "ef";
	int pos2 = s.find(target2);

	cout << pos << ' ' << pos2 << endl;

	//rfind�Ӻ���ǰ����
	int pos3 = s.rfind(target);
	cout << pos3 << endl;

//�滻
	string s1 = "qqqq";
	s.replace(0, 2, s1);
	cout << s << endl;
		
}

//string �Ƚ� �ַ��� �����ɾ��
void test07()
{

//�Ƚ�
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


//�Ӵ�
	string s3 = "abcdefg";
	string s4 = s3.substr(2, 3);
	cout << "s4:  " << s4 << endl;

//�����ɾ��
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