#include <iostream>
using namespace std;
int main()
{
    cout << "-EVC-PLUS-" << endl;
    string num = "*770#";
    cin >> num;
    if ("*770#" == num)
    {
        cout << "fadlan gali pin kaga" << endl;
        int h;
        cin >> h;
        cout << "\n1:Itus haragaga\n2:kaarka Hadalka\n3:Bixi Biil\n4:U Wareeji EVC-PLUS\n5:Warbixin Kooban\n6:Maareynta\n7:Salaam Bank" << endl;
    }
    cout << "dooro number" << endl;
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "haraagaga waa $300" << endl;
        break;

    case 2:
        cout << "Kaarka hadalka:" << endl;
        cout << "dooro  number:" << endl;
        cout << "1: Ku Shubo Airtime" << endl;
        cout << "2: Ugu Shub Airtime" << endl;
        cout << "3: MIFI package";
        cout << "4: Ku Shubo Internet" << endl;
        int i;
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "Ku Shubo Airtime" << endl;
            cout << "fadlan gali lacagta" << endl;
            int j;
            cin >> j;
            cout << "mahubtaa inaad ku shubaneysid $ " << j << endl;
            cout << "1:HAA" << endl;
            cout << "2:MAYA" << endl;
            int q;
            cin >> q;

            switch (q)
            {
            case 1:
                cout << "waad ku guuleysatay lcg ku shubaashada" << endl;
                break;
            case 2:
                cout << "kuma guleysan" << endl;
                break;
            default:
                cout << " ";
            }
            break;
        case 2:
            cout << "ugu Shub Airtime" << endl;
            cout << "FADLAN GALI NUMBERKA" << endl;
            int num1;
            cin >> num1;
            cout << "fadlan gali lacagta" << endl;
            int lacag;
            cin >> lacag;
            cout << "mahubtaa inaad ku shubaneysid $ " << lacag << " numberkan " << num1 << endl;
            cout << "1:HAA" << endl;
            cout << "2:MAYA" << endl;
            int n;
            cin >> n;
            switch (n)
            {
            case 1:
                cout << "waad ku guuleysatay ugu shubida" << endl;
                break;
            case 2:
                cout << "kuma guleysan" << endl;
                break;
            default:
                cout << " ";
            }
            break;
        case 3:
            cout << "MIFI package" << endl;
            cout << "1:ku shubo data da MIFI" << endl;
            cout << "1:maalinle" << endl;
            cout << "2:isbuucle" << endl;
            cout << "3:bile" << endl;
            int mif;
            cin >> mif;

            break;
        default:
            cout << " ";

        case 4:
            cout << "ku shupo internet" << endl;
            cout << "1:maalinle" << endl;
            cout << "2:isbuucle" << endl;
            cout << "3:bile" << endl;
            cout << "4:time based package" << endl;
            cout << "5:data" << endl;
            cout << "fadlan dooro numberka ugu shubeysid" << endl;
            int ch;
            cin >> ch;
            break;
        }
        break;
    case 3:
        cout << "Bixi Biil:" << endl;
        cout << " 1: post paid " << endl;
        cout << " 2: ku iibso" << endl;
        break;

    case 4:
        cout << "U Wareeji EVC-PLUS" << endl;
        cout << "FADLAN GALI NUMBERKA" << endl;
        int number;
        cin >> number;
        cout << "FADLAN GALI LACAGTA" << endl;
        int lcg;
        cin >> lcg;
        cout << "mahuptaa inaad $" << lcg << " uwarejisid numberkan " << number << endl;
        cout << "1:HAA" << endl;
        cout << "2:MAYA" << endl;
        int kaladooro;
        cin >> kaladooro;

        switch (kaladooro)
        {
        case 1:
            cout << "waad ku guuleysatay warejinta" << endl;
            break;
        case 2:
            cout << "kuma guleysan";
            break;
        default:
            cout << " ";
        }
        break;
    case 5:
        cout << "Warbixin Kooban:";
        cout << "1:Last Action" << endl;
        cout << "2:Wareejinti U Dambeysay" << endl;
        cout << "3:Iibsashadi U Danbeysay" << endl;
        cout << "4:Last 3 actions" << endl;
        break;
    case 6:
        cout << "Maareynta:" << endl;
        cout << "1:Bedel Lambarka Sirta Ah" << endl;
        cout << "2:Bedel Luqada" << endl;
        cout << "3:Wargelin Mobile Lumay" << endl;
        cout << "4:Lacag Xirasho" << endl;
        cout << "5:U Celi Lacag Qaldantay" << endl;
        cout << "6:EnableMobileBanking" << endl;
        cout << "dooro number:" << endl;
        int dorasho;
        cin >> dorasho;

        switch (dorasho)
        {
        case 1:
            cout << "1:Bedel Lambarka Sirta Ah" << endl;
            cout << "fadlan gali pin kaga csub" << endl;
            int sir;
            cin >> sir;
            cout << "fadlan hubi pinkaga csub" << endl;
            int celi;
            cin >> celi;
            cout << "wad ku guleysatay inaa badasho number sirta ah" << endl;
            break;
        case 2:
            cout << "2:Bedel Luqada" << endl;

            cout << "1:English" << endl;
            cout << "2:Somali" << endl;
            cout << "dooro luqada rabto" << endl;
            int luqad;
            cin >> luqad;
            switch (luqad)
            {
            case 1:
                cout << "wxad u badashay english" << endl;
                break;
            case 2:
                cout << "wxad u badashay somali" << endl;
                break;
            default:
                cout << " ";
            }

            break;
        case 3:
            cout << "3:Wargelin Mobile Lumay" << endl;
            cout << "FADLAN GALI numberka mobileka lumay" << endl;
            int f;
            cin >> f;
            cout << "FADLAN GALI numberkiisa sirta ah" << endl;
            int sir2;
            cin >> sir2;
            cout << "mahuptaa inaad diwan galiso lumida numberkan " << f << endl;
            cout << "1:HAA" << endl;
            cout << "2:MAYA" << endl;
            int lumid;
            cin >> lumid;
            switch (lumid)
            {
            case 1:
                cout << "waad ku guuleysatay wargaalinta" << endl;
                break;
            case 2:
                cout << "kuma guleysan" << endl;
                break;
            default:
                cout << " ";
            }
            break;
        case 4:
            cout << "4:Lacag Xirasho" << endl;
            cout << "FADLAN GALI numberka khalad ka ah" << endl;
            int num3;
            cin >> num3;
            cout << "FADLAN GALI numberka lo rabay" << endl;
            int lorabay;
            cin >> lorabay;
            cout << "FADLAN GALI macluumaad" << endl;
            int mac;
            cin >> mac;
            cout << "mahuptaa inaad lo rabay numberkan " << lorabay << endl;
            cout << "1:HAA" << endl;
            cout << "2:MAYA" << endl;
            int hubn;
            cin >> hubn;

            switch (hubn)
            {
            case 1:
                cout << "waad ku guuleysatay diwangalinta" << endl;
                break;
            case 2:
                cout << "kuma guleysan" << endl;
                break;
            case 7:
                cout << "Salaam Bank" << endl;
                cout << "1:daara salaam bank" << endl;
                cout << "2:salaam sch" << endl;
                cout << "3:salaam somali bank" << endl;
                cout << "4:bank beeraha" << endl;
                break;
            default:
                cout << "fadlan dooro number sax ah" << endl;
            }
        default:
            cout << " ";
        }
    default:
        cout << "fadlan dooro number sax ah ";
    }

    return 0;
}
