#include <iostream>
#include <string>
using namespace std;
/*
 *
 * Jan 2019
 * Patrick Mutwiri
 * For Bae Mwitu, amenya nkuthira
 *
 * */
class DecisionSupport {
public:
    string typeOfDay, niceDay, season, action,thenAction, EffectAction, destination,decisionMade;
    static void formatHeader(){
        cout<<"--------------------------- \n";
        cout<<"Decision Support System - TAP \n";
        cout<<"--------------------------- \n";
    }
    static void formatFooter(){
        cout<<"\n--------------------------- \n";
    }

    string getData() {
        cout<<"Are you having a good day?\t"; // we'll test against yes/no. if no
        cin>>niceDay;
        if(niceDay=="yes") {
            typeOfDay="nice";
        } else {
            typeOfDay = "not a nice day";
        }
        // season
        cout<<"Enter season. summer or winter\t"; // we'll test against summer or winter
        cin>>season;
    }

    string makeDecision() {
        action = "";
        thenAction = "";
        EffectAction = "";
        if(typeOfDay == "nice" && season=="summer") {
            action = "go to the golf course";
            thenAction = "play golf";
            EffectAction = " I have fun";
        }
        if(typeOfDay == "nice" && season=="winter") {
            action = "go to the ski resort";
            thenAction = "go skiing";
            EffectAction = " I have fun";
        }
        if(typeOfDay == "not a nice day" && season=="summer") {
            action = "go to work";
            thenAction = "make money";
        }
        if(typeOfDay == "not a nice day" && season=="winter") {
            action = "go to class";
            thenAction = "learn something";
        }

        // output
        cout<<"I "<<action<<" and "<<thenAction<<thenAction<<endl;
    }
};

int main() {
    DecisionSupport ds;
    // display header
    DecisionSupport::formatHeader();
    // get Data to make decision
    ds.getData();
    // Make Decision with data collected
    ds.makeDecision();
    // display footer
    DecisionSupport::formatFooter();
}