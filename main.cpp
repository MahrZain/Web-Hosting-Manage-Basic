#include <iostream>
using namespace std;

struct User_Info {
    char name[20];
    char Address[20];
    char email[30];
    char phone[30];
    char DOB[20];
};
struct Domain {
    char name[20];

};
struct hosting {
    int price[15];
    char name[40];
};
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


void User_information() {
    int length = 0; 
    User_Info info;

    cout << "Enter Your Name: ";
    cin >> info.name;

    cout << "Enter Your Address: ";
    cin >> info.Address;

    cout << "Enter Your Email: ";
    cin >> info.email;

phone_back: 
    cout << "Enter Your Phone No #: ";
    cin >> info.phone;

    length = 0;
    for (int i = 0; info.phone[i] != '\0'; i++) {
        length++;
    }

    if (length != 11) {
        cout << "Please Enter Valid Number! (11 digits only)\n";
        goto phone_back;
    }

    cout << "Enter Your Date of Birth (DD/MM/YYYY): ";
    cin >> info.DOB;

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\tInformation Saved Successfully" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
}
int hosting_plans() {
    int h_plain_choice = 0;
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

    return h_plain_choice;
}
int domain_options() {
    int sub_choice = 0;
    cout << "Please Choose Your Domain" << endl;
    cout << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;

    do {
        cout << "1 ==> Register New Domain" << endl;
        cout << "2 ==> Use Existing Domain" << endl;
        cout << "3 ==> Go Back to Main Menu" << endl;
        cout << "Enter Your Choice: ";
        cin >> sub_choice;
        if (sub_choice < 1 || sub_choice > 3) {
            cout << "Invalid Input Plz Try Again!" << endl;
        }
    } while (sub_choice < 1 || sub_choice > 3);


    return sub_choice;
}
int main_menu() {
    int user_choice = 0;
    cout << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "\tWelcome To Premium Web Hosting" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    cout << "==================================================" << endl;
    cout << "\t1 ==> Your Information\n" << endl;
    cout << "\t2 ==> Hosting Plan's\n" << endl;
    cout << "\t3 ==> Domain Management\n" << endl;
    cout << "\t4 ==> Billing Detail's\n" << endl;
back:
    cout << "Enter Your Choice: ";
    cin >> user_choice;
    if (user_choice != 4 && user_choice > 6) {
        cout << endl;
        cout << "Wrong Choice! Please TRY AGAIN" << endl;
        cout << endl;
        goto back;
    }
    return user_choice;
}



