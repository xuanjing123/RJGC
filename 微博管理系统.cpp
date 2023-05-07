#include<stdio.h>
#include<vector>
#include <conio.h>
#include<iostream>
using namespace std;
int id_s = 10;
int n = 1;
int n_n[10] = { 0,4,4,4 };
int o = 3;
char fsz[][10] = { " ","王俊凯","王源","易烊千玺" };
struct Weibo {
    string name;//动态的发送者
    int id;//动态ID
    string p;
    void get(int a, string b, string c) {
        id = a;
        p = b;
        name = c;
    }
};
struct Weibo a[20] = { {}, {fsz[1],1,"这是我的第一条微博" },{fsz[1],3,"这是我的第二条微博"} ,{fsz[1],6,"这是我的第6条微博"} };
struct Weibo b[20] = { {}, {fsz[2],4,"这是我的第一条微博" },{fsz[2],5,"wuwuwuuwuuw"} ,{fsz[2],8,"这是我的第3条微博"} };
struct Weibo c[20] = { {}, {fsz[3],2,"这是我的第一条微博" },{fsz[3],7,"qiqiqiiqiqi"} ,{fsz[3],9,"这是我的第3条微博"} };

struct Weibo d[20];
void getin_d() {
    cout << endl;
    cout << endl;
    string name_s;
    name_s = "陈嘉弋";
    cout << "===============================\n\n";
    cout << "#微博ID:" << id_s << "#" << endl;
    string p_s;
    cout << "#用户:" << name_s << "#" << endl;
    cout << "*内容：";cin >> p_s;cout << endl;
    cout << "===============================\n";
    d[n++].get(id_s, p_s, name_s);
    cout << "成功发送到*   " << name_s << "   *的微博" << endl;
    cout << endl;
    id_s++;
}
int concern[10] = { 0 };




