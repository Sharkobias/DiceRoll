#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

int random;
int rolls;
string user_choice;
/*
//map<string,int >type=
//{
    {"D4",4},
    {"D6",6},
    {"D8",8},
    {"D10",10},
    {"D12",12},
    {"D20",20}
};
*/
enum GENDER {woman, man, intersex};
enum RACE { human,elf,nymph};
class character 
{
public:
    character(GENDER gender, RACE race, string name, int strength) 
    {
        _gender = gender;
        _race = race;
        _name = name;
        _strength = strength;
    }
    GENDER _gender;
    string GetGender() 
    {
        switch (_gender)
        {
            case woman:
                return "woman";

            case man:
                return"man";

            case intersex:
                return"intersex";
            default:
                return"none";
        }
    }

    RACE _race;
    string GetRace() 
    {
        switch (_race) 
        {
        case human:
            return "human";
        case elf:
            return "elf";
        case nymph:
            return "nymph";
        }
    }
    string _name;
    int _strength;


};
int main()
{
    character new_character_GENDER(woman, elf,"katrine",16);
    character Johny(man, human,"Johnny Silverhand",13);
    character new_character_NAME(man, human, "Jackie Welles",14);

    cout << "my gender is " << Johny.GetGender() << endl;
    cout << "I am a" <<" " << Johny.GetRace() << endl;
    cout << "my name is" << " "<<Johny._name << endl;
    cout << "my strength is" << " " << Johny._strength << endl;

    do
    {
        srand((unsigned)time(NULL));
        random = 1 + (rand() % 6);
        return random;
    } while (rolls > 0);
}
