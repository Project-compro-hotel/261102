#include "hotel.h"

int main() {
    srand(time(0));
    int date[32][13],year[100],para1=1,para2=1;
    roomtype room;
    guestinfo info;
    vector<guestinfo> roomstatus;
    //ตั้งค่าชนิดของห้องและราคาห้องทั้งสามชนิด
    room.type[0]="Standard"; room.price[0]=1000;
    room.type[1]="Twin bed"; room.price[1]=1500;
    room.type[2]="Deluxe";   room.price[2]=2000;
    //ตั้งค่าเลขห้อง โดยมีเงื่อนไขดังนี้ เลขห้องมี4ตัว 1101 เรียงจากซ้ายไปขวา
    //1 ตัวแรกคือชั้นของห้อง
    //1 ตัวที่สองคือชนิดของห้องโดย (1=standard,2=twinbed,3=deluxe)
    //01 คือเลขของห้อง
    //เช่น ห้อง deluxe ชั้น3 -> 3301 | ห้อง twinbed ชั้น4 ห้องที่2 -> 4202
    for(int i=0;i<4;i++){ //ลูปบันทึกเลขห้องทั้งหมดใส่ใน room.roomnumber
        for(int j=0;j<6;j++) {
            if(j==3){
                para1++;
                para2=1;
            }
            if(j==5){
                para1++;
                para2=1;
            }
            room.roomnumber[j+(i*6)]=((i+1)*1000)+(para1*100)+para2;
            para2++;
        }
        para1=1;
        para2=1;
    }
    //ตัวเริ่มโปรแกรม
    if(checkuser()==1){ //ถ้าcheckuser == 1 จะเข้าสู่เมนูของลูกค้า
        if(guestpart()==1){

        }else{
            booking(room,info,roomstatus);
        }
    }else{ //checkuser==0 จะเข้าสู่เมนูของพนักงาน
        for(int i=0;i<4;i++){ //ลูปให้ใส่ username,password ได้ไม่เกิน 3 ครั้ง
            if(receppart()==1){
                cout << "Welcome!";
                break;
            }
            else{
                if(i==3){
                    cout << "\nAccess deny!"; //ถ้าใส่ username,password ผิดเกิน3ครั้งจะจบโปรแกรม
                    break;
                }else{
                    cout << "\nInvalid username or password";
                    cout << "\nYou have " << 3-i << " chance to login\n";
                }
            }
        }
    }


}
