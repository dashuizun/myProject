#include <iostream>
#include <string>
using namespace std;
int main()
{
  int oneInt1, oneInt2;
  char strArry[20];
  string str;
  double oneDouble;
  char oneChar = 'a';
  cout << "输入2个整型值，一个字符，一个字符串和一个浮点值";
  cout << "以空格、TAB键或(Enter)键分割;" << endl;
  cin >> oneInt1 >> oneInt2 >> oneChar >> strArry >> oneDouble;
  str = strArry;
  cout << "输入的数据是：" << endl;
  cout << "字符串是：\t\t" << str << endl
       << "两个整型值分别是:\t" << oneInt1 << " 和\t" << oneInt2 << endl
       << "字符是：\t\t" << oneChar << "\n"
       << "浮点值是：\t\t" << oneDouble << endl;
}