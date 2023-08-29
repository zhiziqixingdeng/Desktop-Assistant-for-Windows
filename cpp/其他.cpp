#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;
string str;
int a,b,c,d,n,w,t;
int main(){
	string name;
	srand((unsigned int)time(NULL)); 
	cout<<"请输入你的名字:";
	cin>>name;
	cout<<"欢迎,"<<name<<endl;
	while(1==1){
		cout<<"请输入你要干什么"<<endl;
		cout<<"1.面积/体积计算 2.游戏 3.计时器 4.加密解密 5.刷新"<<endl;
		cin>>n;
		if(n==1){
			cout<<"请输入需要什么 1.面积 2.体积"<<endl;
			cin>>w;
			if(w==1){
				cout<<"需要长方形还是三角 1.长方 2.三角"<<endl;
				cin>>t;
				if(t==1){
					cout<<"请输入长:";
					cin>>a;
					cout<<"请输入宽:";
					cin>>b;
					cout<<"面积:"<<a*b<<endl;
				}
				else if(t==2){
					cout<<"请输入底:";
					cin>>a;
					cout<<"请输入高:";
					cin>>b;
					cout<<"结果:"<<a*b/2<<endl;
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else if(w==2){
				cout<<"请输入需要 1.长方体 2.三角体 :";
				cin>>t;
				if(t==1){
					cout<<"请输入长:";
					cin>>a;
					cout<<"请输入宽:";
					cin>>b;
					cout<<"请输入高:";
					cin>>c;
					cout<<"体积:"<<a*b*c;
					system("pause");
				}
				else if(t==2){
					cout<<"请输入三角形面积:";
					cin>>a;
					cout<<"请输入高:";
					cin>>b;
					cout<<"体积:"<<a*b<<endl;
					system("pause");
				}
				else{
					cout<<"错误"<<endl;
				}
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==2){
			cout<<"好的"<<endl;
			sleep(1);
			cout<<"欢迎来到猜数游戏!"<<endl;
			sleep(1);
			system("cls");
			cout<<"范围:1~1000"<<endl;
			b=rand()%999+1;
			while(b!=a){
				cout<<"猜的数:";
				cin>>a;
				if(a>b){
					cout<<"大了"<<endl;
				}
				if(a<b){
					cout<<"小了"<<endl;
				}
			}
			cout<<"恭喜你猜对了"<<endl;
			system("pause");
		}
		else if(n==3){
			cout<<"请输入需要多少小时:";
			cin>>a;
			cout<<"请输入需要几分钟:";
			cin>>b;
			cout<<"请输入需要几秒:";
			cin>>c;
			cout<<"开始计时"<<endl;
			sleep(a*3600+b*60+c);
			system("start https://s1.ax1x.com/2023/08/29/pPaIKoj.png");
		}
		else if(n==4){
			cout<<"请输入你需要 1.加密 2。解密"<<endl;
			cin>>w;
			if(w==1){
				cout<<"请输入需要加密的:";
				getline(cin,str);
				cout<<"请输入加密数字(最高5，最低1):";
				cin>>a;
				if(a>5||a<1){
					cout<<"错误!!!"<<endl;
				}
				for(int i=1;i<=str.length();i++){
					str[i]+=a;
				}
				cout<<"加密后的:"<<str<<endl;
			}
			else if(w==2){
				cout<<"请输入需要解密的(请确保在本程序上加密的):";
				getline(cin,str);
				cout<<"请输入加密数字:";
				cin>>a;
				for(int i=1;i<=str.length();i++){
					str[i]-=a;
				}
				cout<<"解密后的:"<<str<<endl;
			}
			else{
				cout<<"错误"<<endl;
			}
		}
		else if(n==5){
			system("cls");
		}
		else{
			cout<<"错误"<<endl;
		}
	}
} 
