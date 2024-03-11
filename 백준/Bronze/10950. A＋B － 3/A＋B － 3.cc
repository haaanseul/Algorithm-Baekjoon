#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    int a, b;
    vector<int> v;
    
    for (int i=0; i < cnt; i++){
        cin >> a >> b;
        v.push_back(a+b);
    }
    
    for (auto iter=begin(v); iter != end(v); iter++){
        cout << *iter << endl;
    }

    return 0;
}