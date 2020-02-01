/*Create a class called Pet with all the necessary files (.h , .cpp, etc.)
This class should have member variables name (string), age (int), type
([‘dog’, ‘cat’]) (string) and weight (double). Make sure to include the
appropriate accessor (getters), mutator (setters). Once the Pet class
has been implemented, create two instances of Pet and print their details
to console output.*/


#include <iostream>
using namespace std;

class Pet
{
  //Declaring all variables for Pet
public:
  string name;
  int age;
  string type;
  double weight;

  //Functions for getting and setting the pet values
  string getName();
  int getAge();
  string getType();
  double getWeight();
  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

};

//Functions for setting (mutators) the name, age, type, and weight of pet values
void Pet::setName(string petsName)
{
  name = petsName;
}

void Pet::setAge(int petsAge)
{
  age = petsAge;
}

void Pet::setType(string petsType)
{
  type = petsType;
}

void Pet::setWeight(double petsWeight)
{
  weight = petsWeight;
}

//Variables for getting (accessors) pet variables
string Pet::getName()
{
  return name;
}

int Pet::getAge()
{
  return age;
}

string Pet::getType()
{
  return type;
}

double Pet::getWeight()
{
  return weight;
}


int main()
{
  //Here we set the two pets' values to their names, ages, weights, and types
  Pet petA;
  petA.setName("Cubby");
  petA.setAge(11);
  petA.setType("Dog");
  petA.setWeight(60);

  //Outputting these values from the accessors to the console
  cout << "Name: " << petA.getName() << endl;
  cout << "Age: " << petA.getAge() << endl;
  cout << "Type: " << petA.getType() << endl;
  cout << "Weight: " << petA.getWeight() << endl;


  //Pet B's values (mutators)
  Pet petB;
  petB.setName("Rocky");
  petB.setAge(5);
  petB.setType("Dog");
  petB.setWeight(70);

  //Output to console
  cout << "Name: " << petB.getName() << endl;
  cout << "Age: " << petB.getAge() << endl;
  cout << "Type: " << petB.getType() << endl;
  cout << "Weight: " << petB.getWeight() << endl;

}
