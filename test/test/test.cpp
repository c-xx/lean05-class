#include <iostream>
#include <stdlib.h>
using namespace std;

// ����
class Coordiate {
public:
	int x;
	int y;
	void printX() {
		cout << x << endl;
	}
	void printY() {
		cout << y << endl;
	}
};


int main(void) {

	Coordiate coor; // ջ��ʵ���� ������Ҫ�����ͷ�
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();


	Coordiate *p = new Coordiate;// ����ʵ��������Ҫ�ͷ��ڴ�
	if (NULL == p)
	{
		return 0;
	}
	p->x = 100;
	p->y = 200;

	p->printX();
	p->printY();

	delete p;
	p = NULL;

	system("pause");
	return 0;
}