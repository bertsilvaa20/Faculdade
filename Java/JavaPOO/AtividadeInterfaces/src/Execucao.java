
public class Execucao {
	
	public static void main(String[] args) {
		
		Aviao aviao = new Aviao("Boing", 4);
		Carro carro = new Carro("Fiat Uno", 75);
		Balao balao = new Balao("Balão da Alegria", 50);
		Bicicleta bicicleta = new Bicicleta("BMX", 72);
		
		System.out.println();
		
		carro.info();
		carro.ligarMotor();
		carro.estaParado();
		carro.abastecer(10);
		carro.embrear();
		carro.curvarEsquerda(20);
		carro.curvarDireita(60);
		carro.estacionar();
		
		System.out.println();
		
		aviao.info();
		aviao.ligarMotor();
		aviao.abastecer(10);
		aviao.curvarDireita(90);
		aviao.curvarEsquerda(60);
		
		System.out.println();
		
		balao.info();
		balao.subir(50);
		balao.descer(30);
		balao.largarPeso(30);
		balao.aquecerAr(30);
		balao.aquecerAr(20);
		
		System.out.println();
		
		bicicleta.info();
		bicicleta.pedalar();
		bicicleta.curvarDireita(30);
		bicicleta.curvarEsquerda(60);
		bicicleta.estacionar();
		
	}

}
