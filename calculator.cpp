#include <iostream>
using namespace std;
int main() {
            int a , b , c;
            cout << "Enter first number :" ;
            cin >> a;
            cout << "Enter second number :";
            cin >> b;
            cout <<" 1. add \n 2. sub \n 3. Multiply \n 4. divide \n Enter you choice:  ";
            cin >> c;
            if (c==1){
                        cout << "answer is" <<  a+b;
            }
            else if (c==2){
                        cout << "answer is " << a-b;
            }
            else if (c==3){
                        cout << "answer is " << a*b;
            }
            else if (c==4){
                        cout << "answer is " << a/b;
            }
            else{
                        cout << "enter valid numbers";
            }

  return 0;
}