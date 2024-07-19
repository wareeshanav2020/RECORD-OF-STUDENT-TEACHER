#include<iostream>
#include<string>
using namespace std;

class Person 
{
    string name;
    int age;
    string gender;
    string address;
    string phone;

public:
    Person() : name(""), age(0), gender(""), address(""), phone("") {}

    virtual void Display_Information() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gender;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Phone: ";
        cin >> phone;
    }

    void Save_Information() 
    {
        cout << "Saving Person Information..." << endl;
    }

    void Show_Information() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
    }
};

class Teacher : public Person 
{
    string qualification;
    double salary;

public:
    Teacher() : qualification(""), salary(0.0) {}

    void Display_InformationA() 
    {
        Display_Information();
        cout << "Enter Qualification: ";
        cin >> qualification;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void Save_Information() 
    {
        cout << "Saving Teacher Information..." << endl;
    }

    void Show_Information() 
    {
        Person::Show_Information();
        cout << "Qualification: " << qualification << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student : public Person 
{
    string previousEducation;
    int obtainedMarks;
    int totalMarks;

public:
    Student() : previousEducation(""), obtainedMarks(0), totalMarks(0) {}

    void Display_InformationB() 
    {
        Display_Information();
        cout << "Enter Previous Education: ";
        cin >> previousEducation;
        cout << "Enter Obtained Marks: ";
        cin >> obtainedMarks;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void Save_Information() 
    {
        cout << "Saving Student Information..." << endl;
    }

    void Show_Information() 
    {
        Person::Show_Information();
        cout << "Previous Education: " << previousEducation << endl;
        cout << "Obtained Marks: " << obtainedMarks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Teacher t;
    Student s;

    cout << "Enter following data for Teacher: \n";
    t.Display_InformationA();
    t.Save_Information();
    cout << "\nTeacher Information:\n";
    t.Show_Information();

    cout << "\nEnter following data for Student: \n";
    s.Display_InformationB();
    s.Save_Information();
    cout << "\nStudent Information:\n";
    s.Show_Information();

    return 0;
}

