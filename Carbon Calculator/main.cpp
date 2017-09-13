//
//  main.cpp
//  Carbon Calculator
//
//  Created by Joseph Ravalese III on 9/12/17.
//  Copyright © 2017 Joseph Ravalese. All rights reserved.
//

#include <iostream>
using namespace std;



/*
 
************ Functions *************

 Travel:
 
travelByGasCar()
travelByPlane()
travelByTrain()
travelBySubway()

 
 
 Stay:
 
 

 
*/





//Calculates The total carbon footprint of using a gas car using user input of MPG, Distance traveled, etc
double travelByPlane() {
    double mpg;
    double distance;
    double gallonsNeeded;
    double totalCarbonfootprint;
    
    cout << "Please enter fuel efficiency of Car (miles per gallon)" << endl;
    cin >> mpg;
    if (mpg < 0) {
        cout << "mpg cannot be less than zero" << endl;
    }
    
    else {
        cout << "please enter total distance travelled in miles" << endl;
        cin >> distance;

        if (distance < 0) {
            cout << "distance cannot be less than zero" << endl;
        }
        
        else {
            gallonsNeeded = distance/mpg;
            cout << "Gallons of Gasoline needed: " << gallonsNeeded << endl;
        }
    }
    
    return totalCarbonfootprint;
}



//Calculates The total carbon footprint of using a gas car using user input of MPG, Distance traveled, etc
double travelByGasCar() {
    double mpg;
    double distance;
    double gallonsNeeded;
    double totalCarbonfootprint;
    
    cout << "Please enter fuel efficiency of Car (miles per gallon)" << endl;
    cin >> mpg;
    if (mpg < 0) {
        cout << "mpg cannot be less than zero" << endl;
    }
    
    else {
        cout << "please enter total distance travelled in miles" << endl;
        cin >> distance;
        
        if (distance < 0) {
            cout << "distance cannot be less than zero" << endl;
        }
        
        else {
            gallonsNeeded = distance/mpg;
            cout << "Gallons of Gasoline needed: " << gallonsNeeded << endl;
        }
    }
    
    return totalCarbonfootprint;
}


int main() {
    travelByGasCar();
    
    return 0;
}
