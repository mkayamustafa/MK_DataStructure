#include <iostream>
using namespace std;
template<typename type>
class koordinat
{
public:
	type x, y;
public:
	koordinat(type xx, type yy)
	{
		x = xx;
		y = yy;
	}
	~koordinat();



};
int main()
{
	koordinat<double> *k1 = new koordinat<double>(3.0, 2.5);
	cout << k1->x << endl;
	cout << k1->y << endl;

	
	return 0;
}