#ifndef ENEMIGO_H
#define	ENEMIGO_H


class Enemigo: public ObjetoMovil{
    int pasos;
public:
    Enemigo(int, int);
    void tipoMovimiento(int tipo);
};

#endif	/* ENEMIGO_H */

