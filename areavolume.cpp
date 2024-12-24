#include <iostream>
using namespace std;
class areavolume{
            public:
            int area1 , volume1 , a;
            void area(){
                        cout << "Please enter length of room: ";
            cin >> a;
                        area1 = 6 * a * a;
                        cout << "surface area of room: " << area1 << endl;
            }
            void volume(){
                        cout << "Please enter length of room: ";
            cin >> a;
                        volume1 = a * a * a;
                        cout << "Volume of room is: " << volume1 << endl;
            }
};
int main() 
{
            areavolume obj1;
            obj1.area();
            obj1.volume();
  return 0;
}