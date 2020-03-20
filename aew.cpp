#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main(){                                    
   
    vector<string> v_name;
    
    int small_room[]={101,102,103,201,202,203,301,302,303,401,402,403};
    int big_room[]={113,213,313,413};
    int double_bed[]={111,112,211,212,311,312,411,412};
    string name;
    srand(time(0));
    int number_room,  room_price, num_day, type_room;
    
    /*-----------------------------------------------
      ถามชื่อ
      ถามขนาดห้อง
      เลือก หมายเลขห้อง
      พักกี่วัน
      แสดงรายละเอียด
      ลองรันดูก่อนได้นะ
    ------------------------------------------------
    */
    cout << "What is your name??   ";
    getline(cin,name); 
    cout<< "What kind of room do you need????  \n";
    cout<<"-------------------------------------------------------------\n";
    cout<< "1.SMALL ROOM COST 1,000 BATH\n";
    cout<< "2.DOUBLE BED COST 1,500 BATH\n";
    cout<< "3.BIG ROOM   COST 2,000 BATH\n";
    cout<<"-------------------------------------------------------------\n";

    cout<< "Please enter numbers : "; //ให้เลือกหมายเลขจากด้านบน
    cin >>type_room;
  
   /*------------------------------------------
    ตั้งแต่ตรงนี้ไปคือการแสดงมายเลขห้อง
  +++++++++++++++++++++++++++++++++++++++++++++ */

    if(type_room==1){ room_price=1000; //ถ้าเลือกหมายเลข 1 คือห้อง small room********************
        cout<<"--------------------------------------\n";
        cout<<"  SMALL ROOM COST 1,000 BATH\n";
        cout<<"--------------------------------------\n";
        cout<<"  1t floor \n"; 
        cout<<"--------------------------------------\n";
    
        for(int i =0 ; i< 12; i++){ //ลูปแสดงผังหมายเลขห้อง จะแสดงแต่เลขห้องของ small room 

            cout<<"|        "<<small_room[i] <<"       |       "<<"NO" <<"        |\n";
            cout<<"--------------------------------------\n";

            if(small_room[i]==103){
                cout<<"2nd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(small_room[i]==203){
                cout<<"3rd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(small_room[i]==303){
                cout<<"4th floor \n"; 
                cout<<"--------------------------------------\n";
    }
    }
    }else if(type_room==2){ room_price=1500; //ถ้าเลือกหมายเลข 2 คือห้อง bouble bed*****************************

        cout<<"--------------------------------------\n";
        cout<<"  DOUBLE BED COST 1,500 BATH\n";
        cout<<"--------------------------------------\n";
        cout<<"1t floor \n"; 
        cout<<"--------------------------------------\n";
    
        for(int i =0 ; i< 8; i++){ //ลูปแสดงผังหมายเลขห้อง จะแสดงแต่เลขห้องของ double room
    
            cout<<"|        "<<"No " <<"       |      "<<double_bed[i] <<"        |\n";
            cout<<"--------------------------------------\n";

            if(double_bed[i]==112){
                cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
                cout<<"--------------------------------------\n";    
                cout<<"2nd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(double_bed[i]==212){
                cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
                cout<<"--------------------------------------\n";
                cout<<"3rd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(double_bed[i]==312){
                cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
                cout<<"--------------------------------------\n";
                cout<<"4th floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(double_bed[i]==412){
                cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
                cout<<"--------------------------------------\n";
    }
    }

    }else {room_price=2000; //ถ้าเลือกหมายเลข 3 คือห้อง big room***************************
    
        cout<<"--------------------------------------\n";
        cout<<"  BIG ROOM   COST 2,000 BATH\n";
        cout<<"--------------------------------------\n";
        cout<<"1t floor \n"; 
        cout<<"--------------------------------------\n";
    
        for(int i =0 ; i< 4; i++){//ลูปแสดงผังหมายเลขห้อง จะแสดงแต่เลขห้องของ big room
            cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
            cout<<"--------------------------------------\n";
            cout<<"|        "<<"No " <<"       |      "<<"NO " <<"        |\n";
            cout<<"--------------------------------------\n";
            cout<<"|        "<<"No " <<"       |      "<<big_room[i] <<"        |\n";
            cout<<"--------------------------------------\n";

            if(big_room[i] ==113){ 
                cout<<"2nd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(big_room[i] ==213) {
   
                cout<<"3rd floor \n"; 
                cout<<"--------------------------------------\n";
    }
            if(big_room[i] ==313){ 
  
                cout<<"4th floor \n"; 
                cout<<"--------------------------------------\n";
    }
    } 
 /*---------------------------------------------------------------------
   ตั้งแต่ตรงนี้ไปจะถาม
   เลือกห้องเลขอะไร
   พักกี่คืน
 -----------------------------------------------------------------------*/
    
     }
    cout<<"-------------------------------------------------------------\n";
    cout<<"\nPlease enter number room : ";
    cin>>number_room;
   

    cout<<"-------------------------------------------------------------\n";
    cout<< "How many days do you want to rest??  ";
    cin >>num_day;
    cout<<"-------------------------------------------------------------\n";

/*---------------------------------------------------------------------
   ตั้งแต่ตรงนี้ไปจะแสดงรายละเอียดทั้งหมด
 -----------------------------------------------------------------------*/
    


    cout<<"\n\n\n\n-------------------------------------------------------------\n";
    cout<<"\t\t\t***GUEST INFORMATION***\n"; 
    cout<<"-------------------------------------------------------------\n";

    cout<<"\nNAME :  "<<info.name <<"\t\t\tBooking Number : "<<bookingNum;

    cout<<"\n\nEmail : "<<info.email<<"\t\t\tTel : "<<info.phonenumber;
    
    cout<<"Number of room : "<<roomNo<<"   [ ";
    for(int i=0; i<roomNo ; i++) {cout<<slroom[i]<<" ";} 
    cout<<"]"  
    cout<<"NUMBER DAY : "<<Numofday ;
    cout<<"\t\tTOTAL PRICE : "<<totalprice <<" ฿\n";
    
    
    
    cout<<"\t\tCLEANING STATUS : ";
        int Clean= rand()%2;
            if(Clean<=0) cout<<"YES\n";
            else{cout<<"NO\n";}
    cout<<"-------------------------------------------------------------\n";
            return 0;
}
