//
// Created by Jonah Harris on 9/26/24.
//

#ifndef VOTER_REGISTRATION_VOTER_H
#define VOTER_REGISTRATION_VOTER_H

#include <string>
#include <vector>
using namespace std;


class Voter {
public:
    //Define constructors
    Voter();
    Voter(const string& name, const string& party, const string& city, const string& state,
          const string& question1, const string& question2, const string& question3);

    //Define Getters
    string getName() const;
    string getParty() const;
    string getCity() const;
    string getState() const;
    string getQuestion1() const;
    string getQuestion2() const;
    string getQuestion3() const;


    //Define Setters
    void setName(const string& name);
    void setParty(const string& party);
    void setCity(const string& city);
    void setState(const string& state);
    void setQuestion1(const string& question1);
    void setQuestion2(const string& question2);
    void setQuestion3(const string& question3);


    //Define method that will allow voters to input their information
    void takeVoterData();


    //Define method that can show a voter's information
    void virtual showVoterData() const;

    //Define methods for subclasses to override
    void virtual showDemocraticVoterData() const;

    void virtual showRepublicanVoterData() const;

    void virtual showOtherVoterData() const;

    //Define method that allows the user to take a questionnaire to help them decide who to vote for
    void voterQuestionnaire();

    //Define method that takes the data a user enters and stores it in a vector
    static void addVoterData(vector<Voter>& voters, const Voter& voter);

    //Define method to export user inputted data to a CSV file
    void exportToCSV(const string& filename) const;


private:
    //Set up variables
    string name;
    string party;
    string city;
    string state;
    string question1;
    string question2;
    string question3;

};


#endif //VOTER_REGISTRATION_VOTER_H
