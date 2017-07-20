#include <iostream>
using namespace std;
const int m = 30;
class staff
{
    char name[m];

  public:
    void get_details()
    {
        cout << "Enter your name: ";
        cin >> name;
    }
};
class teacher : public staff
{
    char subject[m];
    char publication[m];

  public:
    void get_sub()
    {
        cout << "Enter your subject name: ";
        cin >> subject;
        cout << "Enter publication name: ";
        cin >> publication;
    }
    void put_details(teacher s1)
    {
        cout << "Name: " << s1.subject << "\n";
        cout << "Publication:" << s1.publication << "\n";
    }
};
class typist : public staff
{
    int speed;

  public:
    void get_speed()
    {
        cout << "Enter your speed of typing in(words/mintues): ";
        cin >> speed;
    }
    void put_speed()
    {
        cout << "Your speed of typing is:" << speed << "\n";
    }
};
class officer : public staff
{
    char grade[m];

  public:
    void get_grade()
    {
        cout << "Enter your grade: ";
        cin >> grade;
    }
    void put_grade()
    {
        cout << "Your grade is:" << grade << "\n";
    }
};
const int n = 3;
int i = 0;
int main()
{
    teacher person[n];
    typist person2[n];
    officer person3[n];

    while (1)
    {

        int x;
        cout << "Enter your choice: \n";
        cout << "1.Create details. \n";
        cout << "2.View details. \n";
        cout << "3.Exit. \n";
        cin >> x;
        switch (x)
        {
        case 1:

            while (1)
            {
                int code;
                cout << "Select your code: \n";
                cout << "1.Teacher. \n";
                cout << "2.Typist. \n";
                cout << "3.Officer. \n";
                cout << "4.Return to main menu. \n";
                cin >> code;
                switch (code)
                {
                case 1:
                    person[i].get_details();
                    person[i].get_sub();
                    i++;
                    break;
                case 2:
                    person2[i].get_details();
                    person2[i].get_speed();
                    i++;
                    break;
                case 3:
                    person3[i].get_details();
                    person3[i].get_grade();
                    i++;
                    break;
                case 4:
                if(code ==4){
                    break;
                }
                }
            }
        }
    }
}