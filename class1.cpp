#include<iostream>
using namespace std;
class Student{        // 22A91A05E4
    private:
    	int rollno;
    	string name;
    public:
//    int rollno;
//    string name;
    //int arr[5];
    Student(int a,string n){
        rollno=a;
        name=n;
    //    arr[0]=2;
    }
	void display(){
			cout << rollno << " " << name << endl;
		}
    // delete(){
    //     arr.pop();
    // }

};

int main()
{
	Student s1(1,"sahi");
	s1.display();
	
}
