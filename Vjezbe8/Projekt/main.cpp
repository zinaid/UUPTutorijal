#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Struktura User koja ce se koristiti za login
struct User
{
    string username, password;
};

// Struktura student u koju ce se spremati informacije iz datoteke
// Informacije u datoteci su zapisane u formatu: Ime Prezime Prosjek
struct Student
{
    string name, lastname;
    double prosjek;
};

// Spisak funkcija koje cemo koristiti

// Prikaz menija
void showMenu();
// Provjera fajla
bool checkFile(fstream &);
// Login funkcija
bool login(string &, string &);

// Funkcija za dobijanje liste studenata
void getStudentList();
// Funkcija za dobijanje prosjeka studenata
void getStudentGrades();
// Funkcija za dobijanje najboljeg studenta
void getBestStudent();

// Funkcija za ispis studenata
void printStudents(Student *, int n);
// Funkcija za ispis ocjena studenata
void printGrades(Student *, int n);
// Funkcija za ispis najboljeg studenta
void printBestStudent(Student *, int n);

int main()
{
    // Deklaracija opcije za meni i strukture user tipa User
    int option;
    User user;

    // Logika za login
    cout << "Unesite username:\t";
    cin >> user.username;
    cout << "Unesite sifru: \t";
    cin >> user.password;
    if (login(user.username, user.password))
    {
        do
        {
            // poziv ispisa menija
            showMenu();
            // unos opcije
            cin >> option;
            // invokacija funkcija u zavisnosti od opcije
            if (option == 1)
                getStudentList();
            else if (option == 2)
                getStudentGrades();
            else if (option == 3)
                getBestStudent();
        } while (option != -1);

        // praznjenje usera
        User user = {};
    }

    return 0;
}

void showMenu()
{
    cout << "\nDOBRODOSLI NA INFORMACIONI SISTEM " << endl;
    cout << "1. Spisak studenata" << endl;
    cout << "2. Ocjene studenata" << endl;
    cout << "3. Najbolji student" << endl;
    cout << "Za izlaz unesite -1" << endl;
}

// Bool funkcija za provjeru fajla (prima memorijsku adresu varijable file)
bool checkFile(fstream &file)
{
    // Otvori file sa operacijom in za čitanje
    file.open("studenti.txt", ios::in);

    // Ako se ne otvori izbaci se greska, suprotno vraca true
    if (!file.is_open())
    {
        throw runtime_error("Error opening file");
    }
    else
    {
        return true;
    }
}

// Bool funkcija za login (prima memorijske adrese username i password)
bool login(string &username, string &password)
{
    // Simulacija prijave
    if (username == "Zino" && password == "Tester1234")
    {
        cout << "\n Uspjesno ste se prijavili: " << username << endl;
        return true;
    }
    else
    {
        cout << "Username ili sifra nisu tacni." << endl;
        return false;
    }
}

// Povlacenje liste studenata
void getStudentList()
{
    // deklariraj file i provjeri file
    fstream file;

    checkFile(file);

    // deklariramo niz studenti sa elementima tipa Student maksimalne duzine 100
    const int MAX_STUDENTS = 100;
    Student studenti[MAX_STUDENTS];
    // brojac za broj studenata
    int numStudents = 0;

    // dok je broj studenata manji od maksimalnog broja i dok je fajl otvoren
    while (numStudents < MAX_STUDENTS && file)
    {
        // deklaracija strukture student tipa Student i u nju se spremaju informacije iz fajla
        Student student;
        file >> student.name >> student.lastname >> student.prosjek;
        if (file)
        {
            // popunjavamo niz studenti sa tim pojedinacnim studentom u kojeg smo spremili informacije iz fajla
            studenti[numStudents++] = student;
        }
    }

    // poziv funkcije za ispis
    printStudents(studenti, numStudents);

    file.close();
}

// Povlacenje ocjena studenata
void getStudentGrades()
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

    // ispis ocjena
    printGrades(studenti, numStudents);

    file.close();
}

// Povlacenje najboljeg studenta
void getBestStudent()
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

    // ispis najboljeg studenta
    printBestStudent(studenti, numStudents);

    file.close();
}

// funkcija za ispis studenata koja prima pokazivac studenti i broj elemenata u nizu
void printStudents(Student *studenti, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << studenti[i].name << " " << studenti[i].lastname << " " << studenti[i].prosjek << endl;
    }
}

// funkcija za ispis ocjena koja prima pokazivac studenti i broj elemenata u nizu
void printGrades(Student *studenti, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << studenti[i].name << ": " << studenti[i].prosjek << endl;
    }
}

// funkcija za ispis najboljeg studenta koja prima pokazivac studenti i broj elemenata u nizu
void printBestStudent(Student *studenti, int n)
{
    // pretpostavi se da je najveci prosjek, prosjek prvog studenta
    double max = studenti[0].prosjek;
    // postavi se da je njegov indeks jednak 0
    int indexMax = 0;

    // prolazi se kroz for petlju i provjerava da li je prosjek tog trenutnog studenta u iteraciji veci od postavljenog max-a
    for (int i = 0; i < n; i++)
    {
        if (studenti[i].prosjek > max)
        {
            // ako je veci prosjek od tog studenta onda je on sad maksimum i indeks je indeks te iteracije
            max = studenti[i].prosjek;
            indexMax = i;
        }
    }

    // Ispis najveceg prosjeka i studenta sa najvecim prosjekom
    cout << "Najveci prosjek ima: " << studenti[indexMax].name << ", a to je: " << studenti[indexMax].prosjek << endl;
}
