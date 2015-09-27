#include<iostream>                  //预处理命令
using namespace std;                //使用命名空间std
int main()                          //定义main函数
{char c1,c2;                        //定义字符型变量c1 c2
cout<<"请输入一个值给c1";           //提示输入c1
cin>>c1;                            //输入c1
c2=c1+5;                            //将c1+5的值赋给c2
cout<<"打印c2的值"<<c2<<endl;       //输出c2并换行
return 0;
}