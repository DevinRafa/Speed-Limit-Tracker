#include <iostream>

void tracker(short int speed){
    bool trigger; bool danger;
    if (speed > 0){
        trigger = {true};
    }else{
        trigger = {false};
    }
    if (speed > 150 && trigger){
        danger = {true};
    }else{
        danger = {false};
    }

    std::boolalpha;
    std::cout << "trigger: " << trigger << std::endl;
    std::cout << "speed: " << speed << std::endl;
    if (trigger){
        if (!(danger)){
            std::cout << "speed may to fast, but not cause danger";
        }
        else if (danger){
            std::cout << "speed it's to fast and cause a danger!";
        }
    }
    else if (!(trigger)){
        std::cout << "object not move or move backward";
    }
}

int main(){
    short int photo_detection;
    std::cin >> photo_detection;

    tracker(photo_detection);
    
    return 0;
}