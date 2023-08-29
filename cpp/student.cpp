#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name,str;
int n,a,b,c,d,w,cnt,cpp;
char x;
int main(){
	cout<<"学生您好"<<endl;
	sleep(1);
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"你好啊,"<<name<<"，欢迎使用"<<endl;
	sleep(2);
	system("cls");
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.游戏"<<endl;
		cout<<"2.计算器"<<endl;
		cout<<"3.口算练习"<<endl;
		cout<<"4.关闭程序"<<endl;
		cin>>n;
		if(n==1){
			cout<<"由于游戏太多"<<endl;
			sleep(1);
			cout<<"我们先打开一下"<<endl;
			system("start 学生游戏.exe"); 
		}
		else if(n==2){
			cout<<"请输入需要什么计算 1.整数计算 2.分数计算 3.百分比计算"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入算式(乘号是*,除号是/,如:5*9):";
				cin>>a>>x>>b;
				if(x=='+'){
					cout<<"结果:"<<a+b<<endl;
				}
				else if(x=='-'){
					cout<<"结果:"<<a-b<<endl;
				}
				else if(x=='*'){
					cout<<"结果:"<<a*b<<endl;
				}
				else if(x=='/'&&b!=0){
					cout<<"结果:"<<a/b;
					if(a%b!=0){
						cout<<"......"<<a%b; 
					}
					cout<<endl;
				}
				else if(x=='/'&&b==0){
					cout<<"除数不能是零哦!"<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入第一个数的分母:";
				cin>>a;
				cout<<"请输入第一个数的分子:";
				cin>>b;
				cout<<"请输入第二个数的分母:";
				cin>>c;
				cout<<"请输入第二个数的分子:";
				cin>>d;
				cout<<"请输入运算符(*是乘号,/是除号)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"结果:"<<a<<"分之"<<b+d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c+d*a<<endl;
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"结果:"<<a<<"分之"<<b-d<<endl;
					}
					else{
						cout<<"结果:"<<a*c<<"分之"<<b*c-d*a<<endl;
					}
				}
				else if(x=='*'){
					cout<<"结果:"<<a*c<<"分之"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"结果:"<<a*d<<"分之"<<b*c<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==3){
				cout<<"请输入总数多少:";
				cin>>a;
				cout<<"请输入需要百分之几:";
				cin>>b;
				c=a/100*b;
				cout<<"结果:"<<c<<endl; 
			}
			else{
				cout<<"错误"<<endl;
			}
			system("pause");
		}
		else if(n==3){
			cout<<"请输入你要算几道题:";
			cin>>a;
			cout<<"好的"<<endl;
			system("pause");
			for(int i=1;i<=a;i++){
				b=rand()%100;
				c=rand()%100;
				d=rand()%2;
				if(c==0){
					cout<<b<<"+"<<c<<"=";
					cin>>cpp;
					if(cpp==b+c){
						cout<<"正确!"<<endl;
						cnt++;
					}
					else{
						cout<<"错了"<<endl;
					}
				}
				else if(c==1){
					cout<<b<<"-"<<c<<"=";
					cin>>cpp;
					if(cpp==b-c){
						cout<<"正确!"<<endl;
						cnt++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
				else{
					cout<<b<<"x"<<c<<"=";
					cin>>cpp;
					if(cpp=b*c){
						cout<<"正确!"<<endl;
						cnt++;
					}
					else{
						cout<<"错误"<<endl;
					}
				}
			}
			cout<<"一共有"<<a<<"道题"<<",你做对了"<<cnt<<"道"<<endl; 
		}
		else if(n==4){
			cout<<"再见"<<endl;
			system("pause");
			return 0; 
		}
		else{
			cout<<"错误"<<endl;
		}
	}	
}
