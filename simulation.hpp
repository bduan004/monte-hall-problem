#ifndef simulation_hpp
#define simulation_hpp
#include "door.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class simulation: public door 
{
private:
    vector <door> doors;
    int guess;
    int right;
    int wrong;
    int Right;
    int Wrong;
    int allTrials;
    int rightDoor;
    int eliminatedDoor;
public:
    simulation ();
    ~simulation();
    void randomizeDoors();
    void makeGuess();
    void changeGuess();
    void runSimulationChange();
    void runSimulationConst();
    void eliminateDoor();
    void checkGuess();
    void calculatePercentage();
};
#endif
void simulation::checkGuess(){
    if(guess == rightDoor){
        Right++;
    }
    else {
        Wrong++;
    }
    allTrials++;
}
void simulation::calculatePercentage(){
    double percentage = static_cast<double>(Right)/allTrials * 100;
    cout<<"percentage right: "<<percentage<<"%"<<endl;
    percentage = static_cast<double>(Wrong)/allTrials * 100;
    cout<<"percentage wrong: "<<percentage<<"%"<<endl;
}
void simulation::randomizeDoors()
{
    rightDoor = rand() %3;
    doors[rightDoor].setCarTrue();
}
simulation::simulation():Right(0), Wrong(0), allTrials(0), rightDoor(0), eliminatedDoor(0){
        doors.assign(3,door());
}
simulation::~simulation()
{
}
void simulation::makeGuess(){
    guess = rand()%3;
}
void simulation::runSimulationChange(){
    randomizeDoors();
    makeGuess();
    eliminateDoor();
    changeGuess();
    checkGuess();
    
}
void simulation::runSimulationConst(){
    randomizeDoors();
    makeGuess();
    eliminateDoor();
    checkGuess();
}
void simulation::changeGuess(){
    if(eliminatedDoor==0 && guess==1){
        guess=2;
    }
    else if (eliminatedDoor==0 && guess==2){
        guess =1;
    }
    else if(eliminatedDoor==1 && guess==0){
        guess=2;
    }
    else if (eliminatedDoor==1 && guess==2){
        guess =0;
    }
    else if(eliminatedDoor==2 && guess==1){
        guess=0;
    }
    else if (eliminatedDoor==2 && guess==0){
        guess =1;
    }

}
void simulation::eliminateDoor(){
    for(int i = 0; i < 3; i++){
        if(guess!=i){
            if(i!=rightDoor){
                eliminatedDoor = i;
                break;
            }
        }
    }
}

