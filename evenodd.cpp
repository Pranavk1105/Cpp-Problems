#include <iostream>
using namespace std;
void evenodd(){
            int num;
            cout << "Please enter the number :";
            cin >> num ;
            if (num%2==0){
                        cout << num << " is even";
            }
            else
            cout << num << " is odd";
}
int main() 
{
            evenodd();
  return 0;
}