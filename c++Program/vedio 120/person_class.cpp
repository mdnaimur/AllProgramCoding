class Person{
    string name;
    int age;
public:
    Person(string name,int age){
    this->name=name;
    this->age=age;
    }
    void display()
    {
        cout<<"I am "<<name<<" and my is "<<age<<endl;
    }

};
