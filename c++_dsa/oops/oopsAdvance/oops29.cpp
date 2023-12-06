#include<bits/stdc++.h>
using namespace std;
class CWH{
    protected:
        float rating;
        string title;
    public:
        CWH(string s,float rating){
            title=s;
            this->rating=rating;
        }
        virtual void show()=0;
        virtual ~CWH(){
            cout<<"the base is destroyed"<<endl;
        }
};
class CWHvideo:public CWH{
    private:
        float videolength;
    public:
    CWHvideo(string s,float rating,float vl):CWH(s,rating),videolength(vl){};
    void show() override{
        cout<<"THe video title is \" "<<title<<"\""<<endl;
        cout<<"The rating out of 5 star\'s is : "<<rating<<endl;
        cout<<"The video has an length of "<<videolength<<" minutes"<<endl;

    }
    ~CWHvideo(){
        cout<<"the video is destroyed"<<endl;
    }
};
class CWHtext:public CWH{
    private:
        int words;
    public:
    CWHtext(string s,float rating,int wc):CWH(s,rating),words(wc){};
    void show() override{
        cout<<"THe text tutorial has title \" "<<title<<" \" "<<endl;
        cout<<"The rating out of 5 star\'s is : "<<rating<<endl;
        cout<<"The article has an words count of "<<words<<endl;

    }
    ~CWHtext(){
        cout<<"the article is destroyed"<<endl;
    }
};
int main(){
    CWH** bptr=new CWH*[2];
    bptr[0]=new CWHvideo("django tutorial",4.78,5.45);
    bptr[1]=new CWHtext("pointers to derived class ",4.14,100);
    bptr[0]->show();
    bptr[1]->show();
    delete bptr[0];
    delete bptr[1];
    delete []bptr;
    return 0;
}