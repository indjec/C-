#include <iostream>
#include <string.h>
using namespace std;
const int m = 30;

class staff
{
  protected:
    int code;
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
    void put_details(teacher s1){
        cout<<"Name: "<<s1.subject<<"\n";
        cout<<"Publication:"<<s1.publication<<"\n";
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

const int n = 3;
int i = 0;
int main()
{
    teacher person2[n];
    teacher temp;

    int x;

    while (1)
    {
        int code;

        cout << "Select your code: \n";
        cout << "1.Teacher. \n";
        cout << "2.Typist. \n";
        cout << "3.Officer. \n";
        cout << "4.Exit. \n";
        cout<< "5.Display. \n";

        cin >> code;
        switch (code)

        {
        case 1:
        {
            
            person2[i].get_details();

            person2[i].get_sub();
            i++;

            break;
        }
        case 2:
        {
            int typ;
            cout << "Select the category: \n";
            cout << "1.Regular. \n";
            cout << "2.Casual. \n";
            cin >> typ;

            if (typ == 1)
            {
                regular person3[n];
                for (int i = 0; i < n; i++)
                {
                    person3[i].get_details();
                    person3[i].get_speed();
                }
            }
            else
            {
                casual person4[n];
                for (int i = 0; i < n; i++)
                {
                    person4[i].get_details();
                    person4[i].get_speed();
                }
            }
        }
        case 3:
        {
            officer person5[n];
            for (int i = 0; i < n; i++)
            {
                person5[i].get_details();
                person5[i].get_grade();
            }
        }
        case 4:
        {
            break;
        }
        case 5:{
            int dis;
            cout<<"1.Display teachers. \n";
            cout<<"2.Display typist. \n";
            cout<<"3.Display officer. \n";
            cin>>dis;
            switch(dis){
                case 1:
                for(int j=0;j<i;j++){
                    temp.put_details(person2[j]);
                }
            }
        }
        default:
            cout << "Choose appropriate number:";
            break;
        }
    }
}