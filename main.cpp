#include <iostream>
#include <vector>
using namespace std;

template<typename K>
class cordinates
{
public:
	K x;
	K y;
	cordinates(K x, K y);
};

template<typename K>
cordinates<K>::cordinates(K x, K y)
{
	this->x = x;
	this->y = y;
}
int main()
{
	cordinates<double> G(10.4,1.4);
	cout << G.x << endl;
	cout << G.y << endl;
	cordinates<int> H(15.5, 20.4);
	cout << H.x << endl;
	cout << H.y << endl;


	getchar();
	return 54354;
}