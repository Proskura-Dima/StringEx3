#include<iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    string mains,APi;
    int a = 0, j = 0, max = 0;
    vector <string> vec;
    /*getline(cin, mains);
    
    for (int i = 0; i < mains.size(); i++) {
        if (mains.at(i) == ' ' || i == mains.size() - 1) {
            string pr = "";
            for (j = a; j <= i; j++) {
                pr.push_back(mains.at(j));
            }
            a = i + 1;
            vec.push_back(pr);
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        if (vec.at(i).size() > vec.at(max).size()) {
            max = i;
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
    cout << vec.at(max)<<endl;*/
    getline(cin, APi);
    bool bAPI=true;
    int pointc=0;
    for (int i = 0; i < APi.size(); i++) {
        if (APi.at(i) == '.' || i == APi.size() - 1) {
            string pr = "";
            for (j = a; j <= i; j++) {
                pr.push_back(APi.at(j));
            }
            a = i + 1;
            if (stoi(pr) < 0 || stoi(pr) > 256) {
                bAPI = false;
                break;
            }
            pointc++;
        }
    }
    if(bAPI&&pointc==4) {
        cout << "correct" << endl;
    }else {
        cout << "not correct" << endl;
    }
    return 0;
}
