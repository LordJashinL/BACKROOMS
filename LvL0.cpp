#include <iostream>
#include <cmath>
#include <time.h> 
#include <cstring>
#include <cstdlib>
using namespace std;
	int main(){
		int level, difficult, scelta;
		cout<<"Benvenuto, prego scelga un'azione."<<endl;
		cout<<"1) Vai a dormire."<<endl;
		cin>>scelta;
		if (scelta==1){
			cout<<"Vai a letto."<<endl;
			cout<<"Ti addormenti quasi subito."<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			LIVELLO0:int stanza;
			cout<<"Apri gli occhi e ti ritrovi nel bel mezzo di una stanza."<<endl;
			cout<<"La stanza non ha porte."<<endl;
			cout<<"Le pareti sono ingiallite."<<endl;
			cout<<"L'unica fonte di luce sono delle luci al neon."<<endl;
			cout<<"Il ronzio proveniente da esse è fastidioso, ma sopportabile."<<endl;
			cout<<"La stanza non ha porte, ti scorgi e noti una lunga galleria di stanze vuote."<<endl;
			cout<<"Sono identiche a quella in cui sei ora, cosa farai?"<<endl;
			cout<<"1) Stanza 1"<<endl;
			cout<<"2) Stanza 2"<<endl;
			cout<<"3) Stanza 3"<<endl;
			cout<<"4) Stanza 4"<<endl;
			cin>>stanza;
			switch(stanza){
				case 1: 
					STANZA1:{
					int room;
					cout<<"Sei nella stanza 1."<<endl;
					cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
					cin>>room;
					switch(room){
							case 1:
								goto STANZA2;
							case 2: 
								goto STANZA2;
							case 3: 
								goto STANZA3;
								}
							}
				case 2: 
					STANZA2:{
					int rom;
					cout<<"Sei nella stanza 2."<<endl;
					cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
					cin>>rom;
					switch(rom){
							case 1:
								goto STANZA1;
							case 2:
								goto STANZA3;
							case 3:
								goto STANZA1;
								}
							}
				case 3: 
					STANZA3:{
					int rm;
					cout<<"Sei nella stanza 3."<<endl;
					cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
					cin>>rm;
					switch(rm){
							case 1:
								goto STANZA2;
							case 2:
								goto STANZA1;
							case 3:
								goto STANZA4;
								}
							}
				case 4: 
					cout<<"Sei nella stanza 4."<<endl;
					cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
					STANZA4:{
					int sclta;
					cout<<"Vedi un piccolo corridoio abbastanza lungo."<<endl;
					cout<<"Dietro di te inizi a sentire dei passi."<<endl;
					cout<<"Cosa fai?"<<endl;
					cout<<"1) Ti volti."<<endl;
					cout<<"2) Inizi a correre."<<endl;
					cout<<"3) Cerchi di allontanarti in modo silenzioso."<<endl;
					cin>>sclta;
					if(sclta==1)
					{	
						cout<<"Appena ti giri vedi una strana creatura."<<endl;
						cout<<"Ti sta fissando in modo inquietante."<<endl;
						cout<<"Non hai altra scelta se non correre."<<endl;
						cout<<"Vedi una porta in fondo al corridoio."<<endl;
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<""<<endl;
						goto LABIRINTO;
					}
					if(sclta==2)
					{
						int fuga;
						cout<<"Inizi a correre per il corridoio."<<endl;
						cout<<"La creatura ti nota e inizia ad inseguirti."<<endl;
						cout<<"Corri fino in fondo al corridoio e noti una porta."<<endl;
						cout<<"1) Apri la porta."<<endl;
						cout<<"2) Voltati e affronta la creatura."<<endl;
						cin>>fuga;
						if (fuga==1)
						LABIRINTO:{
							int escape;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"Una volta aperta la porta noti che ci sono altre stanze."<<endl;
							cout<<"Scegli in quale andare."<<endl;
							cout<<"In totale ci sono 5 stanze, quantomeno quelle che puoi vedere."<<endl;
							cout<<"Scegline una con il suddetto numero."<<endl;
							cin>>escape;
							switch(escape)
								case 1:
									STANZA5:{
										int longs;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei nella stanza 5."<<endl;
										cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
										cin>>longs;
										switch(longs){
											case 1:
													goto STANZA6;
											case 2:
													goto STANZA7;
											case 3:
													goto STANZA9;
										}
									}
							switch(escape)
								case 2:
									STANZA6:{
										int longgs;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei nella stanza 6."<<endl;
										cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
										cin>>longgs;
										switch(longgs){
											case 1:
													goto STANZA5;
											case 2:
													goto STANZA7;
											case 3:
													goto STANZA9;
										}
									}
							switch(escape)
								case 3:
									STANZA7:{
										int mid;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei nella stanza 7."<<endl;
										cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
										cin>>mid;
										switch(mid){
											case 1:
													goto STANZA5;
											case 2:
													goto STANZA8;
											case 3:
													goto STANZA6;
										}
									}
							switch(escape)
								case 4:
									STANZA8:{
										int miid;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei nella stanza 8."<<endl;
										cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
										cin>>miid;
										switch(miid){
											case 1:
													goto STANZA7;
											case 2:
													goto STANZA6;
											case 3:
													cout<<"Finalmente trovi una porta."<<endl;
													cout<<"La apri e riesci ad uscire."<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"**************ESPLORATORE**********************"<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"***********************************************"<<endl;
										}
									}
							switch(escape)
								case 5:
									STANZA9:{
										int small;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei nella stanza 9."<<endl;
										cout<<"Questa stanza ha 3 collegamenti, scegline uno dei 3 con il suddetto numero."<<endl;
										cin>>small;
										switch(small){
											case 1:
													goto STANZA5;
											case 2:
													goto STANZA7;
											case 3:
													goto STANZA8;
										}
									}
						}
						if (fuga==2)
						{
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"Ti giri e decidi di affrontare la creatura."<<endl;
							cout<<"Avanzi in modo minaccioso."<<endl;
							cout<<"In pochi secondi la creatura ti raggiunge"<<endl;
							cout<<"Purtroppo la tua forza non risulta abbastanza."<<endl;
							cout<<"Vieni fatto a pezzi."<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"***********************************************"<<endl;
							cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
							cout<<"***********************************************"<<endl;
							cout<<"********************DECEDUTO*******************"<<endl;
							cout<<"***********************************************"<<endl;
							cout<<"***********************************************"<<endl;
						}
					}
					if(sclta==3)
					{
						int voce;
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<""<<endl;
						cout<<"Raggiungi la fine del corridoio."<<endl;
						cout<<"La creatura non ti nota."<<endl;
						cout<<"Appena apri la porta in fondo al corridoio una voce ti chiama."<<endl;
						cout<<"Cosa fai?"<<endl;
						cout<<"1) Segui la voce."<<endl;
						cout<<"2) Allontanati."<<endl;
						cin>>voce;
						if(voce==1)
						{
							int voice;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<""<<endl;
							cout<<"Noti un essere umano nascosto dietro un muro."<<endl;
							cout<<"<Qui Logan, ho trovato un sopravvissuto>"<<endl;
							cout<<"1) Gli chiedi del posto."<<endl;
							cout<<"2) Stai in silenzio e ascolti."<<endl;
							cin>>voice;
							if (voice==1)
							{
								int fight;
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<""<<endl;
								cout<<"Appena provi a parlare ti viene fatto segno di stare zitto."<<endl;
								cout<<"L'uomo ti guarda rattristito."<<endl;
								cout<<"<Non sembri messo bene.>"<<endl;
								cout<<"<Ascoltami, verrai con me e andremo alla base."<<endl;
								cout<<"Annuisci pur non capendo di cosa parla."<<endl;
								cout<<"Semti un urlo terribile"<<endl;
								cout<<"Una creatura sta venendo verso di voi."<<endl;
								cout<<"L'uomo ti mette in mano una pistola e inizia a sparare alla creatura."<<endl;
								cout<<"Cosa farai?"<<endl;
								cout<<"1) Combatti insieme a lui."<<endl;
								cout<<"2) Approfitta e scappa."<<endl;
								cin>>fight;
								if(fight==1)
								{
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"Provi a sparare alla testa della creatura."<<endl;
									int max, forza;
									max = 100;
									srand(time(0));
									cout<<"La tua forza attualmente è di: "<<forza%max<<endl;
									if(forza<49)
									{
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Purtroppo non hai avuto abbastanza forza."<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"***********************************************"<<endl;
										cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
										cout<<"***********************************************"<<endl;
										cout<<"***********COMBATTENTE DECEDUTO****************"<<endl;
										cout<<"***********************************************"<<endl;
										cout<<"***********************************************"<<endl;

									}
									if(forza>50)
									{
										int crea;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Sei riuscito a sparare in modo efficiente."<<endl;
										cout<<"La creatura cade al suolo."<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"<Complimenti, sei stato bravo.>"<<endl;
										cout<<"<Ora dobbiamo correre sicuramente stanno arrivando altri"<<endl;
										cout<<"Segui l'uomo che procede a passo svelto."<<endl;
										cout<<""<<endl;
										cout<<""<<endl;
										cout<<"Siete versi l'uscita a giudicare dalla sua fretta."<<endl;
										cout<<"All'improvviso da una parete arriva una strana creatura."<<endl;
										cout<<"Afferra la testa dell'uomo e la stacca come se nulla fosse."<<endl;
										cout<<"Prendi l'arma dell'uomo e spari alla creatura."<<endl;
										cout<<"La creatura ora guarda verso di te."<<endl;
										cout<<"1) Prova a sparare nuovamente alla creatura."<<endl;
										cout<<"2) Scappa e torna indietro."<<endl;
										cin>>crea;
										if (crea==1)
										{
											int ogg;
											cout<<"Non riesci ad ucciderla, ma sembra bastare oer stordirla."<<endl;
											cout<<"Puoi prendere solo uno dei 3 oggetti dell'uomo."<<endl;
											cout<<"1) Zaino"<<endl;
											cout<<"2) Radio"<<endl;
											cout<<"3) Torcia"<<endl;
											cin>>ogg;
											if(ogg==1){ 
													cout<<"La creatura si riprende, ma sei riuscito a scappare con lo zaino."<<endl;
													cout<<"Procedi per altre stanze senza sapere esattamente dove stai andando."<<endl;
													cout<<"Improvvisamente hai fame, apri lo zaino, noti che ci sono delle barrette."<<endl;
													cout<<"Le mangi e recuperi un po' di energia."<<endl;
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"Improvvisamente le luci si spengono, sei nel buio più totale."<<endl;
													cout<<""<<endl;
													cout<<""<<endl;
													int daria;
													cout<<"Una voce dal buio ti chiama."<<endl;
													cout<<"8) Segui la voce."<<endl;
													cout<<"9) Allontanati quanto più possibile."<<endl;
													cin>>daria;
													if (daria==8)
													{
														cout<<"La voce continua a sussurrare."<<endl;
														cout<<"<Avvicinati conosco l'uscita>"<<endl;
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"Dal buio degli artigli affondano nei tuoi occhi."<<endl;
														cout<<"Nonostante le tue forze recuperate prima, non riesci a combattere."<<endl;
														cout<<"La creatura procede con il divorare il tuo corpo mentre sei ancora vivo."<<endl;
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********COMBATTENTE SFORTUNATO**************"<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********************************************"<<endl;
													}
													if (daria==9)
													{
														cout<<"Riesci ad allontanarti velocemente."<<endl;
														cout<<"Seppur nel buio riesci a trovare una porta."<<endl;
														cout<<"Dalla disperazione l'apri sperando sia l'uscita."<<endl;
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<""<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********COMBATTENTE FORTUNATO***************"<<endl;
														cout<<"***********************************************"<<endl;
														cout<<"***********************************************"<<endl;
													}
												if (ogg==2)
												{
													cout<<"La creatura si riprende, ma sei riuscito a scappare con la radio."<<endl;
													cout<<"Procedi per altre stanze senza sapere esattamente dove stai andando."<<endl;
													cout<<"Improvvisamente hai fame, ma non hai nulla da mangiare."<<endl;
													cout<<"Le tue energie si stanno esaurendo."<<endl;
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"Improvvisamente le luci si spengono, sei nel buio più totale."<<endl;
													cout<<"Senti una voce dalla radio."<<endl;
													cout<<"<Non fidarti di nessuna voce ora che sei nel buio>"<<endl;
													cout<<"<Ti guiderò verso l'uscita, segui le mie istruzioni>"<<endl;
													cout<<"Seguendo le istruzioni della voce riesci ad arrivare verso la porta dell'uscita."<<endl;
													cout<<"Una creatura esce fuori dal muro, ma non hai abbastanza forze per combatterla."<<endl;
													cout<<"Provi ad aggirarla."<<endl;
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"Riesci ad aggirarla e ad uscire, ma nella corsa disperata hai perso la radio."<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"***********COMBATTENTE DISPERATO***************"<<endl;
													cout<<"***********************************************"<<endl;
													cout<<"***********************************************"<<endl;
												}
												if (ogg==3)
												{ 
													cout<<"La creatura si riprende, ma sei riuscito a scappare con la torcia."<<endl;
													cout<<"Procedi per altre stanze senza sapere esattamente dove stai andando."<<endl;
													cout<<"Improvvisamente hai fame, ma non hai nulla da mangiare."<<endl;
													cout<<"Le tue energie si stanno esaurendo."<<endl;
													cout<<""<<endl;
													cout<<""<<endl;
													cout<<"Improvvisamente le luci si spengono, sei nel buio più totale."<<endl;
													cout<<"Accendi la torcia e noti una creatura in arrivo."<<endl;
													cout<<"Non hai così tante forze per correre e provi a combatterla."<<endl;
													int dispe, chance;
													chance = 10;
													srand(time(0));
													cout<<"La tua forza attualmente è di: "<<dispe%max<<endl;
													if (dispe>5){
															cout<<"La forza della disperazione riesce a farti uccidere la creatura."<<endl;
															cout<<"Finalmente riesci a trovare la porta che conduce all'uscita."<<endl;
															cout<<"Mentre stai per uscire quella creatura prova ad afferrarti seppur moribonda."<<endl;
															cout<<"Lanci la torcia contro la creatura e riesci ad uscire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********COMBATTENTE DISPERATO***************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														}
														if (dispe<5)
														{
															cout<<"Purtroppo non hai avuto abbastanza forza."<<endl;
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********COMBATTENTE DECEDUTO****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														}
												}
										if (crea==2)
										{
											goto LABIRINTO;
										}
									}

								}
								if (fight==2)
								{
									int buio;
									cout<<"Riesci a scappare dal combattimento."<<endl;
									cout<<"Dai solo uno sguardo veloce e noti che la creatura sta divorando l'uomo."<<endl;
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<""<<endl;
									cout<<"Improvvisamente le luci si spengono."<<endl;
									cout<<"Non hai nulla per far luce e le tue energie ormai sono al minimo."<<endl;
									cout<<"Una voce ti chiama."<<endl;
									cout<<"Non ti fidi abbastanza da avvicinarti."<<endl;
									cout<<"Inizi a camminare per stanze e corridoi, ma non comprendi nulla."<<endl;
									cout<<"Riesci a contare 10 stanze attraversate, scegli in quale provare a tornare."<<endl;
									cin>>buio;
									switch(buio)
									{
										case 1:
												STANZA10:{
													int cas;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>cas;
													switch(cas){
														case 1:
															goto STANZA11;
														case 2:
															goto STANZA12;
														case 3:
															goto STANZA13;
														case 4:
															goto STANZA16;
																}
														}
										case 2:
												STANZA11:{
													int ca;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>ca;
													switch(ca){
														case 1:
															goto STANZA14;
														case 2:
															goto STANZA16;
														case 3:
															goto STANZA12; 
														case 4:
															goto STANZA19;
														}
													}
										case 3:
												STANZA12:{
													int c;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>c;
													switch(c){
														case 1:
															goto STANZA15;
														case 2:
															goto STANZA18;
														case 3:
															goto STANZA14;
														case 4:
															goto STANZA10;
															}
												}
										case 4:
												STANZA13:{
													int casu;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>casu;
													switch(casu){
														case 1:
															goto STANZA11;
														case 2:
															goto STANZA14;
														case 3:
															goto STANZA18;
														case 4:
															goto STANZA15;
														}
												}
										case 5:
												STANZA14:{
													int casul;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>casul;
													switch(casul){
														case 1:
															goto STANZA13;
														case 2:
															goto STANZA17;
														case 3:
															goto STANZA10;
														case 4:
															goto STANZA19;
														}
												}
										case 6:
												STANZA15:{
													int cal;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>cal;
													switch(cal){
														case 1:
															cout<<"Finalmente riesci a trovare l'uscita."<<endl;
															cout<<""<<endl;
															cout<<""<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"************CODARDO FORTUNATO******************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 2:
															goto STANZA16;
														case 3:
															goto STANZA19;
														case 4:
															goto STANZA12;
														}
												}
										case 7:
												STANZA16:{
													int cam;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>cam;
													switch(cam){
														case 1:
															goto STANZA13;
														case 2:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 3:
															goto STANZA17;
														case 4:
															goto STANZA15;
														}
												}
										case 8:
												STANZA17:{
													int car;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>car;
													switch(car){
														case 1:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 2:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 3:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 4:
															goto STANZA18;
														}
												}
										case 9:
												STANZA18:{
													int cao;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>cao;
													switch(cao){
														case 1:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 2:
															goto STANZA15;
														case 3:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 4:
															goto STANZA12;
														}
												}
										case 10:
												STANZA19:{
													int cap;
													cout<<"Sei nella stanza ??, riesci a percepire 4 stanze davanti a te."<<endl;
													cout<<"Scegli attentamente."<<endl;
													cin>>cap;
													switch(cap){
														case 1:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 2:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 3:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
														case 4:
															cout<<"Appena entri nella stanza qualcosa ti afferra da dietro."<<endl;
															cout<<"Non hai il tempo di reagire."<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********ESITO SOPRAVVIVENZA*****************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"*****************CODARDO***********************"<<endl;
															cout<<"***********************************************"<<endl;
															cout<<"***********************************************"<<endl;
															}
													}
								}
							}
							if (voice==2)
								{
									cout<<"<Cerco di tornare appena possibile, chiudo>"<<endl;
								}
						}
						if(voce==2)
							{
								cout<<"Decidi di tornare da dove sei venuto."<<endl;
								cout<<"Ti volti aprendo di nuovo la porta."<<endl;
								cout<<"Speri che la creatura se ne sia andata."<<endl;
								goto LABIRINTO;
							}
					}
				}
			}
		}
				}
				}
				}}	