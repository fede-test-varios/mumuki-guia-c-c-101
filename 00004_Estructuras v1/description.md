Las estructuras nos permiten crear modelos en c.
Podemos crear una `struct` de la siguiente manera:

```c
typedef struct {
    char* nombre;
    char* apellido;
    char* fechaDeNacimiento;//DD/MM/AAAA
} t_persona;
```

Primero hay que crear un variable de tipo de estructura.

```c
t_persona felipe;
```
Para asignarle valores utilizamos el operador `.` de la siguiente manera.
`nombreDeVariable.campoDeEstructura = valor`.

Crear una variable `persona`, que sea de tipo t_persona con nombre y apellido Facundo Gonzalez.
Nacido el 10 de Enero de 1996.
