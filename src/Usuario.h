#include <string>
#include <vector>

class Usuario {
private:
    int id;
    std::string nombre;
    std::string email;
    std::vector<std::string> librosPrestados;
    std::string fechaRegistro; // NUEVO atributo

public:
    Usuario(int id, const std::string& nombre, const std::string& email, const std::string& fechaRegistro);
    std::string getNombre() const;
    std::string getEmail() const;
    void prestarLibro(const std::string& isbn);
    void devolverLibro(const std::string& isbn);
    std::vector<std::string> getLibrosPrestados() const;
    std::string getFechaRegistro() const; // NUEVO método
};
