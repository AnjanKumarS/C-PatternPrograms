#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter numbers : ";
    cin >> n;
    for (int i = 0; i < n;i++){
        char a = 'A';
        for (int j = 0; j < n;j++){
            cout << a++;
        }
        cout << endl;
    }
    return 0;
}