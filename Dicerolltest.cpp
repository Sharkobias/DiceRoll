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
    character(GENDER gender, RACE race, string name, int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma) 
    {
        _gender = gender;
        _race = race;
        _name = name;
        _strength = strength;
        _dexterity = dexterity;
        _constitution = constitution;
        _intelligence = intelligence;
        _wisdom = wisdom;
        _charisma = charisma;
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
    int _dexterity;
    int _constitution;
    int _intelligence;
    int _wisdom;
    int _charisma;
};

void print_character(character new_character) 
{
    cout << "my gender is " << new_character.GetGender() << endl;
    cout << "I am a" << " " << new_character.GetRace() << endl;
    cout << "my name is" << " " <<new_character._name << endl;
    cout << "my strength is" << " " << new_character._strength << endl;
    cout << "my dexternity is" << " " << new_character._dexterity << endl;
    cout << "my constitution is" << " " << new_character._constitution << endl;
    cout << "my intelligence is" << " " << new_character._intelligence << endl;
    cout << "my wisdom is" << " " << new_character._wisdom << endl;
    cout << "my charisma is" << " " << new_character._charisma << endl;
}

int main()
{
    character Silverhand(man, human, "Johnny Silverhand", 13, 10, 16, 20, 18, 20);
    print_character(Silverhand);
    character Katrine(woman, elf, "Katrine", 10, 20, 14, 16, 13, 10);
    print_character(Katrine);


    do
    {
        srand((unsigned)time(NULL));
        random = 1 + (rand() % 6);
        return random;
    } while (rolls > 0);
}
