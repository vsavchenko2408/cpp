#ifndef LOADER_H
#define LOADER_H

class LOADER                    //загрузчик материала
{
private:
static bool ready;                     //переменная дающая сигнал готовности к работе что есть материал
unsigned int material;          //количество материала в загрузчике
unsigned int loadmaterial;

LOADER();                       //конструктор по умолчанию

LOADER(int loadmaterial);        //конструктор с загрузкой материала


public:

void load(unsigned int loadmaterial);//метод загрузки материала в загрузчик


int loadingTPA();

};







#endif