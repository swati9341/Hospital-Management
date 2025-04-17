#include<iostream>
#include<string>

using namespace std;
class Person{
public:
    int age;
    string name;
    string address;
    string email;
    long long PhoneNo;
     void inputPersonDetails(){
        cout<<"\n Enter age of the patient:";
        cin>>age;
        cout<<"\n Enter name of the patient:";
        cin>>name;
        cout<<"\n Enter address of the patient:";
        cin>>address;
        cout<<"\n Enter email of the patient:";
        cin>>email;
        cout<<"\n Enter phoneno of the patient:";
        cin>>PhoneNo;

    }
    void displayPersonDetails(){
        cout<<"\n Age:"<<age<<"\n Name: "<<name<<" \n Address: "<<address<<" \n PhoneNo "<<PhoneNo;
    }

};
class Disease{
public:
    string diseasename;
    void inputDisease(){
    cout<<"\n Enter the name of the disease:";
    cin>> diseasename;
    }
    void displayDisease(){
        cout<<"\n Disease :"<<diseasename;
    }
};
class Patient :public Person
{
public:
    Disease disease;
        string appointmentDate;
        string appointmentTime;

    void inputPatientDetails(){
    cout<<"\n  --- Enter the patient record ---";
    inputPersonDetails();
    disease.inputDisease();
    cout<<"Enter appointment date (dd/mm/yyyy):";
   cin>>appointmentDate;
    cout<<"Enter appointment time(hh:mm)";
    cin>>appointmentTime;
    } 
    void displayPatientDetails(){
    cout<<"\n--- Patient Information--";
    displayPersonDetails();
    cout<<"\n  Appointment Date:"<<appointmentDate;
    cout<<"\n  Appointment Time:"<<appointmentTime;
    }
    };

    class Doctor:public Person
    {
        public:
    string shiftTime;
          int doctorid;
          int roomno;

         void  Doctorassign(){
            cout<<"\n\n Doctor assigned to the patient";
            cout<<" \n Doctor id";
            cin>>doctorid;
            cout<<"\n  Room no";
            cin>>roomno;
            cout<<"\n ShiftTime:";
            cin>>shiftTime;
          }
          void displayDoctorDetails(){
            cout<<"\n ---Doctor Information---";
            cout<<"\n Doctor id:"<<doctorid;
            cout<<"\n Room no"<<roomno;
            cout<<"\n Time to meeet :"<< shiftTime;
          }

    };
    class Receptionist{
    public:
         void Receptionistwork(){
        Patient patient;
        Doctor doctor;
        patient.inputPatientDetails();
        doctor.Doctorassign();
        cout<<"\n\n=== Hospital Management Record ===";
        patient.displayPatientDetails();
        doctor.displayDoctorDetails();
        }
    };
int main(){
    Receptionist r;
    r.Receptionistwork();
return 0;
}


