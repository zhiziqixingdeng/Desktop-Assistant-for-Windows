#include <iostream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

struct ren {
    string name;
    int zidan;
    int xue=10;
    int li;
}r[2];

int main() {
    int n, w,a,s;
    ren player;
    int zhizi=100; 
    cout << "欢迎来到zhizi危机" << endl;
    cout << "请输入你的名字: ";
    cin >> player.name;
    cout << "欢迎来到游戏" << endl;
    system("pause");
    system("cls");
    
    while (true) {
        cout << "请输入你要干什么" << endl;
        cout << "1.剧情" << endl;
        cout << "2.商店" << endl;
        cout << "3.退出" << endl;
        cout << "***************" << endl;
        cin >> n;
        
        if (n == 1) {
            cout << "请输入你要玩什么" << endl;
            cout << "1.出开" << endl;
            cout << "2.遭遇zhizi" << endl;
            cout << "3.战斗" << endl;
            cout << "4.解除危机" << endl;
            cin >> w;
            
            switch (w) {
                case 1:
                    cout<<"我:这里是哪里"<<endl;
                    sleep(1);
                    cout<<"我:这里好像有一个地图"<<endl;
                    cout<<"让我读读"<<endl;
                    sleep(1);
                    cout<<"这里很危险，我有逃出地图"<<endl;
                    cout<<"快跑!---------七星灯"<<endl;
                    sleep(1);
                    cout<<"输入数字来找到物资"<<endl;
                    cin>>a;
                    a=rand()%100;
                    while(a<=50||a>=60){
                    	if(a<=10){
                    	cout<<"你捡到了1盒子弹"<<endl;
                    	cout<<"子弹+10"<<endl;
                    	sleep(1);
                    	r[1].zidan+=10;
                    	a=rand()%100;
                    	sleep(1);
					}
					else if(a>=10&&a<=50){
						cout<<"你捡到了体力增强器"<<endl;
						cout<<"体力+20"<<endl; 
						r[1].li+=20;
						a=rand()%100;
					}
					else if(a>=60){
						cout<<"你捡到了加血的"<<endl;
						cout<<"血量+2"<<endl;
						r[1].xue+=2;
						sleep(1);
					}
					else{
						cout<<"你离开了这里"<<endl;
						sleep(1);
						system("cls"); 
					}
					}
                    break;
                case 2:
                    cout<<"我在哪里?"<<endl;
                    cout<<"七星灯:你终于醒了，快点跑啊"<<endl;
                    sleep(1);
                    cout<<"我:你在干什么?"<<endl;
                    cout<<"七星灯:加油逃跑吧"<<endl;
                    sleep(1);
                    system("cls");
                    cout<<"突然,zhizi冲了过来"<<endl;
                    cout<<"请输入怎么逃离质子 1.翻墙（体力-1） 2.打枪(子弹-8) 3.让七星灯带自己逃跑(血量-1，子弹-1)"<<endl;
                    cin>>a;
                    if(a==1){
                    	if(r[1].li<=0){
                    		cout<<"你没有体力了"<<endl;
                    		cout<<"你噶了"<<endl;
                    		sleep(1);
                    		system("cls");
                    		break;
						}
						else{
							cout<<"你逃跑走了，七星灯也一样"<<endl;
							r[1].li-=1;
							break;
						}
					}
					else if(a==2){
						if(r[1].zidan<=7){
                    		cout<<"你没有子弹了了"<<endl;
                    		cout<<"你噶了"<<endl;
                    		sleep(1);
                    		system("cls");
                    		break;
						}
						else{
							cout<<"你通过打枪，质子退后了好多,你趁机跟七星灯逃走了"<<endl;
							r[1].zidan-=8;
							break;
						}
					}
					else if(a==3){
						cout<<"七星灯:跟我走"<<endl;
						sleep(1);
						cout<<"我:好的"<<endl;
						if(r[1].xue<=0||r[1].zidan<=0){
							cout<<"你噶了"<<endl;
							sleep(1);
							system("cls");
							break;
						}
						else{
							cout<<"你逃跑走了"<<endl;
							sleep(1);
							system("cls");
							r[1].xue-=1;
							r[1].zidan-=1;
							break;
						}
					}
                    break;
                case 3:
                    cout<<"你使用了很多子弹"<<endl;
                    sleep(1);
                    cout<<"你开始战斗"<<endl;
                    sleep(1);
                    cout<<"你发现七星灯的子弹有很多"<<endl;
                    cout<<"你有无限的子弹"<<endl;
                    while(1==1){
                    	if(r[1].xue<=0){
                    		cout<<"你死了"<<endl;
                    		break;
						}
						if(zhizi<=0){
							cout<<"你打败了zhizi"<<endl;
						}
                    	cout<<"请输入怎么攻击 1.子弹 2.拳头 3.退后50米"<<endl;
                    	cin>>a;
                    	if(a==1){
                    		cout<<"你瞄准zhizi，并发射子弹"<<endl;
                    		s=rand()%3;
                    		if(s<=1){
                    			cout<<"你射中了!"<<endl;
                    			sleep(1);
                    			zhizi-=8;
							}
							else{
								cout<<"你没打中"<<endl;
								cout<<"你被质子攻击了"<<endl;
								sleep(1);
								r[1].xue-=1;
							}
						}
						else if(a==2){
							cout<<"你打了zhzi一拳头"<<endl;
							zhizi-=4;
						}
						else{
							cout<<"你的血量+1"<<endl;
							r[1].xue+=1;
						}
					}
                    break;
                case 4:
                    cout<<"你解除了危机!"<<endl;
                    sleep(1);
                    break;
                default:
                    cout << "无效的选项" << endl;
                    break;
            }
        }
        else if (n == 2) {
            cout<<"剧情游戏，算了"<<endl;
            cout<<"给你3颗子弹和一滴血吧"<<endl;
            r[1].xue+=1;
            r[1].zidan+=3;
        }
        else if (n == 3) {
            break; // 退出游戏
        }
        else {
            cout << "无效的选项" << endl;
        }
    }
    return 0;
}
