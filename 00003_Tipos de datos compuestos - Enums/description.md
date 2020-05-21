Tambien tenemos tipos de datos compuestos, como:

- enums

Los **enums** son tipos de datos enumerables. La asignacion de los numeros arranca desde 0 de izquierda a derecha en la definicion. _Salvo que se desee cambiar el valor de inicio del enum._ 

AL momento de definirlo se hace de la siguiente manera:

```c
  enum nombreDelEnum {nombreDeLosEnums}
```

Por ejemplo, queremos definir los meses del año y los dias de semana.

```c
  enum mascotas{PERRO,GATO,COBALLO,CONEJO};
```

En este ejemplo, `PERRO` tiene el valor 0, `GATO` el valor 1, ...

Esto sirve mucho para que el codigo quede mas declarativo.

Hacer un enums que contenga todos meses y otro que tenga los dias. Este ultimo que arranque con el valor 1, dejando a martes con el valor 2, miercoles con el 3, ...

