#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person();
    Person(string name, int age);
    string GetName() const;
    int GetAge() const;
    void SetName(string name);
    void SetAge(int age);
    ~Person();
};

Person::Person() {
    
}
Person::Person(string name, int age) : name(name), age(age) {

}
Person::~Person() {

}
string Person::GetName() const {
    return this->name;
}
int Person::GetAge() const {
    return this->age;
}
void Person::SetName(string name) {
    this->name = name;
}
void Person::SetAge(int age) {
    this->age = age;
}