#ifndef LOADER_H
#define LOADER_H

class LOADER                    //загрузчик материала
{
private:
static bool ready;                     //переменная дающая сигнал готовности к работе что есть материал
unsigned int material;          //количество материала в загрузчике
unsigned int loadmaterial;

LOADER()                        //конструктор по умолчанию
{
    material = 0;
    ready = false;
}
LOADER(int loadmaterial)        //конструктор с загрузкой материала
{
   material = loadmaterial;
   if(material >= 100){ ready = true;} //если материала больше 100 то готов работе
   else
   {
        LOADER::load(loadmaterial);

   }
}


public:

void load(unsigned int loadmaterial)//метод загрузки материала в загрузчик
{
    material = loadmaterial;
}

int loadingTPA()
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



};







#endif