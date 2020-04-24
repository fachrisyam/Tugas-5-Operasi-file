#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream data;
	
	data.open("alpro2.txt", ios::out);
	data << "Saylkdfjsdlkfjlaskdfjelajar membuat file";
		
	data.close();

}
