#include "simulation.hpp"

int main (){
    srand(static_cast<unsigned>(time(0)));
    cout<<"How many trials"<<endl;
    int trials;
    cin>>trials;
    simulation testChange;
    for(int i = 0 ; i < trials; i++){
        testChange.runSimulationChange();
    }
    simulation testConst;
        for(int j = 0 ; j < trials; j++){
        testConst.runSimulationConst();
    }
    cout<<"After Changing"<<endl;
    testChange.calculatePercentage();
    cout<<"Staying the same"<<endl;
    testConst.calculatePercentage();
    return 0;
}