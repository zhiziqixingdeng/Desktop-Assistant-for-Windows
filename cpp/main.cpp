#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int n,x;
int main(){
	cout<<"��ӭ��������windows����С����"<<endl;
	sleep(1);
	while(1==1){
		cout<<"��������Ҫ��ʲô"<<endl;
		cout<<"*1.�ػ�С����"<<endl;
		cout<<"*2.�����ļ�������"<<endl;
		cout<<"3.����������ʾ��"<<endl;
		cout<<"*4.githubʹ��"<<endl;
		cout<<"5.ѧ��ר��"<<endl;
		cout<<"6.��������"<<endl;
		cin>>x;
		if(x==1){
			system("cls");
			cout<<"��������Ҫ��ô�ػ� 1.���� 2.1���Ӻ� 3.ʮ���Ӻ� 4.ȡ���ػ��ƻ�"<<endl;
			cin>>n;
			if(n==1){
				cout<<"�õ�"<<endl;
				sleep(1);
				system("shutdown -s -t 0"); 
				system("pause");
				system("cls");
			}
			else if(n==2){
				cout<<"�Ѿ�Ϊ����ʱ"<<endl;
				system("shutdown -s -t 60");
				sleep(1);
				system("cls"); 
			}
			else if(n==3){
				cout<<"û����"<<endl;
				sleep(1);
				system("shutdown -s -t 600");
				sleep(1);
				system("pause");
				system("cls");  
			}
			else if(n==4){
				cout<<"�õ��Ѿ�ȡ��"<<endl;
				system("shutdown -a");
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(x==2){
			cout<<"�õ�"<<endl;
			sleep(1);
			system("start �ļ�����.exe");
		}
		else if(x==3){
			cout<<"û����"<<endl;
			sleep(1);
			system("start zhizi-cmd.exe");
		}
		else if(x==4){
			system("start githubfast.com");
		}
		else if(x==5){
			cout<<"ѧ������"<<endl;
			sleep(1);
			system("start student.exe");
		}
		else if(x==6){
			system("start ����.exe");
		}
		else{
			cout<<"����"<<endl;
		}
	}
}
