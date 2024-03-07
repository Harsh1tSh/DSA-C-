#include<iostream>
using namespace std;
class Human{
    public:
    int weight;
    int age;
    int height;

    public:
    int getAge(){
        return this -> age;
    }
    int setWieght(int w){
        return this -> weight = w;
    }

};

class Male : public Human {
    public:
    string color;

    void sleep(){
        cout << "Male sleeps" << endl;
    }
};

int main(){
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;
    cout << object1.color << endl;
    object1.sleep();

    return 0;
}