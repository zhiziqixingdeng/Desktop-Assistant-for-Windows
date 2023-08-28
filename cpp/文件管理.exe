#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string x,zuo,name;
int n,a;
int main(){
	cout<<"欢迎使用文件管理"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎，"<<name<<"！"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.删除文件"<<endl;
		cout<<"2.打开文件"<<endl;
		cout<<"3.结束本程序"<<endl;
		sleep(1);
		cin>>n;
		if(n==1){
			cout<<"请输入文件路径(包含后缀名):";
			cin>>x;
			zuo="del "+x;
			system(zuo.c_str());
			sleep(1);
			cout<<"完成!"<<endl;
		}
		else if(n==2){
			cout<<"请输入文件路径(包含后缀名),或者网址（要加上http://) :";
			cin>>x;
			zuo="start "+x;
			system(zuo.c_str());
		}
		else{
			cout<<"感谢使用"<<endl;
			return 0;
		}
	} 
}
