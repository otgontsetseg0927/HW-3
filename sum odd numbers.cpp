#include<iostream>
 
using namespace std;
 
int main(){
 	int i,n,  sum =0;
 	cout <<"enter odd number:";
 	cin>>i; 
 	
 	for (n =1; n<=i; n++){
	 
 	if( n % 2!= 0){
 		sum = sum + n; }
 		
		}

      cout << "sum of odd numbers are:"<<sum;






	return 0;
}
