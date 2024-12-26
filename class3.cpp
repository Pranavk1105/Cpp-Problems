#include <iostream>
using namespace std;
class outside_class{
            public:
            string g;
            int id;
            void printname();
            void printid(){cout << " id is: " << id;}

};
void outside_class::printname()
{
            cout << "Name is: " << g;
}
int main() 
{
            outside_class obj1;
            obj1.g = "Pranav";
            obj1.id = 16;
            obj1.printname();
            cout << endl;
            obj1.printid();
  return 0;
}