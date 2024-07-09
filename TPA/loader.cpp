#include "loader.h"

LOADER::LOADER()                        //конструктор по умолчанию
{
    material = 0;
    ready = false;
}

LOADER::LOADER(int loadmaterial)        //конструктор с загрузкой материала
{
   material = loadmaterial;
   if(material >= 100){ ready = true;} //если материала больше 100 то готов работе
   else
   {
        LOADER::load(loadmaterial);

   }
}
void LOADER::load(unsigned int loadmaterial)//метод загрузки материала в загрузчик
{
    material = loadmaterial;
}


int LOADER::loadingTPA()
{
    if(material > 0)
    {
        ready == false;
        --material;
        return 1;
    }
    else{
        LOADER::load(loadmaterial);
        ready = true;
    }
}