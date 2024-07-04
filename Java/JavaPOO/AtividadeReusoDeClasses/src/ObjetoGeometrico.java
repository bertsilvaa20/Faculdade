public class ObjetoGeometrico {
	
	protected double area;
	protected double perimetro;
	
	public ObjetoGeometrico() {
		this.area = 0.0;
		this.perimetro = 0.0;
	}
	
	public void mostrarDados() {
		System.out.println("Área: " + area);
		System.out.println("Perímetro: " + perimetro);
	}
	
	public double calcularArea() {
		return area;
	}
	
	public double calcularPerimetro() {
		return perimetro;
	}

}
