#include "loader.h"

Loader::Loader()                        //конструктор по умолчанию
{
    material = 0;
    ready = false;
}

Loader::Loader(int loadmaterial)        //конструктор с загрузкой материала
{
   material = loadmaterial;
   if(material >= 100){ ready = true;} //если материала больше 100 то готов работе
   else
   {
        Loader::load(loadmaterial);

   }
}
void Loader::load(unsigned int loadmaterial)//метод загрузки материала в загрузчик
{
    material = loadmaterial;
}


int Loader::loadingTPA()
{
    if(material > 0)
    {
        ready == false;
        --material;
        return 1;
    }
    else{
        Loader::load(loadmaterial);
        ready = true;
    }
}