#include <iostream> //bib padrão c++ e/s de dados
#include "calculadora.h" //bib própria!
#include "calculadora_av.h" //bib própria!
#include "teste_num.h"
#include <iomanip>
#include <ios>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void cabecalho(){
		for(int i=0;i<54;i++){
		cout << "*"; 
	}
	
	cout << "Calculadora";
	
	for(int i=0;i<55;i++){
		cout << "*"; 
	}	
	}
	
	void display(){
	cout << left << setfill('>') << setw(20) << "\n1=" << right << setfill('>') << setw(20) << " Soma" << endl;
	cout << left << setfill('>') << setw(20) << "2=" << right << setfill('>') << setw(20) << " Subtracao" << endl;
	cout << left << setfill('>') << setw(20) << "3=" << right << setfill('>') << setw(20) << " Multiplicacao" << endl;
	cout << left << setfill('>') << setw(20) << "4=" << right << setfill('>') << setw(20) << " Divisao" << endl;
	cout << left << setfill('>') << setw(20) << "5=" << right << setfill('>') << setw(20) << " Potencia" << endl;
	cout << left << setfill('>') << setw(20) << "6=" << right << setfill('>') << setw(20) << " Raiz quadrada" << endl;
	cout << left << setfill('>') << setw(20) << "7=" << right << setfill('>') << setw(20) << " Testador de numero Par" << endl;
	cout << left << setfill('>') << setw(20) << "8=" << right << setfill('>') << setw(20) << " Testador de numero Impar" << endl;
	cout << left << setfill('>') << setw(20) << "9=" << right << setfill('>') << setw(20) << " Testador de numero Primo" << endl;
	cout << left << setfill('>') << setw(20) << "\n0=" << right << setfill('>') << setw(20) << " Limpar tela" << endl;
	cout << endl;
	cout << "< ";
	}

int menu(){
	
	
	cabecalho();
	display();
	
	int op;
	cin >> op; //lendo opção do usuário
	return op;
}

float obter_num(int n){
	cout << "Digite n" << n << ": ";
	float r;
	cin >> r;
	return r; 
}

string miniregex(bool n){
    if(n == true){
        return "Sim";
    } else{
        return "Nao";
    }
}

int main(int argc, char** argv) {
	int op(0);
	float resp, n1, n2;
	int n3;
	bool b, resp2;
	do{
		op = menu();
		switch (op){
			case 0:
				system("cls");
				break;
			case 1:
				//soma
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = soma(n1, n2);
				cout << "Soma eh: " << resp << endl;
				break;
			case 2:
				//subtracao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = subtracao(n1, n2);
				cout << "Subtracao eh: " << resp << endl;
				break;	
			case 3:
				//multiplicacao
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = multiplicacao(n1, n2);
				cout << "Multiplicacao eh: " << resp << endl;
				break;
			case 4:
				//divisão
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = divisao(n1, n2);
				cout << "Divisao eh: " << resp << endl;
				break;
			case 5:
				//potencia
				n1 = obter_num(1);
				n2 = obter_num(2);
				resp = potencia(n1, n2);
				cout << "Potencia eh: " << resp << endl;
				break;
			case 6:
				//raiz
				n1 = obter_num(1);
				resp = raiz(n1);
				cout << "Raiz quadrada eh: " << resp << endl;
				break;
			case 7:
                //? par
                n3 = obter_num(1);
                resp2 = eh_par(n3);
                cout << "Este numero eh par?: " << miniregex(resp2) << endl;
                break;
            case 8:
                //? impar
                n3 = obter_num(1);
                resp2 = eh_impar(n3);
                cout << "Este numero eh impar?: " << miniregex(resp2) << endl;
                break;
            case 9:
                //? primo
                n3 = obter_num(1);
                resp2 = eh_primo(n3);
                cout << "Este numero eh primo?: " << miniregex(resp2) << endl;
                break;			
			default:
				//fim de programa
				cout << "Fim de programa!\n";			
		}	
		b = (op<=9) && (op>=0);
	} while(b);
	
	system("pause");
	
	return 0;
}
