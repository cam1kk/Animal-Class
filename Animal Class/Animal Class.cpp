#include <iostream>
using namespace std;

class DomesticAnimal
{
protected:
	string type;
	string breed;
	string name;
	string gender;
	string color;
	int age;
public:
	DomesticAnimal():
	type(" "),breed(" "),name(" "),gender(" "),color(" "),age(0)
	{}
	DomesticAnimal(string type, string breed, string name, string gender,string color, int age) :
		type(type), breed(breed), name(name), gender(gender),color(color), age(age)
	{}
	void show() const {
		cout << "Type: " << type << endl;
		cout << "Breed: " << breed << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Age: " << age << endl;
	}
};
class Dog : protected DomesticAnimal
{
private:
	string fur;
public:
	Dog() :fur(" ") {
		DomesticAnimal();
	}
	Dog(string type, string breed, string name, string gender, string color, int age,string fur) :
		fur(fur)
	{
		DomesticAnimal(type, breed, name, gender, color, age);
	}
	void show() const {
		cout << "Type: " << type << endl;
		cout << "Breed: " << breed << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Age: " << age << endl;
		cout << "Fur: " << fur << endl;
		cout << endl;
	}
};
class Cat : protected DomesticAnimal
{
private:
	string fur;
public:
	Cat() :fur(" ") {
		DomesticAnimal();
	}
	Cat(string type, string breed, string name, string gender, string color, int age,string fur) :
		fur(fur)
	{
		DomesticAnimal(type, breed, name, gender, color, age);
	}
	void show() const {
		cout << "Type: " << type << endl;
		cout << "Breed: " << breed << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Age: " << age << endl;
		cout << "Fur: " << fur << endl;
		cout << endl;
	}
};
class Parrot : protected DomesticAnimal
{
private:
	string feathers;
	bool isSpeaking;
public:
	Parrot() {
		DomesticAnimal();
	}
	Parrot(string type, string breed, string name, string gender, string color, int age,string feathers,bool isSpeaking) :
		feathers(feathers),isSpeaking(isSpeaking)
	{
		DomesticAnimal(type, breed, name, gender, color, age);
	}
	void show() const {
		cout << "Type: " << type << endl;
		cout << "Breed: " << breed << endl;
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Color: " << color << endl;
		cout << "Age: " << age << endl;
		cout << "Feathers: " << feathers << endl;
		cout << boolalpha << "IsSpeaking: " << isSpeaking << endl;
		cout << endl;
	}
};
int main() {
	//Dog dog;
	//Cat cat;
	//Parrot parrot;
	//dog.show();
	//cat.show();
	//parrot.show();
	Dog dog("Dog", "Labrador", "Lola", "Female", "Black", 3, "Short");
	Cat cat("Cat", "Persian", "Whiskers", "Male", "Brown", 5, "Long");;
	Parrot parrot("Parrot", "Parrot", "Polly", "Female", "Green", 4, "Smooth", true);
	dog.show();
	cat.show();
	parrot.show();
	
}