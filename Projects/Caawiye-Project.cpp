#include <iostream>
using namespace std;
int main()
{

    cout << "Enter caawiye short number" << endl;
    string lamGaban;
    cin >> lamGaban;
    if (lamGaban == "*142#")
    {
        cout << "1. Itus haraaga" << endl;
        cout << "2. Maaraynta" << endl;
        cout << "3. Pin-Puk" << endl;
        cout << "4. Lacag Qaldantay haraaga" << endl;
        cout << "5. Adeegyada Hormuud" << endl;
        cout << "6. VIP Numbers" << endl;
        cout << "7. Wadmada Anfac" << endl;
        cout << "8. Agent" << endl;
        cout << "9. Adeega MySMS" << endl;
        cout << "10. Adeega CRBT" << endl;
        cout << "11. Ka bax" << endl;
        cout << "Please Choose a number" << endl;
        int Adegyo;
        cin >> Adegyo;
        switch (Adegyo)
        {
        case 1:
            cout << "1. Internet" << endl;
            cout << "2. Kabax" << endl;
            cout << "Please Choose a number" << endl;
            int itus;
            cin >> itus;
            switch (itus)
            {
            case 1:
                cout << "You are not ADSL Subscriber." << endl;
                break;

            case 2:
                cout << "Macsalaama" << endl;
                break;

            default:
                cout << "Please Enter right number" << endl;
            }
            break;

        case 2:
            cout << "1. Badel lambarka sirta ah" << endl;
            cout << "2. Badel luqada" << endl;
            cout << "3. Kabax" << endl;
            cout << "Please Choose a number" << endl;
            char maarayn;
            cin >> maarayn;
            switch (maarayn)
            {
            case '1':
                cout << "Geli lambarka sirta hore" << endl;
                int pass1;
                cin >> pass1;
                switch (pass1)
                {
                case 1800:
                    cout << "Geli lambarka sirta cusub" << endl;
                    int pass2;
                    cin >> pass2;
                    switch (pass2)
                    {
                    case 1200:
                        cout << "waa ku guuaysatay badalida" << endl;

                        break;
                    }

                    break;
                }

                break;

            case '2':
                cout << "1. Somali" << endl;
                cout << "2. English" << endl;
                char lang;
                switch (lang)
                {
                case '1':
                {
                    cout << "Waxaad u badalatay Somali" << endl;
                    break;
                }
                case '2':
                {
                    cout << "Translated into English" << endl;
                    break;
                }
                }
                break;

            case '3':
                cout << "Macsalaama" << endl;
                break;

            default:
                cout << "Please choos right number" << endl;
            }

            break;

        case 3:
            cout << "Geli telefoon Numberka" << endl;
            int pinPuk;
            cin >> pinPuk;
            switch (pinPuk)
            {
            case 617208328:
                cout << "MobileNo : " << pinPuk << endl;
                cout << "PIN 1 : 1234" << endl;
                cout << "PUK 1 : 2345666" << endl;
                cout << "PUK 2 : 23455664" << endl;
                break;

            case 0:
                cout << "Macsalaama" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }

            break;

        case 4:
            cout << "Lacag Qaldantay -> Number-ka qalday" << endl;
            int lacag;
            cin >> lacag;
            switch (lacag)
            {
            case 617208328:
                cout << "Lacag Qaldantay -> Number-ka Qalday" << endl;
                int qaladay;
                cin >> qaladay;
                switch (qaladay)
                {
                case 617208329:
                    cout << "Waad ku guulaysatay inaad xayirato" << endl;
                }
                break;

            case 0:
                cout << "Macsalaama" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }

            break;

        case 5:
            cout << "Adeegayada Hormuud" << endl;
            cout << "1. Dhamaan Adeegayada" << endl;
            cout << "2. Landline" << endl;
            cout << "3. Kabax" << endl;

            int adeegyo;
            cin >> adeegyo;
            switch (adeegyo)
            {
            case 1:
                cout << "1. IVR(120)" << endl;
                cout << "2. nasiye(821)" << endl;
                cout << "3. Voice Mail(132)" << endl;
                cout << "4. E-Voucher Card" << endl;
                cout << "5. ANFAC(*127#)" << endl;
                break;

            case 2:
                cout << "SMS ayaa laguu soo diray" << endl;
                break;

            case 3:
                cout << "Ka bax" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }

            break;

        case 6:
            cout << "VIP Numbers ->" << endl;
            cout << "1. Golden" << endl;
            cout << "2. Silver" << endl;
            cout << "3. Ka bax" << endl;

            int vip;
            cin >> vip;
            switch (vip)
            {
            case 1:
                cout << "Silver VIP numbers ->" << endl;
                cout << "1. 6103838362 %49" << endl;
                cout << "2. 6103833233 %43" << endl;
                cout << "3. 6103228362 %42" << endl;
                cout << "4. 6103838362 %26" << endl;
                cout << "5. 6103833233 %49" << endl;
                break;

            case 2:
                cout << "Silver VIP numbers ->" << endl;
                cout << "1. 6155338362 %49" << endl;
                cout << "2. 6152223334 %43" << endl;
                cout << "3. 6103228362 %42" << endl;
                cout << "4. 6152345444 %26" << endl;
                cout << "5. 6103832131 %49" << endl;
                break;

            case 3:
                cout << "Macsalama" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }
            break;

        case 7:
            cout << "Wax yar sug fariin ayaa kuso dhacayso mahadsanid" << endl;
            break;

        case 8:
            cout << "No Authorized" << endl;
            break;

        case 9:
            cout << "Adeega MySMS ->" << endl;
            cout << "1. MySMS" << endl;
            cout << "2. Recharge" << endl;
            cout << "3. Ka bax" << endl;

            int mysms;
            cin >> mysms;
            switch (mysms)
            {
            case 1:
                cout << "Gali User-kaga" << endl;
                int pass;
                cin >> pass;
                switch (pass)
                {
                case 1111:
                    cout << "Welcome" << endl;
                    break;
                default:
                    cout << "Invalid password or username" << endl;
                }

                break;

            case 2:
                cout << "Gali Mobile ka" << endl;
                break;

            case 3:
                cout << "Macsalama" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }
            break;

        case 10:
            cout << "Gali User-kaga MySMS" << endl;
            int crbt;
            cin >> crbt;
            switch (crbt)
            {
            case 1111:
                cout << "Gali lamberka sirta ah" << endl;
                int pass;
                cin >> pass;
                switch (pass)
                {
                case 1111:
                    cout << "Welcome" << endl;
                    break;
                default:
                    cout << "Welcome" << endl;
                }
                break;

            case 2:
                cout << 1111 << endl;
                break;

            case 3:
                cout << "Macsalama" << endl;
                break;

            default:
                cout << "Please Enter your phone number" << endl;
            }
            break;

        case 11:
            cout << "Macsalaama" << endl;
            break;

        default:
            cout << "Please Enter these number 1- 11" << endl;
            break;
        }
    }
    else
    {

        cout << "Sorry its wrong";
    }

    return 0;
}
