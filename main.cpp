#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	int nA = 0,ind = -1;
	string str;
	ifstream file;
	file.open("in.txt");
	cout<<"Начало программы\n";
	while(!file.eof()){
		getline(file,str);
		while((ind = (int)str.find('a',ind+1)) != -1){
			nA++;
		}
		ind = -1;
	}
	cout<<"Число букв -a-: "<<nA<<endl;
	file.close();
}
