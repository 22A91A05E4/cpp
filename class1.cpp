#include<iostream>
using namespace std;
class Student{        // 22A91A05E4
    private:
    	int rollno;   // member variables
    	string name;
    public:
    Student(int a,string n){   // member function
        rollno=a;
        name=n;
    }
	void display(){
			cout << rollno << " " << name << endl;
		}
};

int main()
{
	Student s1(1,"sahi");
	s1.display();
}
