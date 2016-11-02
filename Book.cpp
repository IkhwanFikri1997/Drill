#include <iostream>
#include "Author.cpp"
using namespace std;

class Book{
	 string name;
	 Author author;
	 double price;
	 int qty=0;
	 public:
	 	Book();
	 	Book(string name,Author author,double price){
	 		this->name=name;
	 		this->author=author;
	 		this->price=price;
		}
		Book(string name,Author author,double price,int qty){
	 		this->name=name;
	 		this->author=author;
	 		this->price=price;
	 		this->qty=qty;
		}
		string getName(){
			return name;
		}
		Author getAuthor(){
			return author;
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
			return name + " " + author.toString() + " " + to_string(price) + " " + to_string(qty);
		}
};

/*int main(){
	Author writer("Son gohan","sonan@gmail.com",'m');
	Book books("The Secrets of dragon ball",writer,100000,1);
	cout << books.toString();
}*/
