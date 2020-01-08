describe ("Chequeo de tipos") {
  it ("cantidadDeAlumnos int") {
    should_int(cantidadDeAlumnos) be equal to(20);
  } end
  it ("saldoBancario float") {
    should_float(saldoBanco) be equal to(19546.50);
  } end
  it ("inicial de nombre") {
    should_char(inicial) be equal to('J');
  } end
} end