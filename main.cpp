#include <iostream>
//#include "info.h"
using namespace std;
struct User_Info {
    char name[10];
    char Address[20];
    char email[30];
    char phone[15];
    char DOB[10];
};
struct Domain {
    char name[20];
    
};
struct hosting {
    int price[15];
    char name[40];
};
void User_information() {
    int length = 0;
    User_Info info[2];
    cout << "Enter Your Name: ";
    cin >> info[0].name;
    cout << "Enter Your Address: ";
    cin >> info[0].Address;
    cout << "Enter Your Email: ";
    cin >> info[0].email;
phone_back:
    cout << "Enter Your Phone No #: ";
    cin >> info[0].phone;
    for (int i = 0; i < 11;i++) {
        if (info[0].phone[i] < 11) {
            length++;
            if (length != 11) {
                cout << "Please Enter Valid Number! ";
                goto phone_back;
            }
        }
    }
    cout << "Enter Your Date of Birth (DD/MM/YYYY): ";
    cin >> info[0].DOB;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\tInformation Saved Successfull" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
}
struct Billing {
    char fname[20];
    char lname[20];
    char bemail[50];
    char bphone[15];
    char street[50];
    char city[30];
    char state[30];
    char zip[10];
    char country[30];
    char payment_method[30];
    char payment_status[35];
    float total_amount;
    char currency[30];
};


