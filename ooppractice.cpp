#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// Creating the class
class Person {
  
  // Creating private attributes
  private:
    int age = 15;
    string hobby = "Coding";
    
  // Public attribute
  public:
    string country = "Canada";

    // Getters and setters
    void setAge(int arg){
      age = arg;
    }
    
    int getAge() {
      return age;
    }

    void setHobby(string arg){
      hobby = arg;
    }
    
    string getHobby() {
      return hobby;
    }


};



int main() {
  Person me;
  cout << me.getAge() << endl;
  me.setHobby("Sleeping");
  cout << me.getHobby() << endl;
  cout << me.country << endl;
  return 0;
}
