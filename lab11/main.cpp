#include "pisici_albe.hpp"
#include "pisici_negre.hpp"
#include "pisici_colorate.hpp"

using namespace std;

int main()
{
    int capacitate = 300;
    int copy_capacitate = capacitate;
    int contor = 0;
    while (copy_capacitate >= capacitate / 2)
    {
        copy_capacitate = copy_capacitate - 5 + 3;
        contor++;
    }
    copy_capacitate = capacitate;
    cout << "cafeneaua va avea mai putin sau egal de 50\% din locuri in " << contor << " zile\n";
    int mancare_pisici_100_zile = 0;
    for (int i = 0; i < 100; i++)
    {
        mancare_pisici_100_zile = mancare_pisici_100_zile + copy_capacitate * 100;
        copy_capacitate = copy_capacitate - 5 + 3;
    }
    cout << "in 100 de zile pisicile vor manca " << mancare_pisici_100_zile << " grame sau " << mancare_pisici_100_zile / 1000 << "KG\n";

    Pisici **obj;
    obj = new Pisici *[10];
    obj[0] = new Pisici_Albe(1, "Tigrut", "foarte alintata", 1);
    obj[1] = new Pisici_Colorate(3, "Pisicut", "mananca foarte mult", 1);
    obj[2] = new Pisici_Negre(2, "Dodo", "nu are un ochi", 0);
    obj[3] = new Pisici_Albe(5, "Mirabela", "e batrana", 1);
    obj[4] = new Pisici_Colorate(1, "Vrajitoarea", "este mov", 1);
    obj[5] = new Pisici_Negre(0, "Tomas", "inca bea lapte de la mama", 0);
    obj[6] = new Pisici_Albe(4, "Baghera", "este motan si mananca mult", 1);
    obj[7] = new Pisici_Colorate(0, "Sofi", "miauna foarte mult", 0);
    obj[8] = new Pisici_Negre(1, "Mustafa", "vine din turcia", 0);
    obj[9] = new Pisici_Albe(2, "Carina", "are ochii verzi", 1);

    int contor_pui = 0, contor_tanara = 0, contor_matura = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(obj[i]->GetCategorieVarsta(), "pui") == 0)
        {
            contor_pui++;
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "tanara") == 0)
        {
            contor_tanara++;
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "matura") == 0)
        {
            contor_matura++;
        }
    }
    cout << "in cafenea sunt " << contor_pui << " pui, " << contor_tanara << " pisici tinere si " << contor_matura << " pisici mature.\n";

    int contor_pui_v[3] = {0, 0, 0};
    int contor_tanara_v[3] = {0, 0, 0};
    int contor_matura_v[3] = {0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(obj[i]->GetCategorieVarsta(), "pui") == 0)
        {
            if (strcmp(obj[i]->GetCuloare(), "alba") == 0)
            {
                contor_pui_v[0]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "neagra") == 0)
            {
                contor_pui_v[1]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "colorata") == 0)
            {
                contor_pui_v[2]++;
            }
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "tanara") == 0)
        {
            if (strcmp(obj[i]->GetCuloare(), "alba") == 0)
            {
                contor_tanara_v[0]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "neagra") == 0)
            {
                contor_tanara_v[1]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "colorata") == 0)
            {
                contor_tanara_v[2]++;
            }
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "matura") == 0)
        {
            if (strcmp(obj[i]->GetCuloare(), "alba") == 0)
            {
                contor_matura_v[0]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "neagra") == 0)
            {
                contor_matura_v[1]++;
            }
            if (strcmp(obj[i]->GetCuloare(), "colorata") == 0)
            {
                contor_matura_v[2]++;
            }
        }
    }
    cout << endl;
    cout << "Pui: \n";
    cout << "Albi: " << contor_pui_v[0] << endl;
    cout << "Negri: " << contor_pui_v[1] << endl;
    cout << "Colorati: " << contor_pui_v[2] << endl;
    cout << endl;
    cout << "Pisici Tinere: \n";
    cout << "Albe: " << contor_tanara_v[0] << endl;
    cout << "Negre: " << contor_tanara_v[1] << endl;
    cout << "Colorate: " << contor_tanara_v[2] << endl;
    cout << endl;
    cout << "Pisici Mature: \n";
    cout << "Albe: " << contor_matura_v[0] << endl;
    cout << "Negre: " << contor_matura_v[1] << endl;
    cout << "Colorate: " << contor_matura_v[2] << endl;
    cout << endl;

    int contor_vaccin_pui = 0, contor_vaccin_tanara = 0, contor_vaccin_matura = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(obj[i]->GetCategorieVarsta(), "pui") == 0)
        {
            if (obj[i]->GetVaccin() == 1)
            {
                contor_vaccin_pui++;
            }
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "tanara") == 0)
        {
            if (obj[i]->GetVaccin() == 1)
            {
                contor_vaccin_tanara++;
            }
        }
        if (strcmp(obj[i]->GetCategorieVarsta(), "matura") == 0)
        {
            if (obj[i]->GetVaccin() == 1)
            {
                contor_vaccin_matura++;
            }
        }
    }
    cout << "Pui vaccinati: " << contor_vaccin_pui << " din " << contor_pui << endl;
    cout << "Pisici tinere vaccinate: " << contor_vaccin_tanara << " din " << contor_tanara << endl;
    cout << "Pisici mature vaccinate " << contor_vaccin_matura << " din " << contor_matura << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strlen(obj[i]->GetDescriere()) < strlen(obj[j]->GetDescriere()))
            {
                Pisici *aux = obj[i];
                obj[i] = obj[j];
                obj[j] = aux;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        obj[i]->Afisare();
    }

    for (int i = 0; i < 10; i++)
        delete obj[i];
    delete[] obj;

    return 0;
}