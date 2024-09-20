#include <iostream>
using namespace std;
class abstract{
	private:
		int a, b;
		public:
			void setval(int x, int y)
			{
				a=x;
				b=y;
			}
			void disp()
			{
			cout<< "a= " <<a <<endl;
			cout<< "b= " <<b <<endl;
			}
};
int main() {
	abstract ex;
	ex.setval(11,12);
	ex.disp();
	return 0;
};