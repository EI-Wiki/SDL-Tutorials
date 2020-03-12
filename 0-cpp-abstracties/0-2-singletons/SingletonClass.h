#ifndef EIWIKI_SINGLETONCLASS_H
#define EIWIKI_SINGLETONCLASS_H


class SingletonClass
{
public:

    // Singleton definitie

    // Gebruik de default constructor
    SingletonClass() = default;

    static SingletonClass& getInstance()
    {
        static SingletonClass instance; // Creeër een instance
        return instance;
    }

    // Verzeker dat er maar 1 instantie kan bestaan
    SingletonClass(SingletonClass const&)  = delete;
    void operator=(SingletonClass const&)  = delete;

    // Publieke methodes
    void doStuff();

};


#endif
