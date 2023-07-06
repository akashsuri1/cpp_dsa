#include<iostream>
#include<math.h>
using namespace std;
class Vector{
    public:
        int x;
        int y;
        int z;
    public:
        Vector(int x,int y,int z){
            this->x=x;
            this->y=y;
            this->z=z;
        }
        void operator() (){
            cout<<this->x<<"i + "<<this->y<<"j + "<<this->z<<" k"<<endl;
        }
        Vector operator+(Vector& obj){
            Vector ans(this->x+obj.x,this->y+obj.y,this->z+obj.z);
            return ans;
        }
        //so we have overloaded the plus operator here by givin it an new meaning 
        Vector operator-(Vector& obj){
            Vector ans(this->x-obj.x,this->y-obj.y,this->z-obj.z);
            return ans;
        }
        //this is used to represent that it postfix operator 
        Vector operator ++(int){
            Vector ans(++(this->x),++(this->y),++(this->z));
            return ans;
        }
        Vector operator*(int a){
            Vector ans(this->x*a,this->y*a,this->z*a);
            return ans;
        }
        int operator*(Vector& obj){
            return ((this->x)*(obj.x))+ (this->y)*obj.y+ (this->z)*obj.z;
        }
        Vector operator^(Vector &obj){
            int ansx=this->y*obj.z-this->z*obj.y;
            int ansy=this->x*obj.z-this->z*obj.x;
            int ansz=this->x*obj.y-this->y*obj.x;
            Vector ans(ansx,-ansy,ansz);
            return ans;
        }
        float operator[](int x){
            return sqrt(pow(this->x,2)+pow(this->y,2)+pow(this->z,2));
        }
        //so this way we can overload any operator at the compile time or provide the already existing operator an new form which will help us to do some required function or custom work using this operator 
        //almost all operator can be overloaded except sizeof(),typeid(),terniary?:,scope resolution :: ,member function access that is dot operator 
        //here the catch is that to overload any operator we have to see it an binary or unary operator
        //operator overloading is done for binary ,unary or by friend function
        //here the key is that by using virtual function early or late binding also happens 
        //if we have overloaded + then we have to specify the input argument also but in case of unary no input argument here
        //a+b a points to current object for which function is called and b points to the input argument
        //synatx is return type operator(operator symbol)(input argument){}  
};
int main(){
    int x,y,z;
    cout<<"Enter the vector A ";
    cin>>x>>y>>z;
    Vector A(x,y,z);
    cout<<"Enter the vector B ";
    cin>>x>>y>>z;
    Vector B(x,y,z);
    A();
    B();
    Vector add=A+B;
    add();
    Vector subtract=A-B;
    subtract();
    Vector multiply=A*2;
    multiply();
    cout<<"The scaler product : "<<A*B<<endl;
    Vector product=A^B;
    product();
    Vector inc=A++;
    inc();
    cout<<"THe value of A Modulus is "<<A[1]<<endl;
    return 0;
}