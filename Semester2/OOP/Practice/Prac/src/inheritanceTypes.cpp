#include<iostream>
using namespace std;

class Point{
    protected:
        int x,y;
    public:
        void setX(int x) {this->x = x;}
        void setY(int y) {this->y = y;}
};

class Circle: protected Point{
    protected:
        int radius;
    public:
        void setRadius(int r, int x, int y) 
        {
            radius = r; 
            setX(x); //works whether the inheritance of Circle is public, private or protected
            setY(y); //works whether the inheritance of Circle is public, private or protected
        }
};
class RedCircle: public Circle
{
    public:
        void print () 
        {
//            cout<<"X: "<<x<<", Y: "<<y<<", Radius: "<<radius<<"\n";
        	this->setX(x);
            //Here we are directly accessing members x and y of class Point 
            //Hence it only works if the inheritance of Circle from Point is public or protected, not if it is private.
            //If we inherit Circle privately from Point, then effectively the class RedCircle cannot access Point's functionality or data. Hence we effectively limited the use of class Point to one level of inheritance.
            //But if we inherit Circle with the protected keyword, there is no limit on the levels of inheritance. 
        }
};
//int main()
//{
//    Circle c;
//    RedCircle rc;
//    rc.setRadius(4, 5, 6); //this line will give an error if inheritance of RedCircle is protected or private (regardless of Circle's inheritance type from Point). Why? Because RedCircle's copy of setRadius is now private or protected, hence main cannot access.
//    rc.print(); //this is a public function of the last class in the hierarchy, hence previous inheritance types have no impact on its access in main.
//    c.setX(1); //this will not work if the inheritance of Circle is protected or private
//    //Hence we use protected inheritance when we don't want the public interface of the base class to be available through objects of the derived class - to use public functions of Point, you must use an object of Point, not of Circle or RedCircle.
//    rc.setX(10); //same as above; only works if inheritance of circle is public AND inheritance of RedCircle is public (else public functions of Point become restricted to main)
//
//    //SUMMARY:
//        //Privately inherit a class B from class A when you want to restrict the public interface of class A (the base class) from being used by any classes that are derived from B.
//        //Protected inherit a class B from class A when you want to don't want the public interface of class A to be available through objects of class B in main or other unrelated classes - the public interface of A will only be available to ALL derived classes of A.
//        //If no such restrictions, use public inheritance.
//}
