#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n ;
    for(int i=1; i <=n ; i+=2){
        for(int j =n; j >= i+1 ; j-=2){
        cout << " " ; 
        }
        for(int j=1 ; j <=i ; j++ ){
            cout <<"*";
        }
        for(int j =1 ; j<= n - i ; j++ ){
            cout << " ";
        }
        for(int j=1 ; j <=i ; j++ ){
            cout <<"*";
        }
        cout <<"\n";
    }
    for(int i =n-2; i>=1; i-=2){
        for(int j =n-2 ; j>=i ; j -=2){
            cout << " "; 
        }
        for(int j =1 ;j <=i ; j++){
            cout << "*" ; 
        }
        for(int j=1; j <= n-i ; j++){
            cout << " ";
        }
        for(int j =1 ;j <=i ; j++){
            cout << "*" ; 
        }
        cout << "\n";
    }
}
//100of100