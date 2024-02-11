#include <iostream>
#include <cstdlib>
#include <map>
using namespace std;

int _random;
int rolls;
string user_choice;

enum GENDER {woman, man, intersex};
enum RACE { human,elf,nymph};
struct attributes 
{
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
};
class character 
{
public:
    character(GENDER gender, RACE race, string name, attributes attr)
    {
        _gender = gender;
        _race = race;
        _name = name;
        _attr = attr;
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
                return"other";
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
    attributes _attr;
    int GetRandom() 
    {
        srand((unsigned)time(NULL));
        _random = 1 + (rand() % 20);
    }
};

void print_character(character new_character) 
{
    cout << "my gender is " << new_character.GetGender() << endl;
    cout << "I am a" << " " << new_character.GetRace() << endl;
    cout << "my name is" << " " <<new_character._name << endl;
    cout << "my strength is" << " " << new_character._attr.strength << endl;
    cout << "my dexternity is" << " " << new_character._attr.dexterity << endl;
    cout << "my constitution is" << " " << new_character._attr.constitution << endl;
    cout << "my intelligence is" << " " << new_character._attr.intelligence << endl;
    cout << "my wisdom is" << " " << new_character._attr.wisdom << endl;
    cout << "my charisma is" << " " << new_character._attr.charisma << endl;
    
}

int main()
{
    /*character Silverhand(man, human, "Johnny Silverhand");
    print_character(Silverhand);
    character Katrine(woman, elf, "Katrine", {10, 20, 14, 16, 13, 10});
    print_character(Katrine);*/
    int Gender_input;
    int Race_input;
    string Name_input;
    attributes attr;
    cout << "What is the gender of your character" << endl;
    cout << "[0]woman" << " " << "[1]man" << " " << "[2]intersex" << " " << "[3]other" << endl;
    cin >> Gender_input;
    cout << "what race is your character" << endl;
    cout << "[0]human" << " " << "[1]elf" << " " << "[2]nymph" << endl;
    cin >> Race_input;
    cout << "Name your character" << endl;
    cin >> Name_input;
    cout << "my strength is" <<endl;
    cin >> attr.strength;
    cout << "my dexternity is" <<endl;
    cin >> attr.dexterity;
    cout << "my constitution is" <<endl;
    cin >> attr.constitution;
    cout << "my intelligence is"<<endl;
    cin >> attr.intelligence;
    cout << "my wisdom is"  <<endl;
    cin >> attr.wisdom;
    cout << "my charisma is" <<endl;
    cin >> attr.charisma;

    character player(static_cast<GENDER>(Gender_input), static_cast<RACE>(Race_input), Name_input, attr);
    print_character(player);
}
