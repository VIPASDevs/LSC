//DISABLE THE INTRODUCTION PRINTS IF YOU ARE TWEAKING/DEVELOPING THE PROGRAM

#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <cmath>
using namespace std;
// required modules


void sleep(double seconds) {
	this_thread::sleep_for(chrono::milliseconds((int)(seconds * 1000)));
}

string lang; // allows langauge selection
string choice; // allows the user to select what mathematics mode they want
double inchoice; // first number
double inchoice2; // second number
double total; // displays the total of inchoice & inchoice2
double base ;  // for POWER number 1
double exponent; // for POWER number 2
double part; // first number for PERCENT OF
double whole; // second number for PERCENT OF & first number for PERCENT SOMETHING IS.
double percent; // second number for PERCENT SOMETHING IS
//non-area-specific variables


int main() {
	cout << "SELECT YOUR LANGUAGE: [EN]GLISH / [RU]SSIAN\n";
	cout << "ВЫБЕРИТЕ ЯЗЫК: [АН]ГЛИЙСКИЙ / [РУ]ССКИЙ\n";
	cout << "LANGUAGE/ЯЗЫК: ";
	cin >> lang;
	
	if (lang == "ру" || lang == "РУ") {
		lang = "RU";
	}
	
	for (char &c : lang) c =toupper(c);
	
	
	
	
	if (lang == "EN") {
		cout << "\nText Interface Calculator, TIC\n";
		sleep(1); cout << "Version 03.00.00\n";
		sleep(1); cout << "COPYRIGHT VOID STUDIOS, VOID STUDIOS SOURCE PROGRAM 2025-2026\n";
		sleep(1); cout << "GNU General Public License 2.x\n";
		sleep(1); cout << "Reconstruction of Py Calculator\n\n";
	
		while (true) {
			cout << "\nOPTIONS: EXIT [..], ADDITION [+], MULTIPLICATIONS [*], SUBTRACTION [-], DIVISION [/], REMAINDER [|], PERCENT OF [%], PERCENT SOMETHING IS [>].\n";
			cout << "SELECT: ";
			cin >> choice;
			
			
			if (choice == "..") {
				sleep(2); cout << "\nEXITING...\n";
				break;
			}
		
		
			else if (choice == "+") {
				cout << "\nNUMBER: ";
				cin >> inchoice;
				cout << "SECOND NUMBER: ";
				cin >> inchoice2;
				total = inchoice + inchoice2;
			
				cout << "TOTAL: " << total << "\n";
			}
		
		
			else if (choice == "*") {
				cout << "\nNUMBER: ";
				cin >> inchoice;
				cout << "SECOND NUMBER: ";
				cin >> inchoice2;
				total = inchoice * inchoice2;
			
				cout << "TOTAL: " << total << "\n";
			}
		
		
			else if (choice == "-") {
				cout << "\nNUMBER: ";
				cin >> inchoice;
				cout << "SECOND NUMBER: ";
				cin >> inchoice2;
				total = inchoice - inchoice2;
				
				cout << "TOTAL: " << total << "\n";
			}
		
		
			else if (choice == "/") {
				cout << "\nNUMBER: ";
				cin >> inchoice;
				cout << "SECOND NUMBER: ";
				cin >> inchoice2;
				total = inchoice / inchoice2;
				
				cout << "TOTAL: " << total << "\n";
			}
			
			
			else if (choice == "^") {
				cout << "\nBASE: ";
				cin >> base;
				cout << "EXPONENT: ";
				cin >> exponent;
				total = pow(base, exponent);
			
				cout << "TOTAL: " << total << "\n";
			}
		
		
			else if (choice == "|") {
				cout << "\nNUMBER: ";
				cin >> inchoice;
				cout << "SECOND NUMBER: ";
				cin >> inchoice2;
				total = fmod(inchoice, inchoice2);
				
				cout << "TOTAL: " << total << "\n";
			}
		
		
			else if (choice == "%") {
				cout << "\nPART: ";
				cin >> part;
				cout << "WHOLE: ";
				cin >> whole;
				total = (part / whole) * 100;
				
				cout << part << "% IS " << total << "% OF " << whole << "\n";
			}
			
			
			else if (choice == ">") {
				cout << "\nWHOLE: ";
				cin >> whole; 
				cout << "PERCENTAGE: ";
				cin >> percent;
				total = (whole * percent) / 100.0;
				
				cout << "TOTAL: " << total << " IS " << percent << "% OF " << whole << "\n";
			}
		}
	}
	
	
	
	
	else if (lang == "RU") {
		cout << "\nТекстовый Kалькулятор, TK\n";
		sleep(1); cout << "Версия 03.00.00\n";
		sleep(1); cout << "Авторское право: VOID STUDIOS, Оригинальная программа VOID STUDIOS 2025–2026 гг.\n";
		sleep(1); cout << "Универсальная Oбщественная Лицензия GNU, Берсия 2.x";
		sleep(1); cout << "Реконструкция 'Py Calculator'\n";
		
		while (true) {
			cout << "\nОПЦИИ: ВЫХОД [..], ИНФОРМАЦИЯ [.], СЛОЖЕНИЕ [+], УМНОЖЕНИЕ [*], ВЫЧИТАНИЕ [-], ДЕЛЕНИЕ [/], ОСТАТОК [|], ПРОЦЕНТ ОТ [%], СКОЛЬКО ПРОЦЕНТОВ [>]\n";
			cout << "ВЫБОР: ";
			cin >> choice;
			
			if (choice == "..") {
				sleep(2); cout << "\nВыход...\n";
				break;
			}
			
			else if (choice == ".") {
				cout << "Я изучаю русский язык, поэтому, пожалуйста, смело исправляйте переводы. Изначально эта программа была написана на английском, поэтому для достижения наилучшего качества, пожалуйста, выбирайте английский язык.\n";
			}
			
			else if (choice == "+") {
				cout << "\nЧИСЛО: ";
				cin >> inchoice;
				cout << "ВТОРОЕ ЧИСЛО: ";
				cin >> inchoice2;
				total = inchoice + inchoice2;
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "*") {
				cout << "\nЧИСЛО: ";
				cin >> inchoice;
				cout << "ВТОРОЕ ЧИСЛО: ";
				cin >> inchoice2;
				total = inchoice * inchoice2;
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "-") {
				cout << "\nЧИСЛО: ";
				cin >> inchoice;
				cout << "ВТОРОЕ ЧИСЛО: ";
				cin >> inchoice2;
				total = inchoice - inchoice2;
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "/") {
				cout << "\nЧИСЛО: ";
				cin >> inchoice;
				cout << "ВТОРОЕ ЧИСЛО: ";
				cin >> inchoice2;
				total = inchoice / inchoice2;
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "^") {
				cout << "\nБАЗА: ";
				cin >> base;
				cout << "ПОКАЗАТЕЛЬ СТЕПЕНИ: ";
				cin >> exponent;
				total = pow(base, exponent);
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "|") {
				cout << "\nЧИСЛО: ";
				cin >> inchoice;
				cout << "ВТОРОЕ ЧИСЛО: ";
				cin >> inchoice2;
				total = fmod(inchoice, inchoice2);
				
				cout << "ОБЩИЙ: " << total << "\n";
			}
			
			else if (choice == "%") {
				cout << "\nЧАСТЬ: ";
				cin >> part;
				cout << "ВЕСЬ:: ";
				cin >> whole;
				total = (part / whole) * 100;
				
				cout << part << "% это " << total << "% из " << whole << "\n";
			}
			
			else if (choice == ">") {
				cout << "\nЧАСТЬ: ";
				cin >> whole; 
				cout << "ПРOЦEHT: ";
				cin >> percent;
				total = (whole * percent) / 100.0;
				
				cout << "ОБЩИЙ: " << total << " это " << percent << "% из " << whole << "\n";
			}
		}
	}
	
	
	
	
	else {
		cout << "PLEASE SELECT AN OPTION | Пожалуйста, выберите вариант\n";
		cout << "LANGUAGE: ";
		cin >> lang;
	}
	
	return 0;
}
