#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n*2-1;i++){
        for (int j = 1; j <= n*2-1;j++){
            if((i+j<=n*2 && i>=j) || (i<=j && i+j>=n*2)){
                cout << '*';
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}