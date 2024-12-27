#include <iostream>
using namespace std;
class abc{
            public:
            int id;
            abc(){
                        cout << "Default constructor called" << endl;
                        id=-1;
            }
            abc(int x)
            {
                        cout << "Parameterized constructor called" << endl;
                        id=x;
            }
};
int main() 
{
            abc obj;
            abc obj1(21);
  return 0;
}
