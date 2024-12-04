#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout << '*';//We can use * or j-to print numbers.
        }
        cout << endl;
    }
    return 0;
}