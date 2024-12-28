#include <iostream>
using namespace std;
class Student{
            public: 
            int rno;
            char name[50];
            double fee;
            Student();
            void display();
};
Student::Student() {
            cout << "Enter roll no: ";
            cin >> rno;
            cout << "Enter the name: ";
            cin >> name;
            cout <<"Enter the fee: ";
            cin >> fee;
}
void Student::display()
{
            cout << endl << rno << '\t' << name << '\t' << fee;
}
int main(){
            Student s;
            s.display();
            return 0;
}