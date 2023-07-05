#include<iostream>
#include<cstring>
using namespace std;
class Vechile{
    private:
        char* Name;
        int price;
        char* Typeoffuel;
        int noofwheels;
        char* color;
        static int quantity;
    public:
        Vechile(char* name ,char *fuel ,char* color,int wheels,int price){
            cout<<"inside the vechile constructor "<<endl;
            this->Name=new char[100];
            this->Typeoffuel=new char[100]; 
            this->color=new char[100]; 
            this->price=price;
            strcpy(this->Name,name);
            strcpy(this->Typeoffuel,fuel);
            strcpy(this->color,color);
            this->noofwheels=wheels;
            quantity++;
        }
        void print(){
            cout<<endl;
            cout<<"[ Name = "<<this->Name<<" , ";
            cout<<" Fuel = "<<this->Typeoffuel<<" , ";
            cout<<" Colour = "<<this->color<<" , ";
            cout<<" Wheels = "<<this->noofwheels<<" , ";
            cout<<" Price = "<<this->price<<" ] "<<endl<<endl;
        }
        void moving(){
            cout<<"i can move back and forward being an vechile "<<endl;
        }
        void defense(){
            cout<<"i can be used in defence or in an exploartion unmaned mission to foster discoveries as well as \n advancement in technology "<<endl;
        }
        void Brake(){
            cout<<"I can be stopped at any movement by brakes"<<endl;
        }
        static int getcount(){
            return Vechile::quantity;
        }
        ~Vechile(){
            cout<<"inside vechile destructor "<<endl;
            delete []Name;
            delete []color;
            delete []Typeoffuel;
        }
};
int Vechile::quantity=0;
class Electricpowered{
    protected:
        int chargetime;
        char* batterytype;
        int powerbackup;
        static int count;
    public:
        Electricpowered(char* battery,int charge,int power){
            cout<<"inside the electricity constructor "<<endl;
            this->batterytype=new char[100];
            this->chargetime=charge;
            this->powerbackup=power;
            strcpy(this->batterytype,battery);
        }
        void print(){
            cout<<endl;
            cout<<"[ charging Time = "<<this->chargetime<<" , ";   
            cout<<" Battery Type = "<<this->batterytype<<" , ";   
            cout<<" Powerbackup = "<<this->powerbackup<<"  ]  "<<endl<<endl;   
        }
        void charging(){
            cout<<"increased to battery to 100%"<<endl;
            this->powerbackup=100;
        }
        void Saving(){
            cout<<"put on power saved mode to save the power "<<endl;
        }
        static int getcount(){
            return Electricpowered::count;
        }
        ~Electricpowered(){
            cout<<"inside the electic destructor "<<endl;
            delete []batterytype;
        }
};
int Electricpowered::count=0;
class Ev:private Vechile,public:Electricpowered{
    public:
        int range;
        int mileage;
        int topspeed;
        char* Brand;
    public:
        Ev(int mileage,int range,int topspeed,char* Brand){
            cout<<"finally inside Ev\'s constructor "<<endl;
            Brand=new char[100];
            this->mileage=mileage;
            this->range=range;
            this->topspeed=topspeed;
            strcpy(this->brand,Brand);
        }
        void print(){
            cout<<endl;
            cout<<"[ Brand = "<<this->brand<<" , ";
            cout<<" Mileage = "<<this->mileage<<" , ";
            cout<<" Top speed = "<<this->topspedd<<" ] "<<endl<<endl;
            Electricpowered::print();
            vechile::print();
        }

        ~Ev(){
            cout<<"inside Evs destructor "<<endl;
            delete []Brand;
        }
            



};

int main(){
    
}