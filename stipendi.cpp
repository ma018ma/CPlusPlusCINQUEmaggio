#include<iostream>
#include<fstream>
 using namespace std;
 void findNameByCod(string cod)
 {
    string nome = "";
    ifstream fileMatricola("matricola.txt");
    if(fileMatricola.is_open())
    {
        cout << "File matricola.txt aperto correttamente" << endl;
        string line;
        while (getline(fileMatricola,line))
        {
            for (int i = 0; i<6 ; i++)
            {
                if(line[i] != cod[i])
                {
                    break;
                }
                else if ( i == 5)
                {
                    cout<<"La matricola: " << cod << " corrisponde al nome: " << nome << endl;
                }
                else
                {
                    
                }
            }
        }
    }
    else
    {
        cout << "Impossibile aprire il file matricola.txt" << endl;
    }
}

 void findSalaryByCod(string cod)
{
    cout << "" <<
}

void findSalaryByName(string name)
{
    cout << ""
}

 int main()
 {
    cout << "Benvenuto nel programma di calcolo stipendi" << endl;
    while (flag)
    {}
    cout << "Inserisci il numero della funzionalita che vuoi attivare" << endl;
    cout << "1. Matricola -> Nome" << endl;
    cout << "2. Matricola -> Nome" << endl;
    cout << "3. Nome -> Stipendio" << endl; 

    int scelta;
    cin >> scelta; //1
    cout << " Inserisci quello che vuoi cercare";
    string input;
    cin >> input;
    bool flag = true;
    while (flag)
    { 
        if(scelta < 1 || scelta > 3)
        {
            cout <<"Scelta non valida" << endl;  
        }
        else
        {
            if(scelta == 1 && input.length() == 5)
            {
                findNameByCod(input);
                flag=false;            
            }
            else if (scelta == 2 && input.length() == 5)
            {
                findSalaryByCod (input);
                flag = false;
            }
            else if (scelta == 3 )
            {
                findSalaryByName (input);
                flag = false;
            }
            else
            {
                cout << "Scelta non valida" << endl;
            }
        }
    }
    cout << "Fine" << endl;
   
    {
        
        return 0;
    }
    else
    {
        if(scelta ==)
    }

    switch (scelta)
    {
        case1:{
            findNameByCode(input);
        }
        break;
        case 2:{
            findSalaryByCod(input);
        }
        break;
        case 3:{
            findSalaryByName(input);
        }
        break;
        default:
            cout<< "Scelta non valida" << endl;

    }
}

 