#include<stdio.h>
#include<vector>
#include <conio.h>
#include<iostream>
using namespace std;
int id_s = 10;
int n = 1;
int n_n[10] = { 0,4,4,4 };
int o = 3;
char fsz[][10] = { " ","������","��Դ","����ǧ��" };
struct Weibo {
    string name;//��̬�ķ�����
    int id;//��̬ID
    string p;
    void get(int a, string b, string c) {
        id = a;
        p = b;
        name = c;
    }
};
struct Weibo a[20] = { {}, {fsz[1],1,"�����ҵĵ�һ��΢��" },{fsz[1],3,"�����ҵĵڶ���΢��"} ,{fsz[1],6,"�����ҵĵ�6��΢��"} };
struct Weibo b[20] = { {}, {fsz[2],4,"�����ҵĵ�һ��΢��" },{fsz[2],5,"wuwuwuuwuuw"} ,{fsz[2],8,"�����ҵĵ�3��΢��"} };
struct Weibo c[20] = { {}, {fsz[3],2,"�����ҵĵ�һ��΢��" },{fsz[3],7,"qiqiqiiqiqi"} ,{fsz[3],9,"�����ҵĵ�3��΢��"} };

struct Weibo d[20];
void getin_d() {
    cout << endl;
    cout << endl;
    string name_s;
    name_s = "�¼�߮";
    cout << "===============================\n\n";
    cout << "#΢��ID:" << id_s << "#" << endl;
    string p_s;
    cout << "#�û�:" << name_s << "#" << endl;
    cout << "*���ݣ�";cin >> p_s;cout << endl;
    cout << "===============================\n";
    d[n++].get(id_s, p_s, name_s);
    cout << "�ɹ����͵�*   " << name_s << "   *��΢��" << endl;
    cout << endl;
    id_s++;
}
int concern[10] = { 0 };




