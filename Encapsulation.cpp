#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee e;
  e.setSalary(50000);
  cout <<"salary is: " <<e.getSalary();
  return 0;
};