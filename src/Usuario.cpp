#include "Usuario.h"
#include <algorithm>

Usuario::Usuario(int i, const std::string& n, const std::string& e, const std::string& f)
    : id(i), nombre(n), email(e), fechaRegistro(f) {}

std::string Usuario::getNombre() const { return nombre; }
std::string Usuario::getEmail() const { return email; }

void Usuario::prestarLibro(const std::string& isbn) {
    librosPrestados.push_back(isbn);
}

void Usuario::devolverLibro(const std::string& isbn) {
    auto it = std::remove(librosPrestados.begin(), librosPrestados.end(), isbn);
    librosPrestados.erase(it, librosPrestados.end());
}

std::vector<std::string> Usuario::getLibrosPrestados() const {
    return librosPrestados;
}

std::string Usuario::getFechaRegistro() const {
    return fechaRegistro;
}
