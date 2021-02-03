#include<iostream >

using namespace std;

int main (){
	
	int a = 1;
	cout <<"enter any even number:";
	for (; a<=100; a+=2 ){
		cout <<a<< " "; 
		
	}      
	
	
	
	
	int b=1; 
	cout << "enter any odd number:";
	for (; b<=100; b++) {
		if (b%2 ==0){
		cout <<b<< " ";}
	}
	return 0; 
	
}
