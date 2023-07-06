#include<iostream>
using namespace std;
class Fraction{
    private:
        int x;
        int y;
        Fraction operator+(Fraction& obj){
            Fraction ans(obj.y*this->x+obj.x*this->y,obj.y*this->y);
            return ans;
        }
        Fraction operator-(Fraction& obj){
            Fraction ans(obj.y*this->x-obj.x*this->y,obj.y*this->y);
            return ans;
        }
        Fraction operator*(Fraction& obj){
            Fraction ans(obj.x*this->x,y*this->y);
            return ans;
        }
        Fraction operator/(Fraction& obj){
            Fraction ans(obj.y*this->x,x*this->y);
            return ans;
        }
    public:
        Fraction(int x,int y){
            this->x=x;
            this->y=y;
        };
        void operator() (){
            cout<<this->x<<"/"<<this->y<<endl;

        }
        Fraction Add(Fraction &obj){
            Fraction obj3=(*this)+obj;
            return obj3;
        }
        Fraction multiply(Fraction &obj){
            Fraction obj3=(*this)*obj;
            return obj3;
        }
        Fraction subtract(Fraction &obj){
            Fraction obj3=(*this)-obj;
            return obj3;
        }
        Fraction Divide(Fraction &obj){
            Fraction obj3=(*this)/obj;
            return obj3;
        }
};
int main(){
    Fraction A(2,3);
    Fraction B(4,5);
    A();
    B();
    Fraction C=A.Add(B);
    C();
    C=A.subtract(B);
    C();
    C=A.multiply(B);
    C();
    C=A.Divide(B);
    Fraction E(3,2);
    C();
    Fraction D=(A.Add(B)).Add(E);
    D();
    return 0;
    //so this is what is operator overloading is 
}
//this is abstraction we have hidden the details to implementation but have kept the important information required for the working as public show we have used abstraction here
//to take more no of argument it is defined explicitly as non member function outside 
//abstraction means implementation hiding means that we show only what is required and hide the details
//this is different from encaptulasation which is just mixing data members and methods 
//by implementation hiding we can have the leverage to show only ehat is required and not what is happening in the background
//by abstraction no only is able to change our code and increased security and code reuability it happens through access specifier
//or by header file we can only access the granted information like function of header file
//like we use pow but we dont know its underlying alogorithim
//abstraction cane be achieved easily by access specifier mark those as public which can be shown to the outside world and those where the implementation is taking place is marked as private;