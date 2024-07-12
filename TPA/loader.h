#ifndef LOADER_H
#define LOADER_H

class Loader                   //загрузчик материала
{
private:
static bool ready;              //переменная дающая сигнал готовности к работе что есть материал
unsigned int material;          //количество материала в загрузчике
unsigned int loadmaterial;

                      //конструктор по умолчанию

Loader(int loadmaterial);        //конструктор с загрузкой материала


public:
Loader(); 
void load(unsigned int loadmaterial);//метод загрузки материала в нагреватель

int loadingTPA();

};







#endif