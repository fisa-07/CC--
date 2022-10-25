#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){
       real=0;
       img=0; 
    }
    complex(int real,int img){
        this->real = real;
        this->img = img;
    }
    complex operator+(complex c1);
    complex sub(complex c1);
    complex mul(complex c1);
    complex div(complex c1);
    void show(){
        cout<<real<<" + "<<"("<<img<<")"<<"i\n";
    }
};
complex complex::operator+(complex c1){
    complex ans;
    ans.real = this->real + c1.real;
    ans.img = this->img + c1.img;
    return ans;
}
complex complex::sub(complex c1){
    complex ans;
    ans.real = this->real - c1.real;
    ans.img = this->img - c1.img;
    return ans;
}
complex complex::mul(complex c1){
    complex ans;
    ans.real = (this->real*c1.real) - (this->img*c1.img);
    ans.img = (this->real*c1.img) + (this->img*c1.img);
    return ans;
}
complex complex::div(complex c1){
    complex ans;
    ans.real = ((this->real*c1.real) - (this->img*c1.img))/(c1.real*c1.real+c1.img*c1.img);
    ans.img = ((this->real*c1.img) + (this->img*c1.img))/(c1.real*c1.real+c1.img*c1.img);
    return ans;
}
int main(){
    complex c1(9,5);
    complex c2(4,2);
    complex ans;
    ans = c1+c2;
    cout<<"Addition ";
    ans.show();
    ans = c1.sub(c2);
    cout<<"Subtraction ";
    ans.show();
    ans = c1.mul(c2);
    cout<<"Multiplication ";
    ans.show();
    ans = c1.div(c2);
    cout<<"Divition ";
    ans.show();
    return 0;
}