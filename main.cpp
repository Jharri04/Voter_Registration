//
// Created by Jonah Harris on 9/26/24.
//

#include <iostream>
#include "Voter.h"
#include "Democratic_Voter.h"
#include "Republican_Voter.h"
#include "Other_Voter.h"

using namespace std;

int main(){
    Voter questionnaire;
    string input;
    vector<Voter*> voterVector;
    vector<Voter*> democratVoterVector;
    vector<Voter*> republicanVoterVector;
    vector<Voter*> otherVoterVector;

    while(true) {
        cout << "Enter 1 to fill out voter information, "
                "enter 2 for help deciding who to vote for, "
                "enter 3 to see a list of all voter information, "
                "enter 4 to see a graph of state and population data or "
                "enter q to quit. " << endl;
        //cout << system("pwd") << endl;
        getline(cin, input);

        //Takes user to fill out their voter information
        if (input == "1") {
            //This voter handles data collection
            Voter* inputVoter = new Voter;
            inputVoter->takeVoterData();

            //Export user input to csv file to be analyzed by python code
            inputVoter->exportToCSV("voter_data.csv");

            //Define voters for each type. These will store the inputVoter when the time comes
            Voter* voter = nullptr;
            Voter* democratVoter = nullptr;
            Voter* republicanVoter = nullptr;
            Voter* otherVoter = nullptr;

            //Depending on what the user enters assign that respective voter class will be created
            if (inputVoter->getParty() == "Democratic" || inputVoter->getParty() == "democratic"){
                voter = new Democratic_Voter(*inputVoter);
                democratVoter = new Democratic_Voter(*inputVoter);
                democratVoterVector.push_back(democratVoter);
            }
            else if (inputVoter->getParty() == "Republican" || inputVoter->getParty() == "republican"){
                voter = new Republican_Voter(*inputVoter);
                republicanVoter = new Republican_Voter(*inputVoter);
                republicanVoterVector.push_back(republicanVoter);
            }
            else if (inputVoter->getParty() == "Other" || inputVoter->getParty() == "other"){
                voter = new Other_Voter(*inputVoter);
                otherVoter = new Other_Voter(*inputVoter);
                otherVoterVector.push_back(otherVoter);
            }

            //All voters also get pushed into this vector if the user wants to see the full list
            voterVector.push_back(voter);

            //Takes user to the questionnaire
        } else if (input == "2") {
            questionnaire.voterQuestionnaire();

            //Takes user to see the list of voters
        } else if (input == "3") {
            string input2;
            // Options to see different kind of voters
            cout << "Enter D to see a list of Democratic voters, R to see a list of Republican voters, "
                    "O to see a list of other voters, or E to see a list of every voter in the registry." << endl;
            getline(cin, input2);
            if(input2 == "D" || input2 == "d"){
                for (const auto &v: democratVoterVector) {
                    v->showDemocraticVoterData();
                }
            }
            else if(input2 == "R" || input2 == "r"){
                for (const auto &v: republicanVoterVector) {
                    v->showRepublicanVoterData();
                }
            }
            else if(input2 == "O" || input2 == "o"){
                for (const auto &v: otherVoterVector) {
                    v->showOtherVoterData();
                }
            }
            else if(input2 == "E" || input2 == "e"){
                for (const auto &v: voterVector) {
                    v->showVoterData();
                }
            }
            else{
                cout << "Invalid input" << endl;
            }
        } else if(input == "4"){
            cout << "Analyzing data" << endl;
            system("python3 /Users/Jonah_H/CLionProjects/M3OEP-jharri30/voter_data_analysis.py");
        } else if (input == "q"){
            cout << "Thanks for using the program. Please go vote!" << endl;
            break;
        }

    }
    return 0;
}


