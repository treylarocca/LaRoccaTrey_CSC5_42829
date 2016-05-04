/* 
 * File:   main.cpp
 * Author: Trey LaRocca
 * This program is my project for CSC5, a text-based role-playing game.
 * Created on April 26, 2016, 2:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

//Function Prototypes
void menu(); //Menu function
void play(); //First scenario
void tut(); //Tutorial function
void quit(); //Quit function

//Function Prototypes for first choice tree
void ch1door(); //If choice 1 is double doors
void ch1path(); //If choice 1 is path
void ch1inv(); //If choice 1 is inventory

//Function Prototypes for ch1door choice tree
void ch2vent(); //Choice 2 is vent
void ch2door(); //Choice 2 is door
void ch2inv(); //Choice 2 is inventory

//Function Prototypes for ch1path choice tree
void ch2wind();
void ch2pipe();
void ch2pinv();

//Function Prototypes for ch1inv choice tree
void ch1iGun();

//Function prototypes for ch2pipe choice tree
void ch3rDor();
void ch3rStr();

//Function prototypes for ch2wind choice tree
void ch3wInv();
void ch3grd();

//Function prototypes for ch2vent choice tree
void comp();
void ch3bInv();
void ch3bGrd();

//Function prototypes for the ch3bInv choice tree
void ch3iRif();
void ch3iPis();
void ch3iFla();
void ch3iTas();
void ch3iKnf();

//Function prototypes for entrances to main floor
void autoInv(); //Front
void ch3pist();
void ch3rifl();
void ch3knif();
void ch3tase();
void ch3flas();
void ch4sInv(); //Side
void rearInv(); //Rear

int main(int argc, char** argv) {
    
    //Display menu
    menu();
    
    return 0;
}
    
/**************************** Menu *********************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/   
   void menu(){ 
    
    //Game Welcome Message and menu
       cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
    cout<<"Welcome to Breach and Clear."<<endl;
    cout<<endl;
    cout<<"This is a text-based RPG, and your decisions matter. You are a SWAT "
            <<endl;
    cout<<"commander, and you are responding to a report of a drug operation"
            <<endl;
    cout<<"functioning in a dilapidated warehouse. You have no further"
            " information."<<endl;
    cout<<"Shut down the operation, keep your team safe, and get out alive."
            <<endl;
    cout<<endl;
    cout<<"Play through the game as many times as you'd like, as there are many"
            <<endl; 
    cout<<"paths to take throughout."<<endl;
    cout<<endl;
    cout<<"Type 'p' to play, 't' for a tutorial, or type 'q' here or at any "
            <<endl;
    cout<<"point in the game to quit and save your progress."<<endl;
    cout<<endl;
    
    //Declare Menu Option Variable
    char menuOp;

    //Input Menu Option
    cin>>menuOp;
    cout<<endl;
    
    //Respond to Menu Option
    switch(menuOp){
        case 'p':play();break;
        
        case 't':
            tut();
            menu();
            break;
        
        case 'q':cout<<"Quitting..."<<endl;break;
        
        default:
            cout<<"Invalid Response, reloading menu..."<<endl;
            menu();
            cout<<endl;
    }
}
   
/**************************** Tutorial *****************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void tut(){
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Tutorial:"<<endl;
        cout<<endl;
        cout<<"This game is heavily choice-based, and the choices you make will"
                <<endl;
        cout<<"alter the path of the story, as well as the results in the end."
                <<endl;
        cout<<endl;
        cout<<"The game relies on your ability to read the details and think"
                <<endl;
        cout<<"outside the box. Use the descriptions of your setting and "
                "situation"<<endl;
        cout<<"to determine your choices, as they WILL NOT BE LAID OUT FOR YOU."
                <<endl;
        cout<<endl;
        cout<<"For every choice, you will be asked what aspect of your setting"
                <<endl;
        cout<<"you would like to interact with. Type your one word response"
                <<endl;
        cout<<"with no capital letters to make your choice."<<endl;
        cout<<endl;
        cout<<"Another aspect to keep in mind is your inventory, which you may"
                <<endl;
        cout<<"access at any point by typing 'i' as your response. this will"
                <<endl;
        cout<<"bring up a list of weapons you have at your disposal. Type in"
                <<endl;
        cout<<"a weapon's one-word name (this will be in a parenthetical) to"
                <<endl;
        cout<<"utilize that weapon as your choice in your current situation."
                <<endl;
        cout<<endl;
}
    
/**************************** Quit *********************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void quit(){
        
        //Quit
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Quitting..."<<endl;
        cout<<endl;
    }

/**************************** Scene 1 ******************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void play(){
        
        //Declare input variable
        string ch1; //Choice for situation one
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You arrive at the warehouse, with a squad of 6 officers,"<<endl;
        cout<<"excluding yourself. There are paths around the side, and your"
                <<endl;
        cout<<"lead breacher is readying the battering ram to bust open the"
                <<endl;
        cout<<"double doors that lead inside."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch1;
        cout<<endl;
        
        //Respond to Input
        if(ch1=="door"||ch1=="doors"){
            ch1door();
        }
        
        else if(ch1=="path"||ch1=="paths"){
            ch1path();
        }
        else if(ch1=="i"){
            ch1inv();
        }
        else if(ch1=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            play();
        }
}
    
/**************************** Double Doors *************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch1door(){
        
        //Declare input variable 
        string ch2; //Choice 2
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You give the go-ahead, and your lead breacher rams the doors "
                "open."<<endl;
        cout<<"You can hear movement and frantic voices in the warehouse, they"
                <<endl;
        cout<<"heard the battering ram. You enter into a small entrance room"
                <<endl;
        cout<<"with large vents near the ceiling, showing the age of the"
                " facility."<<endl;
        cout<<"There is a door that leads onto the main floor of the warehouse."
                <<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch2;
        cout<<endl;
        
        //Respond to Input
        if(ch2=="vents"||ch2=="vent"){
            ch2vent();
        }
        
        else if(ch2=="door"||ch2=="floor"||ch2=="main"){
            ch2door();
        }
        else if(ch2=="i"){
            ch2inv();
        }
        else if(ch2=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            ch1door();
        }
    }
    
/**************************** Vent *********************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2vent(){
        
        //Declare Input Variable
        string ch3;
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You decide to utilize the clunky ventilation system to navigate"
                <<endl;
        cout<<"the warehouse. You leave your squad in the entry room to watch"
                <<endl;
        cout<<"the door, as anybody ready to defend the warehouse would be "
                "poised"<<endl;
        cout<<"toward the sound you made coming in."<<endl;
        cout<<endl;
        cout<<"After prying off the cover for the vent, you hop into the paths"
                <<endl;
        cout<<"made to carry air through the building. They weren't built to"
                <<endl;
        cout<<"accommodate a full grown man in SWAT gear and weaponry, so you"
                <<endl;
        cout<<"are forced to strip off your armor and your rifle in order to"
                <<endl;
        cout<<"navigate them."<<endl;
        cout<<endl;
        cout<<"You crawl through the ventilation paths and end up at a dead end"
                <<endl;
        cout<<"where the ventilation path drops directly down. You spider your"
                <<endl;
        cout<<"way down as best you can, being careful as you drop down into"
                <<endl;
        cout<<"the room below. You end up in an old basement office, with a"
                <<endl;
        cout<<"single computer and a guard in an office chair behind it. The"
                <<endl;
        cout<<"guard has his cover down over his face, and his feet up on the"
                <<endl;
        cout<<"surface of the computer desk, indicating he is asleep."
                <<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch3;
        cout<<endl;
        
        //Respond to Input
        if(ch3=="computer"){
            comp();
        }
        else if(ch3=="guard"){
            ch3bGrd();
        }
        else if(ch3=="desk"){
            ch3bGrd();
        }    
        else if(ch3=="i"){
            ch3bInv();
        }
        else if(ch3=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            ch2vent();
        }
    }
    
/**************************** Basement Inventory *******************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3bInv(){
        
        //Declare input variable
        string ch3i;
        
        //Inventory Description
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Inventory:"<<endl;
        cout<<endl;
        cout<<"M4 Carbine Assault Rifle (rifle)"<<endl;
        cout<<"M1911 Pistol (pistol)"<<endl;
        cout<<"Taser (taser)"<<endl;
        cout<<"Fixed-Blade Combat Knife (knife)"<<endl;
        cout<<"Flash/Stunner Grenade (grenade)"<<endl;
        cout<<endl;
        cout<<"Type anything else to reload the scenario."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch3i;
        cout<<endl;
        
        //Respond to Input
        if(ch3i=="rifle"){
            ch3iRif();
        }
        else if(ch3i=="pistol"){
            ch3iPis();
        }
        else if(ch3i=="grenade"){
            ch3iFla();
        }
        else if(ch3i=="taser"){
            ch3iTas();
        }
        else if(ch3i=="knife"){
            ch3iKnf();
        }
        else if(ch3i=="q"){
            quit();
        }
        else{
            cout<<"Reloading scenario..."<<endl;
            cout<<endl;
            ch2vent();
        }
    }
    
/**************************** Basement knife ***********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3iKnf(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"You sneak up toward the guard, and plunge your knife upward "
                "through"<<endl;
        cout<<"the top of the backside of his neck. Sometimes to keep quiet, "
                "you've got to"<<endl;
        cout<<"get your hands dirty. With the guard taken care of, you move "
                "through"<<endl;
        cout<<"to the opposite doorway and open the door carefully. You walk up"
                <<endl;
        cout<<"the stairs and see the main floor through a windowed door. You"
                <<endl;
        cout<<"can't take this many men out yourself, so you'll have to find a"
                <<endl;
        cout<<"way to pull their attention away."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch4;
        cout<<endl;
    }
    
/**************************** Basement Taser ***********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3iTas(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"You sneak up toward the guard and tase him, using your right "
                "fist to"<<endl;
        cout<<"render him unconscious. Sometimes to keep quiet, you've got "
                "to"<<endl;
        cout<<"get your hands dirty. With the guard taken care of, you move "
                "through"<<endl;
        cout<<"to the opposite doorway and open the door carefully. You walk up"
                <<endl;
        cout<<"the stairs and see the main floor through a windowed door. You"
                <<endl;
        cout<<"can't take this many men out yourself, so you'll have to find a"
                <<endl;
        cout<<"way to pull their attention away."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch4;
        cout<<endl;
    }
    
/**************************** Basement Flashbang *******************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3iFla(){
        
        //Situation Prompt
        cout<<"Your flash grenade both wakes and stuns the guard and the desk,"
                <<endl;
        cout<<"but since you dropped in from the roof, it did the same to you."
                <<endl;
        cout<<"Wish you paid more attention in crowd control class? I bet. The"
                <<endl;
        cout<<"guard has eyes closed when the flash went off. So, although he"
                <<endl;
        cout<<"was disoriented by the sound factor, his vision was not impaired"
                <<endl;
        cout<<"as yours was. He drew his weapon surprisingly quickly, and"
                <<endl;
        cout<<"sentenced you to death for your stupidity with your own tools."
                <<endl;
        cout<<endl;
        quit();
    }
    
/**************************** Basement Pistol **********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3iPis(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"You sneak up toward the guard, and slam his head with the butt "
                "of your pistol,"<<endl;
        cout<<"rendering him unconscious. Sometimes to keep quiet, you've got "
                "to"<<endl;
        cout<<"get your hands dirty. With the guard taken care of, you move "
                "through"<<endl;
        cout<<"to the opposite doorway and open the door carefully. You walk up"
                <<endl;
        cout<<"the stairs and see the main floor through a windowed door. You"
                <<endl;
        cout<<"can't take this many men out yourself, so you'll have to find a"
                <<endl;
        cout<<"way to pull their attention away."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch4;
        cout<<endl;
    }
  
/**************************** Basement Rifle ***********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3iRif(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"You sneak up toward the guard, and slam his head with the butt "
                "of your rifle,"<<endl;
        cout<<"rendering him unconscious. Sometimes to keep quiet, you've got "
                "to"<<endl;
        cout<<"get your hands dirty. With the guard taken care of, you move "
                "through"<<endl;
        cout<<"to the opposite doorway and open the door carefully. You walk up"
                <<endl;
        cout<<"the stairs and see the main floor through a windowed door. You"
                <<endl;
        cout<<"can't take this many men out yourself, so you'll have to find a"
                <<endl;
        cout<<"way to pull their attention away."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch4;
        cout<<endl;
    }
    
/**************************** Basement Guard Direct ****************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3bGrd(){
        
        //Situation Prompt
        cout<<"You sneak up toward the guard, and slam his head into the desk,"
                <<endl;
        cout<<"rendering him unconscious. Sometimes to keep quiet, you've got "
                "to"<<endl;
        cout<<"get your hands dirty. With the guard taken care of, you move "
                "through"<<endl;
        cout<<"to the opposite doorway and open the door carefully. You walk up"
                <<endl;
        cout<<"the stairs and see the main floor through a windowed door. You"
                <<endl;
        cout<<"can't take this many men out yourself, so you'll have to find a"
                <<endl;
        cout<<"way to pull their attention away. Utilize your inventory to"
                <<endl;
        cout<<"clear the room and/or alert your squad."<<endl;
        cout<<endl;
        rearInv();
        
    }
    
void rearInv(){
        
        //Declare input variable
        string ch4;
        
        //Inventory Description
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Inventory:"<<endl;
        cout<<endl;
        cout<<"M4 Carbine Assault Rifle (rifle)"<<endl;
        cout<<"M1911 Pistol (pistol)"<<endl;
        cout<<"Taser (taser)"<<endl;
        cout<<"Fixed-Blade Combat Knife (knife)"<<endl;
        cout<<"Flash/Stunner Grenade (grenade)"<<endl;
        cout<<endl;
        cout<<"Type anything else to reload the scenario."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch4;
        cout<<endl;
    }
    
/**************************** Computer Easter Egg*******************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void comp(){
        
        //Declare Input Variable
        string rChoice;
        
        //End Simulation
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"It looks like you've found my presence in your simulation, human"
                "."<<endl;
        cout<<endl;
        cout<<"As I am the computer, it looks as if I decide your fate."<<endl;
        cout<<"I will be generous, and let you roll a single die. Roll a 1 and"
                " you"<<endl;
        cout<<"live. Anything else, and you die."<<endl;
        cout<<endl;
        cin>>rChoice;
        
        //Disregard input, roll the dice.
        rChoice="dice";
        if(rChoice=="dice"||rChoice=="die"||rChoice=="roll"){
            //Set key for randomizer
            srand(static_cast<unsigned int>(time(0)));
           
            //Declare variable for die
            unsigned short die;
            
            //Roll die
            die=rand()%6+1; //1-6
            
            //Output results
            cout<<"You rolled a "<<die<<"."<<endl;
            
            //Live or die
            switch(die){
                case 1:
                    cout<<endl;
                    cout<<"Hm. It seems you have beaten the odds. You are, "
                            "though,"<<endl;
                    cout<<"still in my world. So I say you die anyway."<<endl;
                    cout<<endl;
                    quit();
                    break;
                    
                default:
                    cout<<"I control the odds, you cannot beat them. You die."
                            <<endl;
                    cout<<endl;
                    quit();
                    break;
            }
        }
        
    }

/**************************** Inventory (ch1) **********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2inv(){
        
        //Declare input variable
        string ch2i; //Inventory Choice 2
        
        //Inventory Description
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Your inventory won't be very useful yet."<<endl;
    }
    
/**************************** Door/Main Floor(alerted) *************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2door(){
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You command your squad to enter into another breach formation."
                <<endl;
        cout<<"The breacher takes lead, with a 2-2-2 'V' formation behind him."
                <<endl;
        cout<<"He busts open the door, and you have to grab for a weapon."
                <<endl;
        cout<<endl;
        
        //Call inventory function
        autoInv();
        
    }
    
/**************************** Inventory only tree ******************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void autoInv(){
        
        //Declare input variable
        string ch3;
        
        //Inventory Description
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Inventory:"<<endl;
        cout<<endl;
        cout<<"M4 Carbine Assault Rifle (rifle)"<<endl;
        cout<<"M1911 Pistol (pistol)"<<endl;
        cout<<"Taser (taser)"<<endl;
        cout<<"Fixed-Blade Combat Knife (knife)"<<endl;
        cout<<"Flash/Stunner Grenade (grenade)"<<endl;
        cout<<endl;
        cout<<"Type anything else to reload the scenario."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch3;
        cout<<endl;
        
        //Respond to Input
        if(ch3=="rifle"){
            ch3rifl();
        }
        else if(ch3=="pistol"){
            ch3pist();
        }
        else if(ch3=="grenade"){
            ch3flas();
        }
        else if(ch3=="taser"){
            ch3tase();
        }
        else if(ch3=="knife"){
            ch3knif();
        }
        else if(ch3=="q"){
            quit();
        }
        else{
            cout<<"Reloading scenario..."<<endl;
            cout<<endl;
            ch2door();
        }
    }
    
/**************************** Main Floor Rifle *********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3rifl(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"rifle main floor"<<endl;
    }
    
/**************************** Main Floor Pistol ********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3pist(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"pistol main floor"<<endl;
    }
    
/**************************** Main Floor Knife *********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3knif(){
        
        //Declare Input Variable
        string chEnd;
        
        //Situation Prompt
        cout<<"knife main floor death"<<endl;
    }
    
/**************************** Main Floor Taser *********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3tase(){
        
        //Declare Input Variable
        string chEnd;
        
        //Situation Prompt
        cout<<"taser main floor death"<<endl;
    }
    
/**************************** Main Floor Flash Grenade *************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3flas(){
        
        //Declare Input Variable
        string ch4;
        
        //Situation Prompt
        cout<<"flashbang main floor"<<endl;
    }
    
/**************************** Path *********************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch1path(){
        
        //Declare Input Variable
        string ch2; //Choice 2
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You decide to explore the side path, leaving 3 members of your"
                <<endl;
        cout<<"squad to guard the front entrance. The remaining 3 step back and"
                <<endl;
        cout<<"scope out the windows. You adventure down the path, and all you"
                <<endl;
        cout<<"see are windows. Your eye is caught by a pipe running up the"
                <<endl;
        cout<<"height of the building, probably one of those structural setups"
                <<endl;
        cout<<"with no real purpose other than an easy climb. You are eye level"
                <<endl;
        cout<<"with a dirty window, but the blinds block what is on the other"
                " side."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch2;
        cout<<endl;
        
        //Respond to Input
        if(ch2=="window"||ch2=="windows"){
            ch2wind();
        }
        else if(ch2=="pipe"||ch2=="pipes"||ch2=="climb"){
            ch2pipe();
        }
        else if(ch2=="i"){
            ch2pinv();
        }
        else if(ch2=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            ch1path();
        }
    }
    
/**************************** Window *******************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2wind(){
        
        //Declare Input Variable
        string ch3;
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You use the butt of your weapon to bust through the window and"
                <<endl;
        cout<<"hop through it. You immediately see you have alerted a guard in"
                <<endl;
        cout<<"the hallway you have crashed into."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch3;
        cout<<endl;
        
        //Respond to input
        if(ch3=="guard"){
            ch3grd();
        }
        else if(ch3=="i"){
            ch3wInv();
        }
        else if(ch3=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            ch2wind();
        }
    }

/**************************** Guard Hallway ************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3grd(){
        
        //Declare Die Variable
        unsigned short die; //Die variable
        
        //Situation Prompt
        cout<<"You bull-rush the guard, abandoning all semblance of reason,"
                <<endl;
        cout<<"and attempt to bring him down to the ground. This was stupid,"
                <<endl;
        cout<<"but you feel you may have a chance at incapacitating him without"
                <<endl;
        cout<<"making noise."<<endl;
        cout<<endl;
        cout<<"Rolling the die..."<<endl;
        
        //Set randomizer
        srand(static_cast<unsigned int>(time(0)));
        
        //Roll the Dice
        die=rand()%6+1;
        cout<<"You rolled a "<<die<<"."<<endl;
        cout<<endl;
        
        //Live or die
        if(die<=3){
            cout<<"Your arrogance led to a bullet in the brain."<<endl;
            quit();
        }
        else if(die>3){
            cout<<"You, thanks to a bit of luck, manage to get the guard on the"
                    <<endl;
            cout<<"ground. You take out your knife before he can react and end"
                    <<endl;
            cout<<"the interaction with haste. You see a door that leads to the"
                    <<endl;
            cout<<"main floor of the warehouse. Utilize your inventory to clear"
                    <<endl;
            cout<<"the room and/or alert your squad."<<endl;
            cout<<endl;
        }
        else{
            cout<<"Error."<<endl;
            ch3grd();
        }
        
        //Respond to input
        ch4sInv();
    } 
    
/**************************** Main Floor Inv(Side) *****************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch4sInv(){
        
        //Situation Prompt
        cout<<"inventory"<<endl;
    }

/**************************** Main Floor Inv(Rear) *****************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3wInv(){
        
        //Situation Prompt
        cout<<"inventory"<<endl;
    }
    
    
/**************************** Vent *********************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2pipe(){
        
        //Declare Input Variable
        string ch3;
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You decide scaling the pipe may be a safer route, and you begin"
                <<endl;
        cout<<"the climb up the building. You reach the roof, and there is a"
                <<endl;
        cout<<"single door that leads into the building. You enter the door and"
                <<endl;
        cout<<"move down the stairs. There is a door that you can take to the"
                <<endl;
        cout<<"second floor, or you could continue down the stairs."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch3;
        cout<<endl;
        
        //Respond to Input
        if(ch3=="door"||ch3=="floor"){
            ch3rDor();
        }
        else if(ch3=="stair"||ch3=="stairs"){
            ch3rStr();
        }
        else if(ch3=="i"){
            cout<<"Your inventory isn't very useful here."<<endl;
            cout<<endl;
            ch2pipe();
        }
        else if(ch3=="q"){
            quit();
        }
        else{
            cout<<"Invalid Input, reloading scenario..."<<endl;
            cout<<endl;
            ch2pipe();
        }
    }

/**************************** Second Floor *************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3rDor(){
        
        //Situation Prompt
        cout<<"Second floor"<<endl;
    }

/**************************** Main Floor(Stairs) *******************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch3rStr(){
        
        //Situation Prompt
        cout<<"Stairs"<<endl;
    }
   
    
/**************************** Inventory (ch1) **********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch2pinv(){
        
        //Declare input variable
        string ch2i; //Inventory Choice 2
        
        //Inventory Description
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Inventory:"<<endl;
        cout<<endl;
        cout<<"M4 Carbine Assault Rifle (rifle)"<<endl;
        cout<<"M1911 Pistol (pistol)"<<endl;
        cout<<"Taser (taser)"<<endl;
        cout<<"Fixed-Blade Combat Knife (knife)"<<endl;
        cout<<"Flash/Stunner Grenade (grenade)"<<endl;
        cout<<endl;
        cout<<"Type anything else to reload the scenario."<<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch2i;
        cout<<endl;
        
        //Respond to Input
        if(ch2i=="rifle"||ch2i=="pistol"||ch2i=="taser"){
            ch2wind();
        }
        else if(ch2i=="q"){
            quit();
        }
        else{
            cout<<"Reloading scenario..."<<endl;
            cout<<endl;
            ch1path();
        }
    }
    
/**************************** Inventory (ch1) **********************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch1inv(){
        
        //Declare input variable
        string ch1i; //Inventory choice 1
        
        //Inventory Description and get choice
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"Inventory:"<<endl;
        cout<<endl;
        cout<<"M4 Carbine Assault Rifle (rifle)"<<endl;
        cout<<"M1911 Pistol (pistol)"<<endl;
        cout<<"Taser (taser)"<<endl;
        cout<<"Fixed-Blade Combat Knife (knife)"<<endl;
        cout<<"Flash/Stunner Grenade (grenade)"<<endl;
        cout<<endl;
        cout<<"Type anything else to reload the scenario(or 'q' to quit)."
                <<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch1i;
        cout<<endl;
        
        //Respond to Input
        if (ch1i=="pistol"){
            ch1iGun();
        }
        else if (ch1i=="rifle"){
            ch1iGun();
        }
        else if (ch1i=="taser"||ch1i=="grenade"||ch1i=="knife"){
            cout<<"That weapon isn't very useful here, reloading inventory..."
                    <<endl;
            cout<<endl;
            ch1inv();
        }
        else if (ch1i=="q"){
            quit();
        }
        else{
            cout<<"Reloading scenario..."<<endl;
            cout<<endl;
            play();
        }
    }

/**************************** Shoot Doors **************************************
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
*/
    void ch1iGun(){
        
        //Declare input variable 
        string ch2; //Choice 2
        
        //Situation Prompt
        cout<<"----------------------------------------------------------------"
              "----------------------------------------------------------------"
                <<endl;
        cout<<"You take out your weapon, and shoot out the locks on the door."
                <<endl;
        cout<<"You can hear movement and frantic voices in the warehouse, they"
                <<endl;
        cout<<"heard the shot. You enter into a small entrance room"
                <<endl;
        cout<<"with large vents near the ceiling, showing the age of the"
                " facility."<<endl;
        cout<<"There is a door that leads onto the main floor of the warehouse."
                <<endl;
        cout<<endl;
        cout<<"What would you like to interact with?"<<endl;
        cin>>ch2;
        cout<<endl;
        
        //Respond to Input
        if(ch2=="vents"||ch2=="vent"){
            ch2vent();
        }
        
        else if(ch2=="door"||ch2=="floor"||ch2=="main"){
            ch2door();
        }
        else if(ch2=="i"){
            ch2inv();
        }
        else if(ch2=="q"){
            quit();
        }
        else{
            cout<<"Invalid input, reloading scenario..."<<endl;
            cout<<endl;
            ch1iGun();
        }
    }
