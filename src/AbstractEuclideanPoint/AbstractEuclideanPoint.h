#include <PointAddable.h>
#include <Substractable.h>




//Vytvoř abstraktní třídu AbstractEuclideanPoint, která implementuje výše zmíněné.
//Poskytne obecnou definici funkce distance, která zjistí vzdálenost mezi dvěma body 
//(využije k tomu interface Subtractable a statickou metodu z třídy AbstractEuclideanVector::norm)

template <class T >
class AbstractEuclideanPoint :public PointAddable<T>, public Substractable<T>, public VectorScalarable<T>

//dedim i z VectorScaralable protoze tahle funkce dole pro Pointy bohuzel potrebuje scalar - pouziva ho funkce norm... 
{
public: 

   float distancePoint(const T &other) {
        T difference = this->subs(other); 
        return AbstractEuclideanVector<T>::norm(difference); 
    }

    //V této části je definována metoda distancePoint, která vypočítá vzdálenost mezi dvěma body typu T. Tato metoda funguje takto:

  //Výpočet Rozdílu: Nejprve se vypočítá rozdíl mezi aktuálním bodem (reprezentován this) 
  //a jiným bodem other pomocí metody subs, kterou poskytuje rozhraní Substractable. Tento rozdíl je uložen v proměnné difference.

  //Výpočet Normy: Poté se vypočítá norma (v tomto kontextu Euklidovská norma, 
  //což je délka vektoru) tohoto rozdílu pomocí statické metody norm třídy AbstractEuclideanVector<T>. Výsledek tohoto výpočtu je vzdálenost mezi dvěma body.

  



 }; 