// #include <iostream>
// using namespace std;
// int main() 
// {
//             int* pnt = new int;
//             *pnt = 5;
//             cout << *pnt << endl;
//             delete pnt;
//             cout << *pnt;
//             return 0;
// }

#include <iostream>
using namespace std;
int main() 
{
            int* ptr;
            ptr = new int;
            *ptr = 10;
            cout << "Address: "<< ptr << endl;
            cout << "Value: " << *ptr;
  return 0;
}