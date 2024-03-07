#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char *name;
    char level; 
    static int timetoComplete;

    Hero(){
        cout << "Default Constructor called"  << endl;
        name = new char[100];
    }

    //parametrized constructor
    Hero(int health){
        this -> health = health;
    }

    Hero(int health,char level){
        this -> level = level;// copying the level from object into the constructor level
        this -> health = health;
    }
   //copy comstructor
    Hero (Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this -> name = ch;
        cout << "Copy constructor called : " << endl;
        this -> health = temp.health;
        this->level=temp.level;
    }


    void print(){
        cout << endl;
        cout << "Name : " << this-> name << endl;
        cout << "health : " << this -> health << endl;
        cout << "Level : " << this -> level << endl;
        //cout << level <<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this ->name, name);
    }
    static int random(){
        return timetoComplete;
    }
    //destructor
    ~Hero() {
        cout << "Destructor called " << endl;
    }

};
int Hero::timetoComplete = 5;

int main(){
    cout << Hero :: random() << endl;






  /*  cout << Hero :: timetoComplete << endl;
    Hero a;

    cout << a.timetoComplete << endl;

    Hero b;
    b.timetoComplete = 10;

    cout << a.timetoComplete << endl;
    cout << b.timetoComplete << endl;
*/




  /*  // static allocation
    Hero a; // destructor is called automatically

    //dynamic allocation
    Hero *b = new Hero();
    delete b;// destructor will be called manually
*/




    /*Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();


    // use default copy constructor
    Hero hero2(hero1);
    // Hero hero2 = hero1;
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    hero1 = hero2;
    hero1.print();






    /*Hero Ramesh(70,'C');
    Ramesh.print();
    // copy constructor
    Hero Suresh(Ramesh);
    Suresh.print();
    */




   /* //object created statically
    Hero Paul(10);
    cout << "Address of paul : " << &Paul << endl;
    Paul.print();
    //object created dynamically
    Hero *h = new Hero(11);
    h -> print();

    Hero temp(22,'B');
    temp.print();
*/
    



    /*//static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout <<"Health is : " << a.getHealth() << endl;
    cout << "Level is : " << a.level << endl;

    // dynamic allocation
    Hero *b = new Hero();
    b -> setLevel('A');
    b -> setHealth(70);
    cout << "Health is  : " << (*b).getHealth() << endl;
    cout << "Level is : " << (*b).level << endl;

    cout << "Health is : " << b->getHealth() << endl;




/*//*/ creation of the object
    Hero Paul;
    //Paul.health = 70;
    cout << "Paul health is : " << Paul.getHealth() << endl;
    Paul.setHealth(70);
    Paul.level = 'A';
    cout << "Health is : " << Paul.getHealth() << endl;
    cout << "Level is : " << Paul.level << endl;
*/ 

    return 0;
}