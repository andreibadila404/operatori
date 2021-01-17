#include <iostream>
#include <string>

using namespace std;

class Product{

float price;
string name;
int weight;

public:
void setPrice(float Price){
    this->price=Price;
}

void setName(string Name){
    this->name=Name;
}

void setWeight(int Weight){
    this->weight=Weight;
}

float getPrice(){
    return price;
}

string getName(){
    return name;
}

int getWeight(){
    return weight;
}

void print(){
    cout<<getPrice()<<endl;
    cout<<getName()<<endl;
    cout<<getWeight()<<endl;
}

Product add(Product padd){
    Product sum(0,"",0);

    sum.setPrice( padd.getPrice() + this->getPrice() );
    sum.setName(padd.getName() + this->getName());
    sum.setWeight(padd.getWeight() + this->getWeight());

    return sum;
}

    Product();

    Product(float Price,string Name,int Weight){
        setPrice(Price);
        setName(Name);
        setWeight(Weight);
    }

Product operator + (Product right){
    return this->add(right);
}

friend ostream& operator << (ostream &output,Product p);

bool operator > (Product right){
    return this->getPrice() > right.getPrice();
    return this->getWeight() > right.getWeight();

}

};

ostream& operator << (ostream &output,Product p){
    output<<endl<<p.getPrice();
    output<<endl<<p.getName();
    output<<endl<<p.getWeight()<<endl;
    return output;
}


int main(){
Product p1(23.6,"keyboard",2);
Product p2(5, "mouse", 7);
//p1.print();
Product p3= p1+p2;
//p3.print();


cout<<p1 <<  "Am mai scris ceva" << endl;

if (p1>p2){
    cout<<"P1 este mai mare";
}
else cout<<"p2 este mai mare";


}
