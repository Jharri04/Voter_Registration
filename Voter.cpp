//
// Created by Jonah Harris on 9/26/24.
//

#include "Voter.h"
#include <iostream>
#include <fstream>
using namespace std;

//Constructors
Voter :: Voter() : name(""), party(""), city(""), state(""), question1(""), question2(""), question3("") {}

Voter :: Voter(const string& name, const string& party, const string& city, const string& state, const string& question1, const string& question2, const string& question3) : name(name), party(party), city(city), state(state), question1(question1), question2(question2), question3(question3) {}

//Construct Getters
string Voter ::getName() const {
    return name;
}
string Voter ::getParty() const {
    return party;
}
string Voter ::getCity() const {
    return city;
}
string Voter ::getState() const {
    return state;
}
string Voter ::getQuestion1() const {
    return question1;
}
string Voter ::getQuestion2() const {
    return question2;
}
string Voter ::getQuestion3() const {
    return question3;
}


//Construct Setters
void Voter :: setName(const string& name){
    this->name = name;
}
void Voter :: setParty(const string& party) {
    this->party = party;
}
void Voter :: setCity(const string& city) {
    this->city = city;
}
void Voter :: setState(const string& state) {
    this->state = state;
}
void Voter :: setQuestion1(const string& question1){
    this->question1 = question1;
}
void Voter :: setQuestion2(const string& question2){
    this->question2 = question2;
}
void Voter :: setQuestion3(const string& question3){
    this->question3 = question3;
}

//User inputs information
void Voter :: takeVoterData() {
    while (true) {
        cout << "What's your name?" << endl;
        getline(cin, name);
        if (name.empty()) {
            cout << "Invalid input" << endl;
        }
        else{
            break;
        }
    }
    while (true) {
        cout << "What's your political affiliation? Enter Democratic, Republican, or Other." << endl;
        getline(cin, party);
        if (party.empty()) {
            cout << "Invalid input" << endl;
        }
        else if(party != "Democratic" && party != "democratic" && party != "Republican" && party != "republican" && party != "Other" && party != "other"){
            cout << "Invalid input" << endl;
        }
        else{
            break;
        }
    }
    while (true) {
        cout << "What city do you reside in?" << endl;
        getline(cin, city);
        if (city.empty()) {
            cout << "Invalid input" << endl;
        }
        else{
            break;
        }
    }
    while (true) {
        cout << "What state do you reside in?" << endl;
        getline(cin, state);
        if (state.empty()) {
            cout << "Invalid input" << endl;
        }
        else{
            break;
        }
    }
}

//Display users information
void Voter :: showVoterData() const {
    cout << "Voter Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Party: " << party << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
}
void Voter :: showDemocraticVoterData() const {
    cout << "Voter Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Party: " << party << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
}
void Voter :: showRepublicanVoterData() const {
    cout << "Voter Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Party: " << party << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
}
void Voter ::showOtherVoterData() const {
    cout << "Voter Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Party: " << party << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
}

//Asks user a series of questions to recommend a party for them to associate with
void Voter :: voterQuestionnaire() {
    float sum;
    float average;
    while (true) {
        cout << "Would you rather have a higher income tax or pay more for groceries? "
                "Enter 1 for tax or 2 for groceries" << endl;
        cin >> question1;
        if (question1 != "1" && question1 != "2") {
            cout << "Invalid input." << endl;
        } else {
            break;
        }
    }
    while (true) {
        cout << "Do you feel like immigration helps or hurts this country? "
                "Enter 1 for helps and 2 for hurts" << endl;
        cin >> question2;
        if (question2 != "1" && question2 != "2") {
            cout << "Invalid input." << endl;
        } else {
            break;
        }
    }
    while (true) {
        cout << "Is getting an abortion morally ethical? "
                "Enter 1 for yes or 2 for no" << endl;
        cin >> question3;
        if (question3 != "1" && question3 != "2") {
            cout << "Invalid input." << endl;
        } else {
            break;
        }
    }
    //Uses the users answers to calculate an average
    sum = stoi(question1) + stoi(question2) + stoi(question3);
    average = sum / 3;

    //If the average is above or below the 1.5 threshold determines the recommendation
    if (average > 1.5) {
        cout << "You prolly a republican" << endl;
    } else {
        cout << "You prolly a democrat" << endl;
    }
}

//Adds voter data to a vector
void Voter :: addVoterData(vector<Voter>& voters, const Voter& voter) {
    voters.push_back(voter);
}

void Voter :: exportToCSV(const string& filename) const{
    ofstream file;
    file.open(filename, ios::app); // Open in append mode

    // Write voter data in CSV format
    file << name << "," << party << "," << city << "," << state << "\n";

    file.close();
}










