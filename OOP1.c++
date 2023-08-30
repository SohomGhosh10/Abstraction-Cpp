#include<iostream>
using namespace std;

class Pattern{
public:
    void print();
};

class Pattern1 : public Pattern{
public:
    void print(){
        int n;
        cin >> n;
        for(int i = 1; i < n ; i++){
            for(int j = 1 ; j <= i; j++){
                cout << "*";
            }
        cout << endl;
        }
    }
};

class Pattern2 : public Pattern{
public:
    void print(){
        int n;
        cin >> n;
        for(int i = n; i >= 1 ; i--){
            for(int j = 1 ; j <= i; j++){
                cout << "*";
            }
        cout << endl;
        }
    }
};

int main(){
    Pattern1().print();
    Pattern2().print();

    return 0;
}