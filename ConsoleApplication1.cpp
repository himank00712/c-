// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/*
int reg, marks, percent, pin;
char grade;
string name;
class program
{

public:void login(int pin)
{

    if (pin == 123)
    {
        cout << "welcome to miet" << endl;
        cout << "your pin is :" << pin << endl;
        display(reg, marks, percent, grade, name);
    }
    else
    {
        cout << "wrong pin";
    }
}
public:void display(int reg, int marks, int percent, char grade, string name)
{
    cout << "your name is :" << name << endl;
    cout << "your roll number is :" << reg << endl;
    cout << "your marks is :" << marks << endl;
    cout << "your percentage is :" << percent << endl;
    cout << "your grade is :" << grade << endl;
}
};
int main()
{
    int reg, marks, percent, pin;
    char grade;
    string name;
    cout << "enter your name, reg number,marks, percentage, grade,pin:" << endl;
    cin >> name;
    cin >> reg;
    cin >> marks;
    cin >> percent;
    cin >> grade;
    cin >> pin;
    program p;
    p.login(pin);

    return 0;
}*/
 /* class  login
{
  
public:void validate( int pin)
{
    if (pin == 1234)
    {
        display();
    }
    else
    {
        cout << "WRONG PIN";
    }
}public:void display()
{
    cout << "WELCOME TO MY APP"<<endl;
   
    
}
};
  class user 
{ 
    
    string name, email, username;
public:void accept()
{
    cout << "ENTER YOUR USERNAME:";
    cin >> username;
    cout << endl << "ENTER YOUR EMAIL:";
    cin >> email;
    cout << endl << "ENTER YOUR NAME:";
    cin >> name;
    display();
}

public:void display()
{
    cout << " YOUR USERNAME:"<<username<<endl;
    cout << " YOUR EMAIL:" << email << endl;
    cout << " YOUR NAME:" << name << endl;
}


};
int main()
{
    int pin;
    cout << "ENTER YOUR PASSWORD:";
    cin >> pin;
    login hi;
    user yes;
    hi.validate(pin);
    yes.accept();
}*/
                                             //assignment
/*class well
{
    int pin, age;
    string name, city;
public:void print()
    {
        cout << "pin :" << pin;
        cout << endl << "name :" << name;
        cout << endl << "city :" << city;
        cout << endl << "Age :" << age;
     }
    public :void enter()
    {

        cout << "pin :" ;
        cin >> pin;
        cout << endl << "name :" ;
        cin >> name;
        cout << endl << "city :" ;
        cin >> city;
        cout << endl << "Age :" ;
        cin >> age;
        cout << endl;
        print();
    }
};
int main()
{
    well we;
    we.enter();
}*/
/*class area
{
    int pi = 3.14, r, ar;
public:void are()
{
    cout << "radius :";
    cin >> r;
    ar = pi * r * r;
    cout << endl << "area of circle is " << ar;
}
};
int main()
{
    area a;
    a.are();
}*/
/*class print
{
    int id, sem;
    string name, branch;
public:void pri()
{
    cout << "id :";
    cin >> id;
    cout << endl << "name :";
    cin >> name;
    cout << endl << "sem :";
    cin >> sem;
    cout << endl << "branch :";
    cin >> branch;
    cout << endl;
    cout << "id :" << id;
    cout << endl << "name :" << name;
    cout << endl << "branch :" << branch;
    cout << endl << "sem :" << sem;
}
};
int main()
{
    print p;
    p.pri();
}*/

