#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct User
{
    int id;
    string name, lastname, username, password;
};

struct Student
{
    string name, lastname;
    double prosjek;
};

void showMenu(string &);

string setUserName(User &);
string setUserLastName(User &);

string getStudentList();
string getStudentGrades();
string getBestStudent();

void printStudents(Student *, int n);
void printGrades(Student *, int n);
void printBestStudent(Student *, int n);

bool login(string &, string &);
bool checkFile(fstream &);

int main()
{
    int option;

    User user;
    cout << "Unesite username:\t";
    cin >> user.username;
    cout << "Unesite sifru: \t";
    cin >> user.password;

    if (login(user.username, user.password))
    {
        setUserName(user);
        setUserLastName(user);
        do
        {
            showMenu(user.name);
            cin >> option;
            if (option == 1)
                getStudentList();
            else if (option == 2)
                getStudentGrades();
            else if (option == 3)
                getBestStudent();
        } while (option != -1);

        User user = {};
    }

    return 0;
}

void showMenu(string &name)
{
    cout << "\nDOBRODOSLI NA INFORMACIONI SISTEM " << name << endl;
    cout << "1. Spisak studenata" << endl;
    cout << "2. Ocjene studenata" << endl;
    cout << "3. Najbolji student" << endl;
    cout << "Za izlaz unesite -1" << endl;
}

bool login(string &username, string &password)
{
    if (username == "Zino")
    {
        return true;
    }
    else
    {
        return false;
    }
}

string setUserName(User &user)
{
    return user.name = "Zinaid";
}

string setUserLastName(User &user)
{
    return user.lastname = "Kapic";
}

string getStudentList()
{
    fstream file;

    checkFile(file);

    const int MAX_STUDENTS = 100;
    Student studenti[MAX_STUDENTS];
    int numStudents = 0;

    while (numStudents < MAX_STUDENTS && file)
    {
        Student student;
        file >> student.name >> student.lastname >> student.prosjek;
        if (file)
        { // check if read was successful
            studenti[numStudents++] = student;
        }
    }

    printStudents(studenti, numStudents);

    file.close();
}

string getStudentGrades()
{
    fstream file;

    checkFile(file);

    const int MAX_STUDENTS = 100;
    Student studenti[MAX_STUDENTS];
    int numStudents = 0;

    while (numStudents < MAX_STUDENTS && file)
    {
        Student student;
        file >> student.name >> student.lastname >> student.prosjek;
        if (file)
        { // check if read was successful
            studenti[numStudents++] = student;
        }
    }

    printGrades(studenti, numStudents);

    file.close();
}

string getBestStudent()
{
    fstream file;

    checkFile(file);

    const int MAX_STUDENTS = 100;
    Student studenti[MAX_STUDENTS];
    int numStudents = 0;

    while (numStudents < MAX_STUDENTS && file)
    {
        Student student;
        file >> student.name >> student.lastname >> student.prosjek;
        if (file)
        { // check if read was successful
            studenti[numStudents++] = student;
        }
    }

    printBestStudent(studenti, numStudents);

    file.close();
}

void printStudents(Student *studenti, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << studenti[i].name << " " << studenti[i].lastname << " " << studenti[i].prosjek << endl;
    }
}

void printGrades(Student *studenti, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << studenti[i].name << ": " << studenti[i].prosjek << endl;
    }
}

void printBestStudent(Student *studenti, int n)
{
    double max = studenti[0].prosjek;
    int indexMax = 0;
    for (int i = 0; i < n; i++)
    {
        if (studenti[i].prosjek > max)
        {
            max = studenti[i].prosjek;
            indexMax = i;
        }
    }

    cout << "Najveci prosjek ima: " << studenti[indexMax].name << ", a to je: " << studenti[indexMax].prosjek << endl;
}

bool checkFile(fstream &file)
{
    file.open("studenti.txt", ios::in);

    if (!file.is_open())
    {
        throw runtime_error("Error opening file");
    }
    else
    {
        return true;
    }
}