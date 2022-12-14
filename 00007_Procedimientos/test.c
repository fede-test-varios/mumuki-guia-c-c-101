describe ("Procedimientos") {
  
  before {
    cantidadDeDiasCorridosSinAccidentes = 10;
  } end
  
  it ("dia_bueno") {
    dia_bueno();
    dia_bueno();
    should_int(cantidadDeDiasCorridosSinAccidentes) be equal to(12);
  } end
  
  it ("dia_malo") {
    dia_malo();
    should_int(cantidadDeDiasCorridosSinAccidentes) be equal to(0);
  } end
  
} end