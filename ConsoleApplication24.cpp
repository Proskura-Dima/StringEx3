#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string mains;
    vector <string> vec;
    getline(cin, mains);
    int a=0,j=0;
    for (int i = 0; i < mains.size();i++) {
        if (mains.at(i) == ' '|| i== mains.size()-1) {
            string pr = "";
            for (j = a; j <= i; j++) {
                pr.push_back(mains.at(j));
            }
            a = i+1;
            vec.push_back(pr);
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
    return 0;
}