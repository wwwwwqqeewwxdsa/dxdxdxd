#include <iostream>
using namespace std;

int main(){
	const int max_lenght = 17;
	char imie_nazwisko[5];
		cout<<"Podaj imie i nazwisko :";
		cin.getline(imie_nazwisko,max_lenght);
		
	{
		
	
		cout<<"Pozycja spacji: "<<imie_nazwisko<<endl;
		cout<<"Pozycja konca:"<<max_lenght;
	}
}