int main()
{
    User_Info Accounts[20];
    int index = 0;
    for (; index < 10; index++) {
        User_Info info[2]; Domain  domain[20]; Billing customer[20]; hosting h[20];
        int user_choice, length_2 = 0, length = 0, users = 0, dhm_choice, h_plain_choice = 0;
        bool dot, dot2;

    main_back:
        user_choice = main_menu();

        if (user_choice == 1) {
            User_information();
            goto main_back;
        }

        else if (user_choice == 2) {
            h_plain_choice = hosting_plans();

            if (h_plain_choice == 1) {
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << endl;
                cout << "You Select For Basic Plan" << endl;
                cout << "Price: Rs. 250" << endl;
                h[users].price[0] = 250;

                h[users].name[0] = 'B';
                h[users].name[1] = 'a';
                h[users].name[2] = 's';
                h[users].name[3] = 'i';
                h[users].name[4] = 'c';
                h[users].name[5] = ' ';
                h[users].name[6] = 'P';
                h[users].name[7] = 'l';
                h[users].name[8] = 'a';
                h[users].name[9] = 'n';
                h[users].name[10] = '\0';

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
                h[users].price[0] = 950;

                h[users].name[0] = 'S';
                h[users].name[1] = 't';
                h[users].name[2] = 'a';
                h[users].name[3] = 'n';
                h[users].name[4] = 'd';
                h[users].name[5] = 'a';
                h[users].name[6] = 'r';
                h[users].name[7] = 'd';
                h[users].name[8] = ' ';
                h[users].name[9] = 'P';
                h[users].name[10] = 'l';
                h[users].name[11] = 'a';
                h[users].name[12] = 'n';
                h[users].name[13] = '\0';

                cout << "Bandwidth: 500GB" << endl;
                cout << endl;
            }
            else if (h_plain_choice == 3) {
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << endl;
                cout << "You Select For Premium Plan" << endl;
                cout << "Price: Rs. 1950" << endl;
                cout << "Storage: 200GB" << endl;
                h[users].price[0] = 1950;

                h[users].name[0] = 'P';
                h[users].name[1] = 'r';
                h[users].name[2] = 'e';
                h[users].name[3] = 'm';
                h[users].name[4] = 'i';
                h[users].name[5] = 'u';
                h[users].name[6] = 'm';
                h[users].name[7] = ' ';
                h[users].name[8] = 'P';
                h[users].name[9] = 'l';
                h[users].name[10] = 'a';
                h[users].name[11] = 'n';
                h[users].name[12] = '\0';
            }


            cout << "Bandwidth: Unlimited" << endl;
            cout << endl;
            goto main_back;
        }

        else if (user_choice == 3) {
            int sub_choice = 0;
            sub_choice = domain_options();

            if (sub_choice == 1) {
                do {
                    dot = false;
                    cout << "Please Enter a New Domain Name (without http,www): ";
                    cin >> domain[users].name;

                    for (int i = 0; i < 20; i++) {
                        if (domain[users].name[i] == '.') {
                            dot = true;
                            break;
                        }
                    }

                    if (dot != true) {
                        cout << "Please Enter a Valid Domain Name. Try Again!" << endl;
                    }

                } while (dot != true);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "New Domain Registered: " << domain[users].name << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


            }

            else if (sub_choice == 2) {
                do {
                    dot2 = false;
                    cout << "Please Enter Your Existing Domain Name: ";
                    cin >> domain[users].name;

                    for (int i = 0; i < 20; i++) {
                        if (domain[users].name[i] == '.') {
                            dot2 = true;
                            break;
                        }
                    }

                    if (dot2 != true) {
                        cout << "Please Enter a Valid Domain Name. Try Again!" << endl;
                    }

                } while (dot2 != true);
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
                cout << "Existing Domain Accepted: " << domain[users].name << endl;
                cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }

            else if (sub_choice == 3) {
                cout << "Returning to Main Menu..." << endl;

            }

            else {
                cout << "Invalid Choice! Please Try Again." << endl;
            }
            goto main_back;
        }

        else if (user_choice == 4) {

            cout << endl;
            cout << "Enter Your Billing Detail's" << endl;
            cout << endl;
            cout << "----------------------------------------------";
            cout << endl;
            cout << "Enter First Name: ";
            cin >> customer[users].fname;

            cout << "Enter Last Name: ";
            cin >> customer[users].lname;

            cout << "Enter Personal Email: ";
            cin >> customer[users].bemail;
        nd_phone:
            length_2 = 0; 
            cout << "Enter Phone No#: ";
            cin >> customer[users].bphone;

            
            for (int i = 0; customer[users].bphone[i] != '\0'; i++) {
                length_2++;
            }

            
            if (length_2 != 11) {
                cout << "Please Enter Valid Number! (11 digits only)\n";
                goto nd_phone; 
            }


            cout << "Enter Street Address: ";
            cin >> customer[users].street;

            cout << "Enter City: ";
            cin >> customer[users].city;

            cout << "Enter State: ";
            cin >> customer[users].state;

            cout << "Enter ZIP Code: ";
            cin >> customer[users].zip;

            cout << "Enter Country: ";
            cin >> customer[users].country;

            cout << "Payment Method: ";
            customer[users].payment_method[0] = 'D';
            customer[users].payment_method[1] = 'e';
            customer[users].payment_method[2] = 'b';
            customer[users].payment_method[3] = 'i';
            customer[users].payment_method[4] = 't';
            customer[users].payment_method[5] = ' ';
            customer[users].payment_method[6] = 'C';
            customer[users].payment_method[7] = 'a';
            customer[users].payment_method[8] = 'r';
            customer[users].payment_method[9] = 'd';
            customer[users].payment_method[10] = '\0';
            cout << customer[users].payment_method;

            cout << endl;

            cout << "Payment Status: ";
            customer[users].payment_status[0] = 'U';
            customer[users].payment_status[1] = 'n';
            customer[users].payment_status[2] = 'p';
            customer[users].payment_status[3] = 'a';
            customer[users].payment_status[4] = 'i';
            customer[users].payment_status[5] = 'd';
            customer[users].payment_status[6] = '\0';
            cout << customer[users].payment_status;

            cout << endl;


            cout << "Currency: ";
            customer[users].currency[0] = 'P';
            customer[users].currency[1] = 'K';
            customer[users].currency[2] = 'R';
            customer[users].currency[3] = '\0';
            cout << customer[users].currency;

            cout << endl;

            cout << "\n--- Billing Information ---\n";
            cout << "Name: " << customer[users].fname << " " << customer[users].lname << endl;
            cout << "Email: " << customer[users].bemail << endl;
            cout << "Phone: " << customer[users].bphone << endl;
            cout << "Address: " << customer[users].street << ", " << customer[users].city << ", " << customer[users].state << ", " << customer[users].zip << ", " << customer[users].country << endl;
            cout << "Payment Method: " << customer[users].payment_method << endl;
            cout << "Payment Status: " << customer[users].payment_status << endl;
            cout << "Total Amount: " << h[users].price[0] << " " << customer[users].currency << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << endl;
            cout << "Billing Info Saved!" << endl;
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
            cout << "Owner Name: " << info[0].name << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "Billing Name        : " << customer[users].fname << " " << customer[users].lname << endl;
            cout << "Billing Email       : " << customer[users].bemail << endl;
            cout << "Billing Phone       : " << customer[users].bphone << endl;
            cout << "Billing Address     : " << customer[users].street << ", " << customer[users].city << ", "
                << customer[users].state << ", " << customer[users].zip << ", " << customer[users].country << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "Hosting Plan Name : " << h[users].name << " " << endl;
            int domain_price = 2500;
            cout << "Hosting Plan Amount : " << h[users].price[0] << " " << customer[users].currency << endl;
            cout << "Domain Price (FIXED) : " << "RS. " << domain_price << " " << endl;
            cout << "Payment Method      : " << customer[users].payment_method << endl;
            cout << "Payment Status      : " << customer[users].payment_status << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "TOTAL AMOUNT        : " << h[users].price[0] + domain_price << " " << customer[users].currency << endl;
            cout << "-------------------------------------------------------------\n";
            cout << "Thank you for choosing our services!\n";
            cout << "=============================================================\n\n";
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            users++;
            cout << endl;
            cout << endl;
            goto main_back;
        }

        else if (user_choice == 5) {
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\tAll Saved Users" << endl;
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

            for (int i = 0; i < users; i++) {
                cout << "User #" << i + 1 << endl;
                cout << "Name: " << customer[i].fname << endl;
                cout << "Email: " << customer[i].bemail << endl;
                cout << "Payment Status: " << customer[i].payment_status << endl;
                cout << "Country: " << customer[i].country << endl;
                cout << "Plan: " << h[i].name << endl;
                cout << "Bill: " << "Rs. " << h[i].price[0] + 2500 << endl;
                cout << "-------------------------------------------" << endl;
            }

            goto main_back;

        }

    }


}










