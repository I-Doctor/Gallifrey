#include <iostream>              //预处理命令
using namespace std;             //使用命名空间 stb
int main()                       //定义main函数，主函数首部
{                                //函数体开始
	int x1,x2;                   //定义整型变量x1，x2
  unsigned y;                    //定义无符号的整型变量y
  char c1,c2;                    //定义字符型变量c1，c2
  x1=65535;                      //给x1赋值
  x2=x1+5;                       //将x1+5后赋值给x2
  cout<<"enter y:";              //提示输入y
  cin>>y;                        //输入y
  c1=97;                         //给c1赋值
  c2='A';                        //给c2赋值
  c2=c2+32;                      //将c2+32的结果赋值给c2
  cout<<"x1="<<x1;               //输出x1
  cout<<"x2="<<x2;               //输出x2
  cout<<"y="<<(y+15);            //将y+15后输出
  cout<<"c1="<<c1;               //输出c1
  cout<<"c2="<<c2;               //输出c2
  return 0;                      //如程序正常结束，向操作系统返回一个零值
}