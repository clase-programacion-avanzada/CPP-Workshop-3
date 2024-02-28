#ifndef MATCH_H
#define MATCH_H

#include <string>
#include <sstream>
#include "List.h"
#include "TextFileHandler.h"

using namespace std;

struct Match {
    string localTeam;
    int scoreLocalTeam;
    string visitingTeam;
    int scoreVisitingTeam;

    int getPointsForLocalTeam() {

       
        return 0;
    }

    int getPointsForVisitingTeam() {

        return 0;
    }
};

Match getMatchFromLine(string line, char delimiter) {
        Match match;
        
        
        
        return match;
}

string getLineFromMatch(Match match, char delimiter) {
    string line;


    return line;
}


     

#endif /* MATCH_H */