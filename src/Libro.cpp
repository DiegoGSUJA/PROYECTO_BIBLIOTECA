#include "Libro.h"

Libro::Libro(std::string t, std::string a, int n, std::string g, std::string i)
    : titulo(t), autor(a), anio(n), genero(g), isbn(i), disponible(true) {}

std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
bool Libro::isDisponible() const { return disponible; }
void Libro::prestarLibro() { disponible = false; }
void Libro::devolverLibro() { disponible = true; }
