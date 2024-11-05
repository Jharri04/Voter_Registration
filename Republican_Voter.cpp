//
// Created by Jonah Harris on 9/27/24.
//

#include "Republican_Voter.h"
#include <iostream>
using namespace std;

// Default constructor
Republican_Voter::Republican_Voter() : Voter() {
    setParty("Republican");
}

// Parameterized constructor
Republican_Voter::Republican_Voter(const Voter& baseVoter)
        : Voter(baseVoter.getName(), "Republican", baseVoter.getCity(), baseVoter.getState(),
                baseVoter.getQuestion1(), baseVoter.getQuestion2(), baseVoter.getQuestion3()) {}

// Overridden method to show voter data
void Republican_Voter::showVoterData() const {
    Voter::showVoterData();
}
// Class specific overridden method to show voter data
void Republican_Voter::showRepublicanVoterData() const {
    Voter::showRepublicanVoterData();
}


