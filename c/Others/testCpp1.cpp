#include<iostream>
#include<string.h>
using namespace std;

class dog
{
public:
	string ys;
	string lx;
	string dx;
	void yao()
	{
		cout<<"啃骨头"<<endl;
	}
	void kan()
	{
		cout<<"看家"<<endl;
	}
	void chi()
	{
		cout<<"吃狗粮"<<endl;
	}
};
int main()
{
	dog dog1;
	dog1.chi();
	dog1.kan();
	dog1.yao();

	dog1.dx="大";
	dog1.lx="哈士奇";
	dog1.ys="灰色";

	cout<<"dog1.dx:"<<dog1.dx<<endl;
	cout<<"dog1.lx:"<<dog1.lx<<endl;
	cout<<"dog1.ys:"<<dog1.ys<<endl;
	return 0;
}