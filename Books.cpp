#include <iostream>
#include "Author.cpp"
using namespace std;

class Book{
	 string name;
	 Author *authors;
	 double price;
	 int qty=0;
	 public:
	 Book();
	 	Book(string name,Author authors[],double price){
	 		this->name=name;
	 		this->authors=new Author[2];
	 		for(int i = 0; i < 2; i++)
			{
				this -> authors[i] = authors[i];
			}
	 		this->price=price;
		}
		Book(string name,Author authors[],double price,int qty){
	 		this->name=name;
			this->authors=new Author[2];
			for(int i = 0; i < 2; i++)
			{
				this -> authors[i] = authors[i];
			}
	 		this->price=price;
	 		this->qty=qty;
		}
		string getName(){
			return name;
		}
		Author getAuthors(){
			return *authors;
		}
		double getPrice(){
			return price;
		}
		void setPrice(double price){
			this->price=price;
		}
		int getQty(){
			return qty;
		}
		void setQty(int qty){
			this->qty=qty;
		}
		string toString(){
			return name + " " + authors[0].toString() + " " + authors[1].toString() + " " + to_string(price) + " " + to_string(qty);
		}
		string getAuthorNames(){
			return authors[0].getName() + authors[1].getName();
		}
};

int main(){
	Author writer[2]{Author("Son gohan","sonan@gmail.com",'m'), Author("Mason","mas@hotmail.com",'f')};
	Book books("The Secrets of dragon ball",writer,100000,1);
	cout << books.toString() << endl;
	cout << books.getAuthorNames() << endl;
}
