#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s = "helloworld";
    string sub_str;
    sub_str = s.substr(1,3);
    cout<<sub_str<<endl;
    return 0;
}
