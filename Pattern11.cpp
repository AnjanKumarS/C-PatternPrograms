#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 1; i <= n;i++){
        int num = 1;
        for (int j = 1; j <= n*2-1;j++){
            if(i+j>=n+1 && j-i<=n-1){
                cout << num;
                if(j<n){
                    num++;
                }
                else{
                    num--;
                }
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}