#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout<<"Masukkan nilai : ";
    cin>>nilai;
    if(nilai>=90){
        cout<<"nilai kamu A";
        
    }else if(nilai>=80){
        cout<<"nilai kamu B";
    }else if(nilai>=70){
        cout<<"nilai kamu C";
    }else{
        cout<<"nilai kamu D";
    }

    system("pause");
    return 0;
}
