#include <iostream>
using namespace std;
int value = 10;
class Demo {
public:
static int value;
void show() {
int value = 30;
cout << "Local Value: " << value << endl;
cout << "Class Level: " << Demo::value << endl;
cout << "Global Value: " << ::value << endl;
}
};
int Demo::value = 20;
int main() {
Demo obj;
obj.show();
cout << "made by Mohit Kumar" << endl;
cout << "IT 2nd Shift" << endl;
return 0;
}