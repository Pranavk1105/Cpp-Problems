#include <iostream>
using namespace std;
class ABC{
            string g;
            public:
            void setname(string name){g = name;}
            void printname() {cout << "My name is "<< g;}
};
int main() 
{
            ABC obj1;
            obj1.setname("Pranav");
            obj1.printname();
  return 0;
}