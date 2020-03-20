#include<iostream>
#include<string>
using namespace std;

	


int main(){
	int N,sum=0;
	string R;
	
	while(1){
	cout<< "room : ";
	cin>>R;
	cout<<"\n";
	cout<<"amount : ";
	cin>>N;
	cout<<"\n";
		if(R=="s"||R=="m"||R=="l"){
			if(R=="s"){
				for(int i=0; i<N;i++){
				sum = sum + 1000;
				}
			}
			else if(R=="m"){
				for(int i=0; i<N;i++){
					sum = sum + 1500;
				}
			}
			else if(R=="l"){
				for(int i=0; i<N;i++){
					sum = sum + 1000;
				}
			}
		cout<<"totel : "<<sum<<"\n";
		}
		else if(R=="exit") break;
		else{
            cout << "Invilid command.\n" ;
        }
	}
	
	

	
}