int main() {
    int judg();
    void getin_d();
    int flag = 0;
    cout << "-------------΢��-------------" << endl;
    cout << "------�����ط���������------" << endl;
    _getch();

    while (flag != 7) {
        cout << endl;
        cout << "---------------------------" << endl;
        cout << "1:��΢��" << endl << "2:�鿴�Լ���΢��" << endl;
        cout << "3:��������" << endl << "4:ȡ����ע" << endl << "5:��ע�û�" << endl;
        cout << "6:�鿴��ע�û�΢��" << endl << "7:�˳�΢��" << endl;
        cout << "---------------------------" << endl;
        cin >> flag;
        system("cls");
        if (flag == 1) {
            cout << "--------΢������ҳ��----------\n";
            getin_d();

            int w = 0;
            cout << "------------------------------" << endl;
            cout << "1:��������΢��" << endl;
            cout << "2:�˳�����ҳ" << endl;
            cout << "------------------------------" << endl;
            cin >> w;
            while (w != 1 && w != 2) {
                cout << "��������Чָ��:\n";
                cin >> w;
            }
            while (w == 1) {
                getin_d();

                cout << "------------------------------" << endl;
                cout << "1:��������΢��" << endl;
                cout << "2:�˳�����ҳ" << endl;
                cout << "------------------------------" << endl;
                cin >> w;
                while (w != 1 && w != 2) {
                    cout << "��������Чָ��:\n";
                    cin >> w;
                }
            }
            cout << "**�ɹ��˳�**" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 2) {
            system("cls");
            cout << "******�¼�߮��΢��******" << endl;
            int sum = 15;
            for (int i = n - 1;i >= 1;i--) {
                if (sum == 0) {
                    cout << "����������ʾ�����ʮ����΢��������" << endl;
                    break;
                }
                cout << endl;
                cout << "--------------------------" << endl;
                cout << "#΢��ID��" << d[i].id << "  #" << endl;
                cout << "#�����ߣ�" << d[i].name << "  #" << endl;
                cout << "#���ݣ�" << d[i].p << endl;
                cout << "--------------------------" << endl;
                sum--;
            }
            _getch();
            system("cls");
        }
        else if (flag == 3) {
            cout << "******��������******" << endl;
            cout << endl;
            int s = 15;
            for (int i = id_s - 1;i >= 1;i--) {
                cout << endl;
                if (s == 0) {
                    cout << "!!!����ʾ�����ʮ����΢��!!!" << endl;
                    _getch();
                    break;
                }
                for (int j4 = n - 1;j4 >= 1;j4--) {
                    if (d[j4].id == i) {
                        cout << "--------------------------" << endl;
                        cout << "#΢��ID��" << d[j4].id << " #" << endl;
                        cout << "#�����ߣ�" << d[j4].name << "  #" << endl;
                        cout << "#���ݣ�" << d[j4].p << endl;
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
                                cout << "#΢��ID��" << a[j1].id << "#" << endl;
                                cout << "#�����ߣ�" << a[j1].name << "#" << endl;
                                cout << "#���ݣ�" << a[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                            else if (i1 == 2 && b[j1].id == i) {
                                cout << "--------------------------" << endl;
                                cout << "#΢��ID��" << b[j1].id << "    #" << endl;
                                cout << "#�����ߣ�" << b[j1].name << "  #" << endl;
                                cout << "#���ݣ�" << b[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                            else if (i1 == 3 && c[j1].id == i) {
                                cout << "--------------------------" << endl;
                                cout << "#΢��ID��" << c[j1].id << "  #" << endl;
                                cout << "#�����ߣ�" << c[j1].name << "  #" << endl;
                                cout << "#���ݣ�" << c[j1].p << endl;
                                cout << "--------------------------" << endl;
                                s--;
                                break;
                            }
                        }
                    }
                }

            }
            cout << "---����Ϊ���͵���Ϣ---" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 4) {
            int f = 1;
            while (f == 1) {
                if (judg() == 0)break;
                cout << endl;
                string qq;
                cout << "��������Ҫȡ����ע���û�:";cin >> qq;cout << endl;
                if (qq == fsz[1] && concern[1] == 1) {
                    concern[1] = 0;
                    cout << "�ɹ�ȡ����ע:" << fsz[1] << endl;
                }
                else if (qq == fsz[2] && concern[2] == 1) {
                    concern[2] = 0;
                    cout << "�ɹ�ȡ����ע" << fsz[2] << endl;
                }
                else if (qq == fsz[3] && concern[3] == 1) {
                    concern[3] = 0;
                    cout << "�ɹ�ȡ����ע" << fsz[3] << endl;
                }
                else {
                    cout << "��������\n";
                }
                cout << "1:����ȡ����ע" << endl;
                cout << "2:�˳�����ҳ" << endl;
                cin >> f;
                while (f != 1 && f != 2) {
                    cout << "������������������:\n";
                    cin >> f;
                }
            }
            cout << endl;
            cout << "***�ɹ��˳�ȡ��ҳ��***" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 5) {
            int f = 1;
            while (f == 1) {
                judg();
                cout << "���Թ�ע���û���:" << endl;
                for (int i = 1;i <= o;i++) {
                    cout << i << ":" << fsz[i] << endl;
                }
                int q;
                cout << "��ѡ����Ҫ��ע���û�����:" << endl;
                cin >> q;
                while (q < 1 || q>o) {
                    cout << "��������Ч�û�:";cin >> q;cout << endl;
                }
                concern[q] = 1;
                cout << "��ע�ɹ�" << endl;
                cout << endl;
                cout << "1:������ע" << endl;
                cout << "2:�˳���עҳ��" << endl;
                cin >> f;
                while (f != 1 && f != 2) {
                    cout << "������������������:\n";
                    cin >> f;
                }
                system("cls");
            }
            cout << "**�ɹ��˳���עҳ��**" << endl;
            _getch();
            system("cls");
        }
        else if (flag == 6) {
            int f = 1;
            while (f == 1) {
                if (judg() == 0)break;
                string p;
                cout << "��ѡ����Ҫ�鿴���û�:";cin >> p;cout << endl;
                int s = 15;
                if (p == fsz[1]) {
                    for (int i = n_n[1] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "����ʾ�����ʮ����΢��" << endl;
                            break;
                        }
                        cout << "#΢��ID��" << a[i].id << endl;
                        cout << "#�����ߣ�" << a[i].name << endl;
                        cout << "#���ݣ�" << a[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                else if (p == fsz[2]) {
                    for (int i = n_n[2] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "����ʾ�����ʮ����΢��" << endl;
                            break;
                        }
                        cout << "#΢��ID��" << b[i].id << endl;
                        cout << "#�����ߣ�" << b[i].name << endl;
                        cout << "#���ݣ�" << b[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                else if (p == fsz[3]) {
                    for (int i = n_n[3] - 1;i >= 1;i--) {
                        if (s == 0) {
                            cout << "����ʾ�����ʮ����΢��" << endl;
                            break;
                        }
                        cout << "#΢��ID��" << c[i].id << endl;
                        cout << "#�����ߣ�" << c[i].name << endl;
                        cout << "#���ݣ�" << c[i].p << endl;
                        cout << "--------------------------" << endl;
                        s--;
                    }
                }
                _getch();
                cout << "1:�����鿴" << endl;
                cout << "2:�˳�ҳ��" << endl;
                cin >> f;
                system("cls");
            }
            cout << "**�ɹ��˳�**" << endl;
            _getch();
            system("cls");
        }

    }
    cout << "�ɹ��˳�΢��" << endl;
    return 0;
}
int judg() {
    int t = 0;
    if (concern[1] == 1 || concern[2] == 1 || concern[3] == 1) {
        cout << "�Ѿ���ע���û��У�" << endl;
        if (concern[1] == 1) cout << fsz[1] << endl, t = 1;
        if (concern[2] == 1) cout << fsz[2] << endl, t = 1;
        if (concern[3] == 1)  cout << fsz[3] << endl, t = 1;
        return 1;
    }
    if (t == 0) {
        cout << "��ʱû�й�ע���û�" << endl;
        return 0;
    }
}