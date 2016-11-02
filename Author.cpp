#include <iostream>
using namespace std;

class Author{
	string name;
	string email;
	char gender;
	public:
		Author(){
		};
		Author(string name, string email, char gender){
			this->name=name;
			this->email=email;
			this->gender=gender;
		}
		string getName(){
			return name;
		}
		string getEmail(){
			return email;
		}
		void setEmail(string email){
			this->email=email;
		}
		char getGender(){
			return gender;
		}
		string toString(){
			return name + " " + email + " " + gender;
		}
};

/*int main(){
	Author people("Mason","Sorry of my life",'f');
	cout<< people.toString();
}*/
