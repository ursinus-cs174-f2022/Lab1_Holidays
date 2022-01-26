#include <string>
#include <iostream>
#include "dateutils.h"

#define NUM_HOLIDAYS 42

const string HOLIDAY_NAMES[NUM_HOLIDAYS] = {"Labor Day","Rosh Hashanah (New Year)","Yom Kippur (Day of Atonement)","Sukkot (Feast of Tabernacles)","Shemini Atzeret","Simchat Torah","Navratri/Dussehra","Indigenous Peoples Day","Mawlid al-Nabi (birthday of Mohammad)","Diwali","Veterans Day","Thanksgiving Day","Native American Heritage Day","Hanukkah (Chanukah)","Christmas Day","New Years Day","Orthodox Christmas","Martin Luther King Day","Lunar New Year","Presidents' Day","Maha Shivaratri","Beginning of Lent","Ash Wednesday","Purim","Holi","April Fool's","Beginning of Ramadan","Ramanavami","Good Friday","Passover (Pesach)","Easter","Orthodox Good Friday","Orthodox Easter","Lailat al-Qadr","Eid al-Fitr (End of Ramadan)","Memorial Day","Shavuot","Juneteenth","Independence Day","Eid al-Adha","Muharram (Al Hijrah New Year)","Janmashtami"};
const int HOLIDAY_MONTHS[NUM_HOLIDAYS] = {9,9,9,9,9,9,10,10,10,11,11,11,11,11,12,1,1,1,2,2,3,3,3,3,3,4,4,4,4,4,4,4,4,4,5,5,6,6,7,7,7,8};
const int HOLIDAY_DAYS[NUM_HOLIDAYS] = {6,7,16,21,28,29,7,11,18,4,11,25,26,28,25,1,7,17,1,21,1,2,2,17,18,1,2,10,15,16,17,22,24,28,3,30,5,19,4,10,30,18};
const int HOLIDAY_YEARS[NUM_HOLIDAYS] = {2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2021,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022,2022};

/**
 * Setup a string that's required at the beginning of the HTML document,
 * which includes the title "2021/2022 Holidays"
 * @return String at the end of the HTML document
 */
void printHTMLStart() {
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "    <meta charset=utf-8></meta>\n";
    cout << "    <title>2021/2022 Holidays</title>\n";
    cout << "    <style>";
    cout << "    table, th, td {";
    cout << "      border: 1px solid black;";
    cout << "      padding: 15px;";
    cout << "    }";
    cout << "    </style>";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<h1>2021/2022 Holidays</h1>";
}
    
/**
 * Print a string that's required at the end of the HTML document
 */
void printHTMLEnd() {
    cout << "</body>\n</html>";
}

// TODO (in dateutils.cpp and dateutils.h)
// Create a method that takes in a month number and returns a string

// TODO: Create a method that takes in an index and prints a string 
// corresponding the HTML code for that row of the table


// TODO: Create a method that loops through all holidays and calls 
// the above method, piecing everything together into a table


int main() {
    printHTMLStart();

    ///// THIS IS AN EXAMPLE ONLY                                         ///////
    ///// YOU NEED TO OUTPUT EVERY ROW IN THE TABLE, INCLUDING THE DATE  ////// 
    ///// INSTEAD, YOU SHOULD CALL YOUR METHODS HERE                    ////
    cout << "<table>";
    cout << "<tr><td>Our Lab</td><td>" << getWeekday(2022, 01, 26) << "</td><td>January 26, 2022</td></tr>\n";

    int month = HOLIDAY_MONTHS[0];
    int day = HOLIDAY_DAYS[0];
    int year = HOLIDAY_YEARS[0];
    string weekday = getWeekday(year, month, day);
    cout << "<tr><td>" << HOLIDAY_NAMES[0] << "</td><td>" << weekday << "</td><td>September 6, 2021</td></tr>\n";
    //////////////////////////////////////////////////////////////////////////

    printHTMLEnd();
    return 0;
}