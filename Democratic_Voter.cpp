//
// Created by Jonah Harris on 9/27/24.
//

#include "Democratic_Voter.h"
#include <iostream>
using namespace std;

// Default constructor
Democratic_Voter::Democratic_Voter() : Voter() {
    setParty("Democratic");
}

// Parameterized constructor
Democratic_Voter::Democratic_Voter(const Voter& baseVoter)
        : Voter(baseVoter.getName(), "Democratic", baseVoter.getCity(), baseVoter.getState(),
                baseVoter.getQuestion1(), baseVoter.getQuestion2(), baseVoter.getQuestion3()) {}

// Overridden method to show voter data
void Democratic_Voter::showVoterData() const {
    Voter::showVoterData();
}

// Class specific overridden voter method
void Democratic_Voter::showDemocraticVoterData() const {
    Voter::showDemocraticVoterData();
}
