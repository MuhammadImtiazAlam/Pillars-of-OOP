#include <iostream>
using namespace std;

void myinfo(string name) {
	cout<<"my name is " <<name <<endl;
};
void myinfo(int age) {
	cout<<"my age is " <<age <<endl;
};
void myinfo(double salary) {
	cout<<"my salary is " <<salary <<endl;
};

int main() {
  myinfo("Imtiaz");
  myinfo(23);
  myinfo(40000.0);
  return 0;
};