int main()
{
    User_Info info[2];
    Domain  domain;
    Billing customer;
    hosting h;
    int user_choice, length=0, dhm_choice, h_plain_choice=0;
    bool dot,dot2;
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "\tWelcome To Premium Web Hosting" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    while (true) {
        cout << "==================================================" << endl;
        cout << "\t1 ==> Your Information\n" << endl;
        cout << "\t2 ==> Hosting Plan's\n" << endl;
        cout << "\t3 ==> Domain Management\n" << endl;
        cout << "\t4 ==> Billing Detail's\n" << endl;
    back:
        cout << "Enter Your Choice: ";
        cin >> user_choice;
        if (user_choice != 4 && user_choice > 4) {
            cout << endl;
            cout << "Wrong Choice! Please TRY AGAIN" << endl;
            cout << endl;
            goto back;
        }
        else if (user_choice == 1) {
            User_information();

        }
        else if (user_choice == 2) {
            cout << "------------------------------------------------------" << endl;
            cout << endl;
            cout << "\tHosting Management" << endl;
            cout << endl;
            cout << "------------------------------------------------------" << endl;
            cout << endl;
            cout << "| Plan Name        | Price per Month | Storage  | Bandwidth  |" << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "| 1 ==> Basic Plan       | RS.250           | 10GB     | 100GB      |" << endl;
            cout << "| 2 ==> Standard Plan    | RS.950           | 50GB     | 500GB      |" << endl;
            cout << "| 3 ==> Premium Plan     | RS.1950          | 200GB    | Unlimited  |" << endl;
            cout << "------------------------------------------------------" << endl;
            cout << "Enter Your Choice: ";
            cin >> h_plain_choice;

            while (h_plain_choice < 1 || h_plain_choice > 3) {
                cout << "Invalid Input! Try AGAIN!" << endl;
                cin >> h_plain_choice;
            }

            if (h_plain_choice == 1) {
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << endl;
                cout << "You Select For Basic Plan" << endl;
                cout << "Price: Rs. 250" << endl;
                h.price[0] = 250;

                h.name[0] = 'B';
                h.name[1] = 'a';
                h.name[2] = 's';
                h.name[3] = 'i';
                h.name[4] = 'c';
                h.name[5] = ' ';
                h.name[6] = 'P';
                h.name[7] = 'l';
                h.name[8] = 'a';
                h.name[9] = 'n';
                h.name[10] = '\0';

                cout << "Storage: 10GB" << endl;
                cout << "Bandwidth: 100GB" << endl;
                cout << endl;
            }
            else if (h_plain_choice == 2) {
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << endl;
                cout << "You Select For Standard Plan" << endl;
                cout << "Price: Rs. 950" << endl;
                cout << "Storage: 50GB" << endl;
                h.price[0] = 950;

                h.name[0] = 'S';
                h.name[1] = 't';
                h.name[2] = 'a';
                h.name[3] = 'n';
                h.name[4] = 'd';
                h.name[5] = 'a';
                h.name[6] = 'r';
                h.name[7] = 'd';
                h.name[8] = ' ';
                h.name[9] = 'P';
                h.name[10] = 'l';
                h.name[11] = 'a';
                h.name[12] = 'n';
                h.name[13] = '\0';

                cout << "Bandwidth: 500GB" << endl;
                cout << endl;
            }
            else if (h_plain_choice == 3) {
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << endl;
                cout << "You Select For Premium Plan" << endl;
                cout << "Price: Rs. 1950" << endl;
                cout << "Storage: 200GB" << endl;
                h.price[0] = 1950;

                h.name[0] = 'P';
                h.name[1] = 'r';
                h.name[2] = 'e';
                h.name[3] = 'm';
                h.name[4] = 'i';
                h.name[5] = 'u';
                h.name[6] = 'm';
                h.name[7] = ' ';
                h.name[8] = 'P';
                h.name[9] = 'l';
                h.name[10] = 'a';
                h.name[11] = 'n';
                h.name[12] = '\0';

                cout << "Bandwidth: Unlimited" << endl;
                cout << endl;
            }
        }

        else if (user_choice == 3) {
            int sub_choice;
            cout << "Please Choose Your Domain" << endl;
            cout << endl;
            cout << "------------------------------------------------" << endl;
            cout << endl;

            while (true) {  
                cout << "1 ==> Register New Domain" << endl;
                cout << "2 ==> Use Existing Domain" << endl;
                cout << "3 ==> Go Back to Main Menu" << endl;
                cout << "Enter Your Choice: ";
                cin >> sub_choice;

                if (sub_choice == 1) {
                    do {
                        dot = false;
                        cout << "Please Enter a New Domain Name (without http,www): ";
                        cin >> domain.name;

                        for (int i = 0; i < 20; i++) {
                            if (domain.name[i] == '.') {
                                dot = true;
                                break;
                            }
                        }

                        if (dot != true) {
                            cout << "Please Enter a Valid Domain Name. Try Again!" << endl;
                        }

                    } while (dot != true);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "New Domain Registered: " << domain.name << endl;
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    break;
                }

                else if (sub_choice == 2) {
                    do {
                        dot2 = false;
                        cout << "Please Enter Your Existing Domain Name: ";
                        cin >> domain.name;

                        for (int i = 0; i < 20; i++) {
                            if (domain.name[i] == '.') {
                                dot2 = true;
                                break;
                            }
                        }

                        if (dot2 != true) {
                            cout << "Please Enter a Valid Domain Name. Try Again!" << endl;
                        }

                    } while (dot2 != true);
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "Existing Domain Accepted: " << domain.name << endl;
                    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                }

                else if (sub_choice == 3) {
                    cout << "Returning to Main Menu..." << endl;
                    break;  
                }

                else {
                    cout << "Invalid Choice! Please Try Again." << endl;
                }
            }

            cout << "You are now back in the Main Menu." << endl;
        }
           
        
        else if (user_choice == 4) {
            cout << endl;
            cout << "Enter Your Billing Detail's" << endl;
            cout << endl;
            cout << "----------------------------------------------";
            cout << endl;
            cout << "Enter First Name: ";
            cin >> customer.fname;

            cout << "Enter Last Name: ";
            cin >> customer.lname;

            cout << "Enter Personal Email: ";
            cin >> customer.bemail;

            cout << "Enter Phone No#: ";
            cin >> customer.bphone;

            cout << "Enter Street Address: ";
            cin >> customer.street;

            cout << "Enter City: ";
            cin >> customer.city;

            cout << "Enter State: ";
            cin >> customer.state;

            cout << "Enter ZIP Code: ";
            cin >> customer.zip;

            cout << "Enter Country: ";
            cin >> customer.country;

            cout << "Payment Method: ";
            customer.payment_method[0] = 'D';
            customer.payment_method[1] = 'e';
            customer.payment_method[2] = 'b';
            customer.payment_method[3] = 'i';
            customer.payment_method[4] = 't';
            customer.payment_method[5] = ' ';
            customer.payment_method[6] = 'C';
            customer.payment_method[7] = 'a';
            customer.payment_method[8] = 'r';
            customer.payment_method[9] = 'd';
            customer.payment_method[10] = '\0';
                cout << customer.payment_method;
            
            cout << endl;

            cout << "Payment Status: ";
            customer.payment_status[0] = 'U';
            customer.payment_status[1] = 'n';
            customer.payment_status[2] = 'p';
            customer.payment_status[3] = 'a';
            customer.payment_status[4] = 'i';
            customer.payment_status[5] = 'd';
            customer.payment_status[6] = '\0';
               cout<< customer.payment_status;
            
            cout << endl;

            cout << "Enter Total Amount: ";
            cin >> customer.total_amount;

            cout << "Currency: ";
            customer.currency[0] = 'P';
            customer.currency[1] = 'K';
            customer.currency[2] = 'R';
            customer.currency[3] = '\0';
                cout << customer.currency;
            
            cout << endl;

            cout << "\n--- Billing Information ---\n";
            cout << "Name: " << customer.fname << " " << customer.lname << endl;
            cout << "Email: " << customer.bemail << endl;
            cout << "Phone: " << customer.bphone << endl;
            cout << "Address: " << customer.street << ", " << customer.city << ", " << customer.state << ", " << customer.zip << ", " << customer.country << endl;
            cout << "Payment Method: " << customer.payment_method << endl;
            cout << "Payment Status: " << customer.payment_status << endl;
            cout << "Total Amount: " << h.price[0] << " " << customer.currency << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
            cout << "Billing Info Saved!"<<endl;
            cout << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "\n========================  FINAL BILL  ========================\n";
            cout << "-------------------------------------------------------------\n";
            cout << "Billing Name        : " << customer.fname << " " << customer.lname << endl;
            cout << "Billing Email       : " << customer.bemail << endl;
            cout << "Billing Phone       : " << customer.bphone << endl;
            cout << "Billing Address     : " << customer.street << ", " << customer.city << ", "
                << customer.state << ", " << customer.zip << ", " << customer.country << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "Hosting Plan Name : " << h.name << " " << endl;
            int domain_price = 2500;
            cout << "Hosting Plan Amount : " << h.price[0] << " " << customer.currency << endl;
            cout << "Domain Price (FIXED) : " << "RS. " << domain_price << " " << endl;
            cout << "Payment Method      : " << customer.payment_method << endl;
            cout << "Payment Status      : " << customer.payment_status << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "TOTAL AMOUNT        : " << h.price[0]+domain_price << " " << customer.currency << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "Thank you for choosing our services!\n";
            cout << "=============================================================\n\n";
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;
        }


        else {
            cout << "Exiting The Program....." << endl;
            break;
        }
    }
}









