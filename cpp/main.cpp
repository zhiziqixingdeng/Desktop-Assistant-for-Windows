#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,x;
int main(){
	cout<<"欢迎来到质子windows桌面小助手"<<endl;
	sleep(1);
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"*1.关机小助手"<<endl;
		cout<<"*2.质子文件管理器"<<endl;
		cout<<"3.质子命令提示符"<<endl;
		cout<<"*4.github使用"<<endl;
		cout<<"5.学生专用"<<endl;
		cout<<"6.其他功能"<<endl;
		cin>>x;
		if(x==1){
			system("cls");
			cout<<"请输入需要怎么关机 1.马上 2.1分钟后 3.十分钟后 4.取消关机计划"<<endl;
			cin>>n;
			if(n==1){
				cout<<"好的"<<endl;
				sleep(1);
				system("shutdown -s -t 0"); 
				system("pause");
				system("cls");
			}
			else if(n==2){
				cout<<"已经为您定时"<<endl;
				system("shutdown -s -t 60");
				sleep(1);
				system("cls"); 
			}
			else if(n==3){
				cout<<"没问题"<<endl;
				sleep(1);
				system("shutdown -s -t 600");
				sleep(1);
				system("pause");
				system("cls");  
			}
			else if(n==4){
				cout<<"好的已经取消"<<endl;
				system("shutdown -a");
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(x==2){
			cout<<"好的"<<endl;
			sleep(1);
			system("start 文件管理.exe");
		}
		else if(x==3){
			cout<<"没问题"<<endl;
			sleep(1);
			system("start zhizi-cmd.exe");
		}
		else if(x==4){
			system("start githubfast.com");
		}
		else if(x==5){
			cout<<"学生您好"<<endl;
			sleep(1);
			system("start student.exe");
		}
		else if(x==6){
			system("start 其他.exe");
		}
		else{
			cout<<"错误"<<endl;
		}
	}
}
