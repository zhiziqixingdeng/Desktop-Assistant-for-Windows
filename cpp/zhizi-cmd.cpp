#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string str;
int main(){
	cout<<"欢迎来到zhizi-cmd"<<endl;
	sleep(1);
	system("cls");
	while(str!="end"){
		cin>>str;
		if(str=="cls"){
			system("cls");
		}
		else if(str==""){
			cout<<"输入不能为空"<<endl;
		}
		else if(str=="student"){
			system("start student");
		}
		else if(str=="end"){
			cout<<"再见"<<endl;
		}
		else{
			cout<<"错误"<<endl;
		}
	}
	return 0;
}
