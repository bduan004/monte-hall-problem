#include <iostream>
#ifndef door_hpp
#define door_hpp

class door
{
private:
    bool car;
public:
    door();
    void setCarTrue();
    bool getCarTrue();

};
#endif
door::door(){
    car = false;
}
void door::setCarTrue(){
    car = true;
}
bool door::getCarTrue(){
    return car;
}

