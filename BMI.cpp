#include <iostream>

using namespace std;

int main(){
    float m;
    float h;
    float BMI;

    cout<<"The weight of the person is(kg): ";
    cin>>m;

    cout<<"The height of the person is(m): ";
    cin>>h;

    BMI=m/(h*h);
    cout<<"The BMI of this person is: "<<BMI;
    cout<<"  " <<"kilogram per meter squared";


    return 0;
}