/*int main()
{
    int a,c=1;
    cout << "enter a number :";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        c = c * i;
    }
    cout << "Factorial of number is :" << c;
}*/ 
/*
int main()
{
    int a[1000], c, b,d=0;
    cout << "enter size of arrary: ";
    cin >> c;
    cout << "enter elements of arrary: ";
    for (int i = 1; i <= c; i++)
    {
        cin >> a[i];
        cout << endl;
    }
    cout << "enter element to search: ";
    cin >> b;
    for (int i = 1; i <= c; i++)
    {
        if (a[i] == b)
        {
            cout << " element founded at: "<<i;
            d = 1;
        }
    }
    if (d == 0)
    {
        cout << " element not found";
    }


}*/
/*
int main()
{
    string a , word1 = "hello", word2 = "tokyo";
    int b, c , d , e = 0,f,g=0;
    c = word1.size();
    d = word2.size();
    f = c + d;
    for (b = 0; b < c * 2; b = b + 2)
    {
        a[b] =   word1[e];
        e++;

    }
    e = 0;
    for (b = 1; b < d * 2; b = b + 2)
    {
        a =  word2[g];
        g++;
    }


    for (b = 0; b < f; b++)
    {
        cout << a[b] << endl;
    }
}*/
/*
class student
{
public:string studentname;
public:int studentid;
public: float marks, percent;
public:student(string name, int id, float mark)
{
    studentname = name;
    studentid = id;
    marks = mark;
}void display()
{
    cout << "\n NAME:" << studentname;
    cout << "\n" << "MARKS:" << marks;
    cout << "\n" << "ROLL NUMBER:" << studentid;
    char grad =grade();
    cout << endl;
    clubass(grad);
}
char grade()
{
    percent = (marks / 500 )* 100;
    if (percent >= 80 && percent <= 100)
    {
        cout << "your grade is A";
        return 'A';
    }
    else if (percent >= 70 && percent < 80)
    {
        cout << "your grade is B";
        return 'B';
    }
    else if (percent >= 60 && percent < 70)
    {
        cout << "your grade is C";
        return 'C';
    }
    else if (percent >= 50 && percent < 60)
    {
        cout << "your grade is D";
        return 'D';
    }
    else
    {
        cout << "\n not qualified";
        return 'F';
    }
   
}
void clubass(char grade)
{
    if (grade == 'A')
    {
        cout << "Sports club";
    }
    else if (grade == 'B')
    {
        cout << "Eco club";
    }
    else if (grade == 'C')
    {
        cout << "NCC club";
    }
    else if (grade == 'D')
    {
        cout << "NSS club";
    }
    else if (grade =='F')
    {
        cout<<"nalle ho tum"; 
       
    }
}
public:void search(int id )
{
    cout << "\t\t\t STUDENT ID IS VALID";
        display(); 
}

};
int main()
{
    student obj[5] = { {"ram", 1, 450}, {"sham",  2, 480}, {"Sita", 3, 460}, {"Sehaj", 4, 250}, {"Ramaya", 5, 300} };
    int id;
    cout << "ENTER YOUR ID:";
    cin >> id;
    bool found = false;
    for (int i = 0; i < 5; i++) 
    {
        if (id == obj[i].studentid)
        {
            obj[i].search(id);
            found = true;
            break;  
        }
    }
    if (!found)
    {
        cout << "Invalid Student ID" << endl;
    }
   
}*/
/*
#include <iostream>
using namespace std;
class Student
{
public:
    string StudentName;
    int StudentId;
    float Marks, per;

public:
    Student(string Name, int Id, float Mark)
    {
        StudentName = Name;
        StudentId = Id;
        Marks = Mark;
    }
    void Display()
    {
        cout << "\nName = " << StudentName << "\t Marks are ";
        cout << Marks;
    }

    int search()
    {
        int id1;
        cout << "\n Enter your Student Id";
        cin >> id1;
        return id1;
    }
};
int main()
{
    Student obj[5] = { {"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350}, {"Gita", 104, 250}, {"Raman", 105, 300} };
    int i, id2;

    for (i = 0; i < 5; i++)
    {
        cout << "\n Information of Student with id " << obj[i].StudentId;
        obj[i].Display();
    }
    id2 = obj[1].search();

    for (i = 0; i < 5; i++)
    {
        if (id2 == obj[i].StudentId)
        {
            cout << "\n Student Id is valid ";
            cout << "\n Student Name is " << obj[i].StudentName;
        }
    }

    return 0;
}*/

/*class program
{
public:program()
{
    cout << "constructor invoked";
}
      ~program()
      {
          cout << "destructor invoked";
      }
      void display()
      {
          cout << "menmber function of class";
      }
     
};
void fun1()
{
    static program j;
    j.display();
}
int main()
{
    fun1();
    cout << "recalling function";
    fun1();
}*/

class interestapp
{

};
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
