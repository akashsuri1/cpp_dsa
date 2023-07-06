#include<iostream>
#include<cstring>
using namespace std;
//this is an example of multiple inheritance using more than one base class and call of parametrized constructor in the base class
class Vechile{
    //these private variable are no inherited while these other function are inherites as private memeber cannot be accessed outside the inherited class   
    private:
        char* Name;
        int price;
        char* Typeoffuel;
        int noofwheels;
        char* color;
        static int quantity;
    public:
        int getPrice(){
            return this->price;
        }
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
            cout<<" Price = "<<this->price<<"Rs ] "<<endl<<endl;
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
            count++;
        }
        void print(){
            cout<<endl;
            cout<<"[ charging Time = "<<this->chargetime<<" Minutes , ";   
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
class Ev:private Vechile,public Electricpowered{
    public:
        int range;
        int mileage;
        int topspeed;
        char* Brand;
        char* transmission;
    public:
        //this is explicit envokation of base class constructor 
        Ev(char* name,char* color,int wheels,int price,int charge,int power,int mileage,int range,int topspeed,char* transmission,char* Brand):Vechile(name,(char *)"Electricity",color,wheels,price),Electricpowered((char *)"Lithium-ion Battery",charge,power){
            cout<<"finally inside Ev\'s constructor "<<endl;
            //no memory allocated hence therfore it is an segmentation fault 
            this->transmission=new char[100];
            this->Brand=new char[100];
            strcpy(this->transmission,transmission);
            strcpy(this->Brand,Brand);
            this->mileage=mileage;
            this->range=range;
            this->topspeed=topspeed;
        }
        void print(){
            cout<<endl;
            cout<<"[ Brand = "<<this->Brand<<" Hours , ";
            cout<<" Mileage = "<<this->mileage<<" Km , ";
            cout<<" Transmission = "<<this->mileage<<"  , ";
            cout<<" Top speed = "<<this->topspeed<<" Km ] "<<endl<<endl;
            //this is used to remove inheritance ambiquity
            Electricpowered::print();
            Vechile::print();
        }
        void Basicoperation(){
            this->moving();
            this->defense();
            this->Brake();
        }
        void getdata(){
            //this helps to sepearte inheritance ambiquity"
            cout<<"The no of vechiles  = "<<this->Vechile::getcount()<<endl;
            cout<<"The no of Electric-vechiles  = "<<this->Electricpowered::getcount()<<endl;
        }
        void Taxsaving(){
            cout<<"i help to decrase the gst on your family and ease pressure "<<endl;
        }
        float gettax(){
            int price=this->getPrice();
            return price*5/100;
        }
        ~Ev(){
            cout<<"inside Evs destructor "<<endl;
            delete []Brand;
            delete []transmission;
        }
};
int main(){
    char name[100];
    cout<<"Please enter the name of vechile = ";
    cin.getline(name,100);
    char color[100];
    cout<<"Please enter the color of your vechile = ";
    cin.getline(color,100);
    int wheels,price,charge,power,mileage,range,top;
    cout<<"Enter the no of wheels = ";
    cin>>wheels;
    cout<<"Enter the Base price = ";
    cin>>price;
    cout<<"Enter the time taken to charge Minutes = ";
    cin>>charge;
    cout<<"Enter the power backup at \"this\" time = ";
    cin>>power;
    cout<<"Enter the mileage of Vechile = ";
    cin>>mileage;
    cout<<"Enter the range it can go on in an \"single\" Full charge = ";
    cin>>range;
    cout<<"Enter the Top speed of vechile = ";
    cin>>top;
    cin.ignore();
    char trans[100];
    cout<<"Please enter the Transmission = ";
    cin.getline(trans,100);
    char brand[100];
    cout<<"Enter the brand of the Vechile = ";
    cin.getline(brand,100);
    Ev* obj1=new Ev(name,color,wheels,price,charge,power,mileage,range,top,trans,brand);
    //so here we are performing some basic operation and accessing the print of inherited class by scope resolution operators to remove ambiquity 
    obj1->Basicoperation();
    obj1->Electricpowered::print();
    obj1->Saving();
    obj1->charging();
    //we have changed it value so we will recheck
    obj1->Electricpowered::print();
    obj1->getdata();
    obj1->Taxsaving();
    cout<<"THE tax on the purchase of this vechile was "<<obj1->gettax()<<endl;
    cout<<"Final price = "<<obj1->gettax()+price<<endl;
    delete obj1;
    return 0;
    //the obj1 is dynamically allocated so we have to manually call the destructor 
}
//the call of constructor is from derived to base class
//the execution of constructor is from base to derived class
//the execution of destructor is from derived to base class
//here the vechile is first base class so first it constructor is called then the base class constructor is called