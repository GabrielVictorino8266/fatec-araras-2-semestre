#include <iostream>

// Definindo uma struct chamada Person
struct Person {
    std::string name;
    int age;
    float height;
};

int main() {
    // Criando uma instância da struct Person
    Person person = {"Alice", 30, 1.75};

    // Criando um ponteiro para a struct
    Person *ptr = &person;

    // Acessando e modificando os membros da struct usando o ponteiro
    ptr->name = "Bob";
    ptr->age = 25;
    ptr->height = 1.80;

    // Exibindo os valores atualizados
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Height: " << person.height << std::endl;

    return 0;
}