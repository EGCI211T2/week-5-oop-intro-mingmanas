#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

 s1.set_name("Amy"); s1.set_age(20);
 s2.set_name("James");
 s2.set_age(17);
 s1.get_age()>s2.get_age() ? s1.print_name():s2.print_name(); cout <<"is older";


  
 return 0;

    
  }
  
  


