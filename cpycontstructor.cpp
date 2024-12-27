#include <iostream>
using namespace std;
class sample{
            public:
            int id;
            sample(){}
            sample(int x){id = x;}
            sample(sample& t){id = t.id;}
            void display(){cout << "ID=" << id;}
};
int main() 
{
            sample obj1(10);
            obj1.display();
            cout << endl;

            sample obj2(obj1);
            obj2.display();

  return 0;
}