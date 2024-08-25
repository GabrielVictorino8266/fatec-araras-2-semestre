#include <iostream>
#include <string>

using namespace std;

string getPlate();
string getBrand();
int getYearManifacturer();

//functions to car_maintenance struct
string getDate();
string getLocation();
string getDescription();

struct review{
    string date;
    string location;
    string description;
};

struct carSubscribe{
    string plate;
    string brand;
    int year_manifacturer;
    review car_review[5];
};

int main(){
    int qty_cars = 2;
    int REVIEWS = 2;

    carSubscribe car[qty_cars];

    cout << "Are expected to have: " << qty_cars << " today. Let's type: " << endl;

    //getting info
    for(int i = 0; i < qty_cars;i++){
        cout << "-----------------Car #" << i+1 << "-----------------\n\n";
        car[i].plate = getPlate();
        car[i].brand = getBrand();
        car[i].year_manifacturer = getYearManifacturer();
        for(int i_review = 0; i_review < REVIEWS;i_review++){
            cout << "\n\nType the info of the review #" << i_review+1 << endl;
            car[i].car_review[i_review].date = getDate();
            car[i].car_review[i_review].location = getLocation();
            car[i].car_review[i_review].description = getDescription();
        }
    }

    for(int i =0; i< qty_cars;i++){
        cout << "-----------------Car #" << i+1 << "-----------------\n\n";
        cout << "Plate: " << car[i].plate << endl;
        cout << "Brand: " << car[i].brand << endl;
        cout << "Year of manifacturer:" << car[i].year_manifacturer << endl;
        for(int i_review  = 0; i_review < REVIEWS;i_review++){
            cout << "\n\nInfo of the review #" << i_review+1 << endl;

            cout << "Date: " << car[i].car_review[i_review].date << endl;
            cout << "Location: " << car[i].car_review[i_review].location << endl;
            cout << "Description: " << car[i].car_review[i_review].description << endl;
        }
    }

    return 0;
};


string getPlate(){
    string plate;
    cout << "Type the plate of the car: (without spaces)" << endl;
    cin >> plate;

    return plate;
}

int getYearManifacturer(){
    int year;
    cout << "Type the year of manifacturer: " << endl;
    cin >> year;

    return year;
}

string getBrand(){
    string brand;
    cout << "Type the brand of the car: " << endl;
    cin.ignore();
    getline(cin, brand);

    return brand;
}

//functions to get values to the CarMaintenance struct
string getDate(){
    string date;
    cout << "Type the date (Ex: 23/05/2020) without spaces: " << endl;
    cin >> date;

    return date;
}

string getDescription(){
    string description;
    cout << "Type the description of the maintenance:" << endl;
    cin.ignore();
    getline(cin, description);

    return description;
}

string getLocation(){
    string local;
    cout << "Type the location of the maintenance: " << endl;
    cin.ignore();
    getline(cin, local);

    return local;
}