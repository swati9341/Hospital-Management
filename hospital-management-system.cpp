#include<iostream>
#include<string>
using namespace std;
class person{
public:
    int age;
    string name;
    string address;
    string email;
    int phoneno;
     void personinfo(){
        cout<<"\n enter age of the patient";
        cin>>age;
        cout<<"\n enter name of the patient";
        cin>>name;
        cout<<"\n enter address of the patient:";
        cin>>address;
        cout<<"\n enter email of the patient";
        cin>>email;
        cout<<"\n enter phoneno of the patient";
        cin>>phoneno;

    }
    void display(){
        cout<<"\n age:"<<age<<"\n name: "<<name<<" \n address: "<<address<<" \n phoneno "<<phoneno;
    }

};
class Disease{
public:
    string disease;
    void getdiseaseinfo(){
    cout<<"\n enter the name of the disease:";
    cin>> disease;
    }
    void showdisease(){
        cout<<"\n disease :"<<disease;
    }
};
class patient :public person,Disease{
public:
    patient(){
    cout<<"\n enter the patient record:";
    }
    };
    class Availabeon{
    public:
        double data;
        double time;
        string
    };
    class Doctor{
    };
int main(){
    patient p;
person p1;
p1.personinfo();

Disease d;
d.getdiseaseinfo();
p1.display();
d.showdisease();

return 0;
}
