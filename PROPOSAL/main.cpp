#include <iostream>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>


using namespace std;

void menu()
{
	cout << "+=============DATUM============+\n"
		<< "|      " << "1. 19.05.2016"<<setw(13)<<"|\n"
		<< "|      " << "2. 17.07.2016" << setw(13) << "|\n"
		<< "|      " << "3. 25.07.2016" << setw(13) << "|\n"
		<< "|      " << "4. 30.07.2016" << setw(13) << "|\n"
		<< "|      " << "5. 12.09.2016" << setw(13) << "|\n"
		<< "|      " << "6. 27.11.2016" << setw(13) << "|\n"
		<< "|      " << "7. 28.11.2016" << setw(13) << "|\n"
		<< "|      " << "8. 16.04.2017" << setw(13) << "|\n"
		<< "|      " << "9. 19.04.2017" << setw(13) << "|\n"
		<< "+==============================+\n";
}
int main()
{
  double x, y, size=10;
    string message("AMELICE VOLIM TE");
    int print_line = 4;
    if (message.length() % 2 != 0) message += " ";

    for (x=0;x<size;x++)
    {
        for (y=0;y<=4*size;y++)
        {
            double dist1 = sqrt( pow(x-size,2) + pow(y-size,2) );
            double dist2 = sqrt( pow(x-size,2) + pow(y-3*size,2) );

            if (dist1 < size + 0.5 || dist2 < size + 0.5 ) {
                cout << "*";
            }
            else cout << " ";
        }
        cout<<"\n";
    }
    for (x=1;x<2*size;x++)
    {
        for(y=0;y<x;y++) cout << " ";

        for (y=0; y<4*size + 1 - 2*x; y++)
        {
            if (x >= print_line - 1 && x <= print_line + 1) {
                int idx = y - (4*size - 2*x - message.length()) / 2;
                if (idx < message.length() && idx >= 0) {
                    if (x == print_line) cout<<message[idx];
                    else cout << " ";
                }
                else cout << "*";
            }
            else cout << "*";
        }
        cout<<endl;
    }
    cout << "\nPosto si ti izabrala u svesku da nasa sjecanja zabiljezis\nja sam to malo na svoj nacin.\n";

    int datum;
    do
	{
			menu();
			cout << "Ljubsi odaberi jedan datum: \n";
			cin >> datum;
			switch (datum)
			{
			case 1:
				system("cls");
				cout << "Dugo vremena sam razmisljao kako to da izvedem\nda izvedem curu koja kontinuirano nekoliko mjeseci\n"
				<< "zeli da mi ukaze da joj je stalo do mene.\nI hvala Bogu pa sam donio tu odluku da upoznam malu slatku Amelicu\n"
				<< "kojoj je stalo da me upozna nego bilo sta drugo na ovoj planeti.\nNisam zelio da izgledam kao los frajer taj dan\n"
				<< "nit sam htio da steknes takav dojam.\nTa cigareta nije nista drugo bila do smiraj pred upoznavanje tebe.\nA rijeci 'Ti si ta Amela' su isto tako jedino\n"
				<< "sto mi je moglo pasti napamet u tom momentu,\njer sam bio opcinjen tom kolicinom slatkoce.\nNe kajem se ni trenutka sto sam te upoznao i sto smo evo vec\n"
				<< "zajedno 11 mjeseci.\nVolim te malena\n";
				break;
			case 2:
				system("cls");
				cout << "Da dodjem u Janju je bilo nesto wauu.\nJest to bilo bez razmisljanja,\nmislim bilo je tu razmisljanja i promisljanja"
				<< "\no tome kako cu starcima smaslat da dodjem na par dana,\npod izgovorom da cu bi u Tuzli na Panonskom sa Emirom i klapom"
				<< "\nali kad sam zapravo krenuo tog kisnog dana na put za Janju,\nprvo sto mi je palo napamet heee moja budalo jesi ti zaljubljen"
				<< "\nnema nazad. I onda dolazak u Tuzlu \ni to putovanje u Bijeljinu mi je bilo cudno od same Tuzle,\njer morao sam prvo bre da pricam ekavicu\n"
				<< "bilo je ono 'pricaj bre srpski da te ceo svet razume'\na onda kad sam dosao u Bijeljinu sam poceo parlale taliano studento mariano"
				<< "\nimao sam feeling ode glava sigurno.\nOnda eto Janje al vraga izadjoh ja iz nje odo odvede ceto mene da kokne.\nSve u meni je premrlo a ja bajgi junak nekakav."
				<< "\nAl eto iskipa se ja, ceto stade na kraju Janje i ja krenu koracat po zemlji gdjesam naljepse trenutke svoga zivot proveo."
				<< "\nSta vise eto i tebe u cvajtu Avde sa kisobranom pokvarenim da docekas momka.\nRomanticno nema sta al za degeneka dobrog."
				<< "\nIako smo pokusavali skriti te osjecaje i ceznju izmedju nas nismo uspjeli.\nJanja, Drina, Brzava svaki kamen, barica, drvo, list, jabuke one koje smo krali"
				<< "\nsu svjedoci da nismo uspijeli da sakrijemo tu nasu ljubav.\nNocne setnje i razmjena ljubavi do kasno u noc\nneopisivi momenti prepuni neopisivih prelijepih osjecaja\n";
				break;
			case 3:
				system("cls");
                cout << "De Amela dodji de sta ti fali bona opet da dodjes u Gracanicu.\nI sad kontam u sebi kako da te namolim da opet dodjes,"
                << "\n al sigurno ovako necu kako sam napisao.\nTaj dan opet kisa, a Amelica izlazi iz busa i dolazi u moj grad.\n"
                << "Ti izlazis a ja u sebi kontam Boze dragi zar se ovoliko moze bit zaljubljeno.\nJa u Janju a ona meni u Gracanicu.\nTo je ljubav nema granica prepreka daljine."
                << "Htio sam da dignem ruke i da se proderem Dobro dosla i dobro ostala mi ovdje malena moja.\nRazmisljanje gdje da te odvedem prouzrokova moje prevrtanje ocima\n"
                << "i gledanje u nebesa da vidim tu novu slasticarnu 'Slatku varos'.\nNebo tmurno, kisovito i hladno vrijeme je haman nesto sto ce biti obiljezje nasih najljepsih izlaza.\n";
				break;
			case 4:
				system("cls");
                PlaySound(TEXT("DINO.wav"),NULL,SND_SYNC);
                cout << "Koncert Dine Merlina, Tuzla, Tusanj, ti i ja.\nJedini nacin da se vidimo nakon nekog vremena,\nposto su nam nastupile neke zabrane."
                << "\nTaj pocetak koncerta je bio nesto nezaboravno,\na tebe vidit sa velikim osmijehom i suzama ocima,\nNEOPISIVO PRELIJEPO!!!"
                << "\nKoncert je bio lijep a ti najljepsa u toj noci,\nOnda prijevremeni odlazak sa koncerta\n i bjezanje u nasu tisinu je nesto ljepse od samog koncerta.\n";
                for(int i=0; i<25;i++)
                    cout << "Volim tee ";
                cout << endl;
				break;
			case 5:
			    system("cls");
				cout << "Bajram dodje, prvi put da sam s tobom a ako Bog da sledeci u braku.\n"
				<< "Iako sam imao pune ruke posla tijelom sam bio zauzet,\n al um je bio usmjeren na tebe malecka"
				<< "\nSledeci bajram da me budis kako sam rekao i glasom i rukom.\n"
				<< "kao\nprava\nmoja\nzena\nAmela\nAlibegovic\n";
				break;
			case 6:
				system("cls");
				cout << "Prvi datum koji se ne nalazi u tvojoj malenoj svesci,\n a vjerujem da je tebi ostao upecatljiv."
				<< "Pokusavali su da nam zabrane da se vidjamo,\n nije im uspjelo\nDOKAZ\nmoja jos jedna ludost a to je dolazak u Gornju Tuzlu"
				<< "\nTo jutro smo i zaspali u pola pet tacnije\n a zasto?"
				<< "\nda bih mogao gledati meni najljepse stvorenje na ovoj planeti\n TEBE MALENA\n"
				<< "\nTaj dan je bio sav u skupljanju hrabrosti da dodjem Suadu na vrata,\n po tebe.\n od onog 'Ti si ta Amela' i smijuljenja\n"
				<< "do tog momenta samo si mi ti u mislima, ne svidja se bas razumu ovakvo stanje,\n ali si isto tako i u srcu jedina\n i osjecam se tako ispunjeno"
				<< "i voljeno kao nikada dosad\n VOLIM TE AMELA KARASALIHOVIC\n";
				break;
            case 7:
                system("cls");
                cout << "Da noc prije kada sam rekao da dolazak\n u Gornju Tuzlu nije jedino iznenadjenje\n sam potvrdio isto jutro datuma kojeg si odabrala."
                << "\nNeocekivano za tebe, stojim ispred vrata 15-ke, na koja ti izlazis i iznenadno otvaras te svoje predivne okice.\n"
                << "Kao sova uvece kad je najvise budna, ista si bila tog jutra.\n Predivna kao i uvijek...\n";
                break;
            case 8:
                system("cls");
                cout << "Vjerovatno si zapitala se zasto ovaj datum.\nDatum kada sam ja bio u Gracanici sa poslom!\nE pa malena moram ti nesto priznat...\n"
                << "Ovo je jedini dan u mome zivotu kada sam pozelio da te ne sretne\nSigurno si dozivila neki mali sok zasto sam to rekao ali...\n"
                << "Dvije noci prije, kada je bilo maturalno sijelo kada sam ja lio suze\nkada sam dosao u sobu kovao sam zavjeru protiv tebe"
                << "\ni to sa tebi najblizim i najdrazim osobama.\nUrotili se protiv tebe da bi dogovorili dan kada cemo da sjednemo i popricamo\n"
                << "vezano za tvoju buducnost.\nOvako vise ne moze...\nDosta je vise ove patnje...\nTako sam odlucio da 16. aprila te slazem i dodjem u Tuzlu."
                << "\nU pola tri u slasticarnoj Fontana \nprema zelji tvojih najdrazis sam dosao da porazgovaram\no tvojoj buducnosti."
                << "\nTog trenutka za stolom su sjedile tri osobe tvoj otac mati i ja\nDosao je taj moment kad cu ja da trazim ruku od njih."
                << "\nKada sam pricao da sam siguran da ce te \npustit danas da ides sa mnom na duzi izlaz\nBio sam siguran\njer \nsu\nznali\nda cu\nte otrgnuti od njih na jedan nacin...\nOdaberi i zadnji datum...\n";
                break;
			case 9:
                system("cls");
                cout << "Zaboravi sve ovo sto sam ti rekao gore \ndoveo sam te samo danas da te iskoristim...\n"
                << "sala na stranu Amela ljubavi dugo sam cekao i spremao se\nda napokon pricam sa tvojima\nda tebe izvedem\nda kupim prsten\ni da te pitam\nAmela Karasalihovic\nda li si spremna da\nodbacis\nsvoje rodjeno prezime za koji mjesec\ni\n...........\n";
                PlaySound(TEXT("bruno.wav"),NULL,SND_SYNC);
                break;
			}
			if(datum==9)
                break;

	}
	while (datum >0 && datum < 10);
	return 0;
}
