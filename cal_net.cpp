#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    string SN;
    cout << "Enter School Name :";
    cin >> SN;
    "\n";
    int py;
    cout << "Enter Present Year :";
    cin >> py;
    "\n";
    string Fname;
    cout << "Enter Your First Name :";
    cin >> Fname;
    "\n";
    string Mname;
    cout << "Enter Your Middle Name (enter 0 to skip) :";
    cin >> Mname;
    if (Mname=="0")
    {
        Mname='\0';
    }
    else{
        string space=" ";
        Mname.append(space);
    }
        
    "\n";
    
    string Lname;
    cout << "Enter Your Last Name :";
    cin >> Lname;
    "\n";
    string PAN;
    cout << "Enter PAN Number :";
    cin >> PAN;
    "\n";

    int BP1;
    cout << "Enter 1st Basic Pay :";
    cin >> BP1;

    int BP2;
    cout << "Enter 2nd Basic Pay :";
    cin >> BP2;

#ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    freopen("trial01.html", "w", stdout);
#endif

    // Header
    int pasty = py - 1;
    int fy = py + 1;

    string header;
    ifstream headerread;
    while (getline(headerread, header))
    {
        cout << header << "\n";
    }
    cout << "<h1 id=\"centre\">SALARY STATEMENT FOR THE YEAR " << pasty << "-" << py << " (A.Y. " << py << "-" << fy << ")</h1>\n";
    cout << "<H3 id=\"centre\" >" << SN << " PRIMARY SCHOOL</H3>\n";
    cout << "<H3 id=\"centre\" style=\"text-align:left;\">" << Fname << " " << Mname << Lname << "<span style=\"float:right;\">  PAN- " << PAN << " </span> </H3>\n";

    // Header ends

    string html_bp;

    ifstream fileread("infile.txt");

    while (getline(fileread, html_bp))
    {
        cout << html_bp << "\n";
    }

    int BP;
    float MA = 500;
    float HT = 400;
    float PTAX = 200;
    float GI = 60;

    for (int i = 0; i < 13; i++)
    {

        if (i < 4)
        {
            BP = BP1;
        }
        else if (i < 12)
        {
            BP = BP2;
        }
        else
        {
            BP = BP1 * 4 + BP2 * 8;
            MA = 500 * 12;
            HT = 400 * 12;
            PTAX = 200 * 12;
            GI = 60 * 12;
        }

        float da = BP * 0.03;

        float HRA = BP * 0.12;

        float GS = BP + da + HRA + MA + HT;

        float PF = BP * 0.06;

        float TD = PF + PTAX + GI;

        float NS = GS - TD;
        
        int myr;
        if (i<10)
        {
            myr=pasty-2000;
        }
        else if(i<12)
            myr=py-2000;
        else
            myr='\0';

        string month;
        switch (i)
        {
        case 0:
            month = "Mar-";
            break;
        case 1:
            month = "Apr-";
            break;
        case 2:
            month = "May-";
            break;
        case 3:
            month = "Jun-";
            break;
        case 4:
            month = "Jul-";
            break;
        case 5:
            month = "Aug-";
            break;
        case 6:
            month = "Sep-";
            break;
        case 7:
            month = "Oct-";
            break;
        case 8:
            month = "Nov-";
            break;
        case 9:
            month = "Dec-";
            break;
        case 10:
            month = "Jan-";
            break;
        case 11:
            month = "Feb-";
            break;
        case 12:
            month = "Total";
            break;
        }


        cout << "<tr>\n";
        if (i<=11){
            cout << "<td>" << month << myr << "</td>"<<"\n";
        }
        else{
            cout << "<td>" << month << "</td>"<< "\n";
        }
        cout << "<td>" << BP << "</td>"
             << "\n";
        cout << "<td>" << da << "</td>"
             << "\n";
        cout << "<td>" << HRA << "</td>"
             << "\n";
        cout << "<td>" << MA << "</td>"
             << "\n";
        cout << "<td>" << HT << "</td>"
             << "\n";
        cout << "<td>" << GS << "</td>"
             << "\n";
        cout << "<td>" << PF << "</td>"
             << "\n";
        cout << "<td>" << PTAX << "</td>"
             << "\n";
        cout << "<td>" << GI << "</td>"
             << "\n";
        cout << "<td>" << TD << "</td>"
             << "\n";
        cout << "<td>" << NS << "</td>"
             << "\n";
        cout << "</tr>\n";
    }

    cout << "</table>\n";
    cout << "<br>\n";
    cout << "<br>\n";
    cout << "<br>\n";
    cout << "<br>\n";
    cout << "<br>\n";
    cout << "<p style=\"text-align:left;\">\n";
    cout << "    <strong>Signature of SI/S</strong>\n";
    cout << "    <span style=\"float:right;\">\n";
    cout << "        <strong>Signature of Teacher</strong>\n";
    cout << "    </span>\n";
    cout << "</p>\n";
    cout << "</body>\n";
    cout << "</html>\n";

    return 0;
}