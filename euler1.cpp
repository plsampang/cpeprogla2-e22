#include<iostream> 
#include<cmath>
#include<fstream>
using namespace std; 

 
int main(){ 
   	ifstream f("input.txt"); 
    int fnum=0, sum=0; 
    
	f>>fnum;
    for(int x = 3; x < fnum; x++){
		if (x%3 == 0 || x%5 == 0){
			sum +=x;	
		}
	}
	 cout<<sum<<endl; 
    system("pause > 0");
}   
