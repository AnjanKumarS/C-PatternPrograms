#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n*2-1 ;i++){
        for (int j = 1; j <= n*2-1;j++){
            if(i+j==n+1 ||
            
            i-j == n-1 || i+j == n*3-1 || j-i == n-1){
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