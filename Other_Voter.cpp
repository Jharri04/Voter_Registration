//
// Created by Jonah Harris on 9/27/24.
//

#include "Other_Voter.h"
#include <iostream>
using namespace std;

// Default constructor
Other_Voter::Other_Voter() : Voter() {
    setParty("Other");
}

// Parameterized constructor
Other_Voter::Other_Voter(const Voter& baseVoter)
        : Voter(baseVoter.getName(), "Other", baseVoter.getCity(), baseVoter.getState(),
                baseVoter.getQuestion1(), baseVoter.getQuestion2(), baseVoter.getQuestion3()) {}

// Overridden method to show voter data
void Other_Voter::showVoterData() const {
    Voter::showVoterData();
}

// Class specific overridden method
void Other_Voter::showOtherVoterData() const {
    Voter::showOtherVoterData();
}