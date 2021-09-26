#include <iostream>

int main(){

    int Choice; //what the player will select each round
    int Tries;

std::cout << "We start at a path with 2 branches. One to the deep, unkept woods. The other to the village pasture.\n\n";
std::cout << "Where do you go?\n\n";
std::cout << "1) The dark woods\n"; //goes to the goblin ambush
std::cout << "2) The village pasture\n\n"; //goes to the guessing game

std::cin >> Choice;

while (Choice !=1 && Choice !=2)
{
    std::cout << "Invalid input. Try again :)\n\n";
    std::cin >> Choice;
}

if(Choice==1){
    std::cout << "As you delve into the dark forest, you hear a crackle behind you...\n\n";
    std::cout << "Suddenly, a goblin jumps at you and attacks!!\n\n";
    std::cout << "What do you do?\n\n";
    std::cout << "1) Fight!\n";
    std::cout << "2) Run!\n\n";

    std::cin >> Choice;

    while (Choice !=1 && Choice !=2){

        std::cout << "Invalid input. Try again\n\n";
        std::cin >> Choice;
    }
        if(Choice==1){
            std::cout << "You swing and discomboulate the goblin enough to get away!\n\n";
            std::cout << "The end :)\n\n";
        } else if(Choice==2){
            std::cout << "You turn tail but the goblin strikes you down...\n\n";
            std::cout << "The end :(\n\n";
        }
    
}    else if(Choice==2){
    std::cout << "You find your way to the village pasture and see a large crowd gathered.\n\n";
    std::cout << "You see the crowd is gathered around a drinking contest.\n\n";
    std::cout << "Do you participate?\n\n";
    std::cout << "1) Yes\n";
    std::cout << "2) No\n\n";

    std::cin >> Choice;

        while (Choice !=1 && Choice !=2){
            std::cout << "Invalid Input. Try again\n\n";
            std::cin >> Choice;
        }

    if(Choice==1){
        std::cout << "You take the victory without difficulty! The crowd cheers and the night fades to black\n\n";
        std::cout << "The end :)\n\n";

    } else if(Choice==2){
        std::cout << "You watch the festivities through and have a fun night of merriment.\n\n";
        std::cout << "The end\n\n";

    }
}




}