// Practical 14 — Smart Pointers

// Problem Statement: Demonstrate unique_ptr and shared_ptr to manage a dynamically allocated Student object, showing automatic memory deallocation without an explicit delete.

#include <iostream>
#include <memory>   // required for smart pointers
using namespace std;

class Student {
private:
    string name;

public:
    Student(string n) : name(n) {
        cout << "Student '" << name << "' created." << endl;
    }

    ~Student() {
        cout << "Student '" << name << "' destroyed." << endl;
    }

    void display() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    cout << "----- unique_ptr demonstration -----" << endl;
    {
        unique_ptr<Student> s1 = make_unique<Student>("Rohan");
        s1->display();   // arrow operator, just like a raw pointer
        // No 'delete' needed - destructor called automatically when s1 goes out of scope
    }
    cout << "(unique_ptr's scope has ended - Student was automatically destroyed above)" << endl;

    cout << "\n----- shared_ptr demonstration -----" << endl;
    {
        shared_ptr<Student> s2 = make_shared<Student>("Meera");
        cout << "Reference count after s2 created: " << s2.use_count() << endl;

        {
            shared_ptr<Student> s3 = s2;   // s3 shares ownership with s2
            cout << "Reference count after s3 = s2: " << s2.use_count() << endl;
            s3->display();
        }   // s3 goes out of scope here, but object is NOT destroyed yet (s2 still owns it)

        cout << "Reference count after s3 went out of scope: " << s2.use_count() << endl;
    }   // s2 goes out of scope here - reference count drops to 0, object IS destroyed now

    cout << "(shared_ptr's scope has ended - Student was automatically destroyed above)" << endl;

    return 0;
}