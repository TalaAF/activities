#include <iostream>
#include <vector>
#include <string>
using namespace std;
// assignment
int n;
vector<string> v;

void recur(vector<string> arr) {
    if (arr.size()==n) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    if (arr.empty()) {
        arr.push_back("swimming");
        recur(arr);
        arr.pop_back();
        arr.push_back("running");
        recur(arr);
        arr.pop_back();
        arr.push_back("football");
        recur(arr);
        arr.pop_back();
    }
    else {
        if (arr.back() == "swimming") {
            arr.push_back("running");
            recur(arr);
            arr.pop_back();
            arr.push_back("football");
            recur(arr);
            arr.pop_back();
        }
        if (arr.back() == "running") {
            arr.push_back("swimming");
            recur(arr);
            arr.pop_back();
            arr.push_back("football");
            recur(arr);
            arr.pop_back();
        }
        if (arr.back() == "football") {
            arr.push_back("running");
            recur(arr);
            arr.pop_back();
            arr.push_back("swimming");
            recur(arr);
            arr.pop_back();
        }
    }
}

int main() {

 cin >> n;
    v.resize(n);
    recur({});

    return 0;
}