#include <iostream>                        //预处理命令
using namespace std;                       
int main()                                 //定义main函数
{
	int x1,x2;                             //定义整型变量x1，x2
	char c1,c2;                            //定义字符型变量c1，c2
	cout<<"清输入一个0-9的数字:";          //提示输入数字
	cin>>x1;                               //将输入数字赋值给x1
	x2=x1+48;                              //计算其对应的ASCII码
	c1=x2-1;                               //将其前导字符定义给c1
	c2=x2+1;                               //将其前导字符定义给c2
	cout<<"对应ASCII码为："<<x2<<endl;     //输出其对应的ASCII码
    cout<<"前导字符为："<<c1<<endl;        //输出其前导字符
	cout<<"后续字符为："<<c2<<endl;        //输出其后续字符
	return 0;
}