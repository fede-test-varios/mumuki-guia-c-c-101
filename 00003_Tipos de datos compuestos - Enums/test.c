describe ("Meses") {
  it ("Enero debe ser 0") {
    should_int(ENERO) be equal to(0);
  } end
  it ("Febrero debe ser 1") {
    should_int(FEBRERO) be equal to(1);
  } end
  it ("Marzo debe ser 2") {
    should_int(ENERO) be equal to(2);
  } end
  it ("Abril debe ser 3") {
    should_int(ABRIL) be equal to(3);
  } end
  it ("Diciembre") {
    should_int(DICIEMBRE) be equal to(11);
  } end
} end