public class Circulo extends ObjetoGeometrico{
	
	private double xCentro;
	private double yCentro;
	private double raio;
	
	public Circulo(double xCentro, double yCentro, double raio) {
		this.xCentro = xCentro;
		this.yCentro = yCentro;
		this.raio = raio;
		calcularArea();
		calcularPerimetro();
		
	}
	
	@Override
	public double calcularArea() {
		area = Math.PI * raio * raio;
		return area;
	}
	
	@Override
	public double calcularPerimetro() {
		perimetro = 2 * Math.PI * raio;
		return perimetro;
	}
	
	
	
	

}
