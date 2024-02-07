#include <iostream>
using namespace std;

class student{
private:
  long id;
  int age;
  string name;

public:
   void set_age(int a=0)
   int get_age();
   void set_name(string="Yme");
    void print_name();
    void print_all();
};
