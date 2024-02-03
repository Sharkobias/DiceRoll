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
int main()
{
    character new_character_GENDER(man, human, "Johnny Silverhand", 13, 10, 16, 20, 18, 20);
    character Johny(man, human,"Johnny Silverhand",13,10,16,20,18,20);
    character new_character_NAME(man, human, "Johnny Silverhand", 13, 10, 16, 20, 18, 20);

    cout << "my gender is " << Johny.GetGender() << endl;
    cout << "I am a" <<" " << Johny.GetRace() << endl;
    cout << "my name is" << " "<<Johny._name << endl;
    cout << "my strength is" << " " << Johny._strength << endl;
    cout << "my dexternity is" << " " << Johny._dexterity << endl;
    cout << "my constitution is" << " " << Johny._constitution << endl;
    cout << "my intelligence is" << " " << Johny._intelligence << endl;
    cout << "my wisdom is" << " " << Johny._wisdom << endl;
    cout << "my charisma is" << " " << Johny._charisma << endl;

    do
    {
        srand((unsigned)time(NULL));
        random = 1 + (rand() % 6);
        return random;
    } while (rolls > 0);
}
