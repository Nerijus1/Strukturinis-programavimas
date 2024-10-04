#include <iostream>
using namespace std;
int main() {
    int a= 6;

    cout <<"iveskite skaiciu:";
scanf ("%d",&a);

    if (a==10) {
       cout <<"puiku"<<endl;
    }else if (a>=9) {
        cout <<"labai gerai"<<endl;
    }else if (a>=7) {
        cout <<"gerai"<<endl;
    }else if (a>=5) {
        cout <<"patenkinamai"<<endl;
    }else if (a<5) {
        cout <<"egzaminas neislaikytas"<<endl;
    }
    return 0;
}