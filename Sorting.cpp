#include <iostream>
#include <vector>
#include <list>
using namespace std;
list<int> lst = {5, 3, 8, 1, 2};
int main() {
    for (auto it1 = lst.begin(); it1 != lst.end(); ++it1) {
        for (auto it2 = next(it1); it2 != lst.end(); ++it2) {
            if (*it1 > *it2) {
                swap(*it1, *it2);
            }
        }
    }
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
