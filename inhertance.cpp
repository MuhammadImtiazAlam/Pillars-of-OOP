#include <iostream>
using namespace std;

class father {
  protected:
    string srname="Alam";
};
class son1:father{
	string name="imtiaz";
	public:
		void show1(){
			cout<< name <<" "<< srname <<endl;
		}	
};
class son2:father{
	string name="Tanveer";
	public:
		void show2(){
			cout<< name <<" "<< srname <<endl;
		}	
};
int main() {
  son1 s1;
  s1.show1();
  son2 s2;
  s2.show2();
  return 0;
};