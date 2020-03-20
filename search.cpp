#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

struct roomtype{ //structure เก็บตัวแปรทุกอย่างเกี่ยวกับห้อง
    string type[3];
    int roomnumber[24];
    int price[3];
    char status[24];
    int bookingNO[24];
};

struct guestinfo{ //structure เก็บตัวแปรทุกอย่างเกี่ยวกับลูกค้า
    string name;
    string email;
    int phonenumber;
    string checkindate;
    string checkoutdate;
    roomtype *roomdata;
};
void upper(string &everything){
    string up;
    for(int i=0;i<everything.size();i++){
        up+=toupper(everything[i]);
    }
    everything = up;
}
void check(vector<string> input,vector<string> name,vector<string> email,vector<string> checkindate,vector<string> checkoutdate,vector<int> allphone,vector<int> rnumber ){
    string namelink;
    int flag=0;
    if(input[0]=="NAME"){
        cout << "------------------------------" << "\n";
        for(int i;i<name.size();i++){
            namelink = name[i];
            upper(namelink);
            if(input[1]==namelink) {
                cout << name[i] ;
                flag=1;
            }
        }
        if(flag==0) cout << "Cannot found" << "\n";
        cout << "------------------------------" << "\n";
    }else if(input[0]=="DATE"){
        cout << "------------------------------" << "\n";
        for(int i=0;i<checkindate.size();i++){
            if(input[1]==checkindate[i] || input[1]==checkoutdate[i]){
                cout << name[i] << "\n";
            }
        }
        cout << "------------------------------" << "\n";
    }else if(input[0]=="ROOM"){
        cout << "------------------------------" << "\n";
        
            for(int j=0;j<rnumber.size();j++){

                if(stoi(input[1].c_str)==rnumber[j].c_str()){
                cout << name[j] << "\n";
            }}
        
        cout << "------------------------------" << "\n";
    }else if(input[0]=="EXIT"){
        
    }else cout << "Invalid command" << "\n";
}

int main(){
    int start=0;
    vector<string> allinput;
    string input1;
    roomtype room[3];
    guestinfo x1={"up","ffh@hotmail.com",02848484,"19/11/12","20/11/12",room};
    guestinfo x2={"ti","ff@hotmail.com",1111111,"19/11/12","20/11/12",room};
vector<guestinfo> people;
people.push_back(x1);
people.push_back(x2);
    vector<string> name,email,checkin,checkout;
    vector<int> rnumber,allphone;
    for(int i;i<people.size();i++){
        name.push_back(people[i].name);
        email.push_back(people[i].email);
        allphone.push_back(people[i].phonenumber);
        checkin.push_back(people[i].checkindate);
        checkout.push_back(people[i].checkoutdate);
        rnumber.push_back(people[i]->roomdata.roomnumber);
    }

    cout<<"Please input information :: ";
    getline(cin,input1);
    int end = input1.find_first_of(" ");
        while (end!=-1){
            allinput.push_back(input1.substr(start,end-start));
            start = end+1;
            end=input1.find_first_of(" ",start);
        }
        check(allinput,name,email,checkin,checkout,allphone,rnumber);
    
}
