#include <iostream>
#include <stdlib.h>
using namespace std;

// 坐标
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

	Coordiate coor; // 栈中实例化 ，不必要关心释放
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();


	Coordiate *p = new Coordiate;// 堆上实例化，需要释放内存
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