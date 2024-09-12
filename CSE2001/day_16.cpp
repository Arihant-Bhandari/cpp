// write a c++ program to demostrate single inheritance among bird class and the derived class. call the base class by using the derived class object.

// #include <iostream>
// using namespace std;

// class Bird
// {
//     private: 
//     string beakLength;
//     string colour;
//     public:
//     void initializeBird(string beak, string color)
//     {
//         beakLength = beak;
//         colour = color;
//     }
//     void displayBird()
//     {
//         cout<<"Beak Length of the Bird: "<<beakLength<<endl;
//         cout<<"Colour of the bird: "<<colour<<endl;
//     }
// };
// class Dove : public Bird
// {
//     private: string birdFeed;
//     public:
//     void initialize(string beak, string color, string feed)
//     {
//         initializeBird(beak,color);
//         birdFeed = feed;
//     }
//     void display()
//     {
//         cout<<"The Diet of the Bird is: "<<birdFeed<<endl;
//     }
// };
// int main()
// {
//     Dove d;
//     d.initialize("Small","White","Worms and grains");
//     d.displayBird();
//     d.display();
//     return 0;
// }

// write a c++ program to represent the single inheritance concept Animal and derived class Dog 

// #include <iostream>
// using namespace std;

// class Animal
// {
//     private: 
//     string diet;
//     string furCondiition;
//     public:
//     void initializeAnimal(string food, string fur)
//     {
//         diet = food;
//         furCondiition = fur;
//     }
//     void displayAnimal()
//     {
//         cout<<"The animal's primary diet is: "<<diet<<endl;
//         cout<<"The animal's fur is: "<<furCondiition<<endl;
//     }
// };
// class Dog : public Animal
// {
//     private:
//     string domesticationStatus;
//     public:
//     void initialize(string food, string fur, string domestic)
//     {
//         initializeAnimal(food,fur);
//         domesticationStatus = domestic;
//     }
//     void display()
//     {
//         displayAnimal();
//         cout<<"The animal is: "<<domesticationStatus<<endl;
//     }
// };

// int main()
// {
//     Dog d;
//     d.initialize("Omnivorous","Silky","domesticated");
//     d.display();
//     return 0;
// }

// write a c++ program to illustrate multiple inheritance using 2 base classes Shape and colour, with a derived class colouredShape is inherited from base classes shape and colour

// #include <iostream>
// using namespace std;

// class Shape
// {
//     private:
//     string shapeName;
//     public:
//     void drawShape(string shape)
//     {
//         shapeName = shape;
//     }
//     void displayShape()
//     {
//         cout<<"The shape is: "<<shapeName<<endl;
//     }
// };
// class Colour
// {
//     private: 
//     string colourName;
//     public:
//     void fillColour(string colour)
//     {
//         colourName = colour;
//     }
//     void displayColour()
//     {
//         cout<<"The colour is: "<<colourName<<endl;
//     }
// };
// class ColouredShape : public Shape, public Colour
// {
//     public:
//     void draw(string shape, string colour)
//     {
//         drawShape(shape);
//         fillColour(colour);
//     }
//     void display()
//     {
//         displayShape();
//         displayColour();
//     }
// };
// int main()
// {
//     ColouredShape cshape;
//     cshape.draw("Triangle","Red");
//     cshape.display();
//     return 0;
// }

// write a c++ program to demonstarte multi-level inheritance using base class Vehicle , derived class Car, and create subderived class called SportsCar

// #include <iostream>
// using namespace std;

// class Vehicle
// {
//     private:
//     int nEngine;
//     public:
//     void initialize(int engine)
//     {
//         nEngine = engine;
//     }
//     void display()
//     {
//         cout<<"No. of Engines in car: "<<nEngine<<endl;
//     }
// };
// class Car : public Vehicle
// {
//     private:
//     int nSeat;
//     public:
//     void initializeCar(int engine,int seat)
//     {
//         initialize(engine);
//         nSeat = seat;
//     }
//     void displayCar()
//     {
//         display();
//         cout<<"The no. of Seats in Car: "<<nSeat<<endl;
//     }
// };
// class SportsCar : public Car
// {
//     private:
//     string carName;
//     public:
//     void initializeSportsCar(int engine, int seat, string name)
//     {
//         initializeCar(engine, seat);
//         carName = name;
//     }
//     void displaySportsCar()
//     {
//         cout<<"The Name of the Car is: "<<carName<<endl;
//         displayCar();
//     }
// };
// int main()
// {
//     SportsCar s;
//     s.initializeSportsCar(4,2,"Farrari");
//     s.displaySportsCar();
//     return 0;
// }

// write a c++ to create hybrid inheritance using the base class Shape and Colour, create a derived class 

#include <iostream>
using namespace std;

class Shape
{
    private:
    string shapeName;
    public:
    void drawShape(string shape)
    {
        shapeName = shape;
    }
    void displayShape()
    {
        cout<<"The shape is: "<<shapeName<<endl;
    }
};
class Colour
{
    private: 
    string colourName;
    public:
    void fillColour(string colour)
    {
        colourName = colour;
    }
    void displayColour()
    {
        cout<<"The colour is: "<<colourName<<endl;
    }
};
class ColouredShape : public Shape, public Colour
{
    public:
    void draw(string shape, string colour)
    {
        drawShape(shape);
        fillColour(colour);
    }
    void display()
    {
        displayShape();
        displayColour();
    }
};
class Image : public ColouredShape
{
    private: string image;
    public:
    Image(string name)
    {
        image = name;
    }
    void displayImage()
    {
        display();
    }

};
int main()
{
    Image cshape("Project");
    cshape.draw("Triangle","Red");
    cshape.displayImage();
    return 0;
}