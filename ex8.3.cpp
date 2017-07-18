#include <iostream>
using namespace std;
const int m = 30;
class staff
{
  protected:
    int code;
    char name[m];
    // int temp;
  public:
    // void get_code(){

    // }
    void get_details()
    {
        // cout << "Select your code: \n";
        // cout << "1.Teacher. \n";
        // cout << "2.Typist. \n";
        // cout << "3.Officer. \n";
        // cin >> code;
        cout << "Enter your name: ";
        cin >> name;
    }
    void put_details(int a)
    {
        cout << "Your code is:" << a << "\n";
        cout << "Your name is:" << name << "\n";
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
    void put_sub()
    {
        cout << "Your subject name is:" << subject << "\n";
        cout << "Publication name is: " << publication << "\n";
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
class regular : public typist
{
    int wage;

  public:
    void salary()
    {
        cout << "Enter your wage: ";
        cin >> wage;
        cout << "Your wages are: ";
    }
};
class casual : public typist
{
    int wages;

  public:
    void wage()
    {
        cout << "Enter your wage: ";
        cin >> wages;
        cout << "Your wages are: ";
    }
};
int main()
{
    int code;
    cout << "Select your code: \n";
    cout << "1.Teacher. \n";
    cout << "2.Typist. \n";
    cout << "3.Officer. \n";
    cin >> code;
    // staff person1;
    // person1.get_details();
    // person1.put_details();
    switch (code)
    {
    case 1:
    {
        teacher person2;
        person2.get_details();
        person2.put_details(code);
        person2.get_sub();
        person2.put_sub();
        break;
    }
    case 2:
    {
        int typ;
        cout << "Select the category: \n";
        cout << "1.Regular. \n";
        cout << "2.Casual. \n";
        cin >> typ;

        if(typ == 1)
        {
            regular person3;
            person3.get_details();
            person3.put_details(code);
            person3.get_speed();
            person3.put_speed();
            break;
        }
        else
        {
            casual person4;
            person4.get_details();
            person4.put_details(code);
            person4.get_speed();
            person4.put_speed();
            break;
        }
        
    }
    case 3:
    {
        officer person4;
        person4.get_details();
        person4.put_details(code);
        person4.get_grade();
        person4.put_grade();
        break;
    }
    default:
        cout << "Choose appropriate number:";
        break;
    }
}