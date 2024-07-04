public class Retangulo extends ObjetoGeometrico{
	
	private double lado1;
	private double lado2;
	
	public Retangulo(double lado1, double lado2) {
		this.lado1 = lado1;
		this.lado2 = lado2;
		calcularArea();
		calcularPerimetro();
	}
	
	@Override
	public double calcularArea() {
		area = lado1 * lado2;
		return area;
	}
	
	@Override
	public double  calcularPerimetro() {
		perimetro = 2 * (lado1 + lado2);
		return perimetro;
	}
	

}
