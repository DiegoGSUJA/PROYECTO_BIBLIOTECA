#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    int anio;
    std::string genero;
    std::string isbn;
    bool disponible;

public:
    Libro(std::string titulo, std::string autor, int anio, std::string genero, std::string isbn);
    std::string getTitulo() const;
    std::string getAutor() const;
    bool isDisponible() const;
    void prestarLibro();
    void devolverLibro();
};

#endif
