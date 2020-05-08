describe ("Chequeo de tipos") {
  it ("cantidadDeAlumnos int") {
    should_int(cantidadDeAlumnos) be equal to(20);
  } end
  it ("saldoBancario float") {
    should_float(saldoBanco) be equal to(19546.50);
  } end
  it ("inicial de nombre") {
    should_char(inicialDelNombre) be equal to('F');
  } end
  it ("longitud de Buenos Aires") {
    should_double(buenosAiresLongitud) be equal to(-58.3772300);
  } end
  it ("latitud de Buenos Aires") {
    should_double(buenosAiresLatitud) be equal to(-34.6131500);
  } end
} end