int main() {
    int judg();
    void getin_d();
    int flag = 0;
    cout << "-------------微博-------------" << endl;
    cout << "------随地随地发现新世界------" << endl;
    _getch();

    while (flag != 7) {
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "1:发微博" << endl << "2:查看自己的微博" << endl;
        cout << "3:新闻推送" << endl << "4:取消关注" << endl << "5:关注用户" << endl;
        cout << "6:查看关注用户微博" << endl << "7:退出微博" << endl;
        cout << "---------------------------" << endl;
        cin >> flag;
        system("cls");
        if (flag == 1) {
            cout << "--------微博发送页面----------\n";
            getin_d();

            int w = 0;
            cout << "------------------------------" << endl;
            cout << "1:继续发送微博" << endl;
            cout << "2:退出到主页" << endl;
            cout << "------------------------------" << endl;
            cin >> w;
            while (w != 1 && w != 2) {
                cout << "请输入有效指令:\n";
                cin >> w;
            }
            while (w == 1) {
                getin_d();

                cout << "------------------------------" << endl;
                cout << "1:继续发送微博" << endl;
                cout << "2:退出到主页" << endl;
                cout << "------------------------------" << endl;
                cin >> w;
                while (w != 1 && w != 2) {
                    cout << "请输入有效指令:\n";
                    cin >> w;
                }
            }
            cout << "**成功退出**" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 2) {
            system("cls");
            cout << "******陈嘉弋的微博******" << endl;
            int sum = 15;
            for (int i = n - 1;i >= 1;i--) {
                if (sum == 0) {
                    cout << "！！！仅显示最近的十五条微博！！！" << endl;
                    break;
                }
                cout << endl;
                cout << "--------------------------" << endl;
                cout << "#微博ID：" << d[i].id << "  #" << endl;
                cout << "#发送者：" << d[i].name << "  #" << endl;
                cout << "#内容：" << d[i].p << endl;
                cout << "--------------------------" << endl;
                sum--;
            }
            _getch();
            system("cls");
        }
        else if (flag == 3) {
            cout << "******新闻推送******" << endl;
            cout << endl;
            int s = 15;
            for (int i = id_s - 1;i >= 1;i--) {
                cout << endl;
                if (s == 0) {
                    cout << "!!!仅显示最近的十五条微博!!!" << endl;
                    _getch();
                    break;
                }
                for (int j4 = n - 1;j4 >= 1;j4--) {
                    if (d[j4].id == i) {
                        cout << "--------------------------" << endl;
                        cout << "#微博ID：" << d[j4].id << " #" << endl;
                        cout << "#发送者：" << d[j4].name << "  #" << endl;
                        cout << "#内容：" << d[j4].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                        break;
                    }
                }
                for (int i1 = 1;i1 <= o;i1++) {
                    if (concern[i1] == 1) {
                        for (int j1 = n_n[i1] - 1;j1 >= 1;j1--) {
                            if (i1 == 1 && a[j1].id == i) {
                                cout << "--------------------------" << endl;
                                cout << "#微博ID：" << a[j1].id << "#" << endl;
                                cout << "#发送者：" << a[j1].name << "#" << endl;
                                cout << "#内容：" << a[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                            else if (i1 == 2 && b[j1].id == i) {
                                cout << "--------------------------" << endl;
                                cout << "#微博ID：" << b[j1].id << "    #" << endl;
                                cout << "#发送者：" << b[j1].name << "  #" << endl;
                                cout << "#内容：" << b[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                            else if (i1 == 3 && c[j1].id == i) {
                                cout << "--------------------------" << endl;
                                cout << "#微博ID：" << c[j1].id << "  #" << endl;
                                cout << "#发送者：" << c[j1].name << "  #" << endl;
                                cout << "#内容：" << c[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                        }
                    }
                }

            }
            cout << "---以上为推送的信息---" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 4) {
            int f = 1;
            while (f == 1) {
                if (judg() == 0)break;
                cout << endl;
                string qq;
                cout << "请输入需要取消关注的用户:";cin >> qq;cout << endl;
                if (qq == fsz[1] && concern[1] == 1) {
                    concern[1] = 0;
                    cout << "成功取消关注:" << fsz[1] << endl;
                }
                else if (qq == fsz[2] && concern[2] == 1) {
                    concern[2] = 0;
                    cout << "成功取消关注" << fsz[2] << endl;
                }
                else if (qq == fsz[3] && concern[3] == 1) {
                    concern[3] = 0;
                    cout << "成功取消关注" << fsz[3] << endl;
                }
                else {
                    cout << "输入有误\n";
                }
                cout << "1:继续取消关注" << endl;
                cout << "2:退出到主页" << endl;
                cin >> f;
                while (f != 1 && f != 2) {
                    cout << "输入有误，请重新输入:\n";
                    cin >> f;
                }
            }
            cout << endl;
            cout << "***成功退出取关页面***" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 5) {
            int f = 1;
            while (f == 1) {
                judg();
                cout << "可以关注的用户有:" << endl;
                for (int i = 1;i <= o;i++) {
                    cout << i << ":" << fsz[i] << endl;
                }
                int q;
                cout << "请选择想要关注的用户代号:" << endl;
                cin >> q;
                while (q < 1 || q>o) {
                    cout << "请输入有效用户:";cin >> q;cout << endl;
                }
                concern[q] = 1;
                cout << "关注成功" << endl;
                cout << endl;
                cout << "1:继续关注" << endl;
                cout << "2:退出关注页面" << endl;
                cin >> f;
                while (f != 1 && f != 2) {
                    cout << "输入有误，请重新输入:\n";
                    cin >> f;
                }
                system("cls");
            }
            cout << "**成功退出关注页面**" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 6) {
            int f = 1;
            while (f == 1) {
                if (judg() == 0)break;
                string p;
                cout << "请选择需要查看的用户:";cin >> p;cout << endl;
                int s = 15;
                if (p == fsz[1]) {
                    for (int i = n_n[1] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "仅显示最近的十五条微博" << endl;
                            break;
                        }
                        cout << "#微博ID：" << a[i].id << endl;
                        cout << "#发布者：" << a[i].name << endl;
                        cout << "#内容：" << a[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                else if (p == fsz[2]) {
                    for (int i = n_n[2] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "仅显示最近的十五条微博" << endl;
                            break;
                        }
                        cout << "#微博ID：" << b[i].id << endl;
                        cout << "#发布者：" << b[i].name << endl;
                        cout << "#内容：" << b[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                else if (p == fsz[3]) {
                    for (int i = n_n[3] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "仅显示最近的十五条微博" << endl;
                            break;
                        }
                        cout << "#微博ID：" << c[i].id << endl;
                        cout << "#发布者：" << c[i].name << endl;
                        cout << "#内容：" << c[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                _getch();
                cout << "1:继续查看" << endl;
                cout << "2:退出页面" << endl;
                cin >> f;
                system("cls");
            }
            cout << "**成功退出**" << endl;
            _getch();
            system("cls");
        }

    }
    cout << "成功退出微博" << endl;
    return 0;
}
int judg() {
    int t = 0;
    if (concern[1] == 1 || concern[2] == 1 || concern[3] == 1) {
        cout << "已经关注的用户有：" << endl;
        if (concern[1] == 1) cout << fsz[1] << endl, t = 1;
        if (concern[2] == 1) cout << fsz[2] << endl, t = 1;
        if (concern[3] == 1)  cout << fsz[3] << endl, t = 1;
        return 1;
    }
    if (t == 0) {
        cout << "暂时没有关注的用户" << endl;
        return 0;
    }
}