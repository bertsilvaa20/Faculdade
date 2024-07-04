import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class TesteInicializacaoManual {
	
	public static void main(String[] args) throws ParseException {
		
		Cinema c1 = new Cinema();
		c1.nome = "Centerplex North Shopping Maracanaú";
		
		Sala s1 = new Sala();
		s1.numero = 1;
		s1.quantidadeDeAssentos = 120;
		s1.is3D = false;
		s1.cinema = c1;
		System.out.println("Sala criada com id "+s1.idSala);
		
		Sala s2 = new Sala();
		s2.numero = 2;
		s2.quantidadeDeAssentos = 160;
		s2.is3D = true;
		s2.cinema = c1;
		System.out.println("Sala criada com id "+s2.idSala);
		
		Filme f1 = new Filme();
		f1.titulo = "Barbie";
		f1.is3D = false;
		f1.genero = "Não sei";
		f1.duracaoEmMinutos = 80;
		f1.classificacaoIndicativa = 12;
		System.out.println("Filme criado com id "+f1.idFilme);
		
		Sessao se1 = new Sessao();
		se1.filme = f1;
		se1.sala = s1;
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm");
		se1.dataHora = sdf.parse("07/08/2023 15:00");
		System.out.println("Sessão criada com id "+se1.idSessao);
		System.out.println(se1.dataHora);
		
		Ingresso i1 = new Ingresso();
		i1.sessao = se1;
		i1.assento = 55;
		i1.isMeiaEntrada = true;
		i1.valor = 20;
		System.out.println("Ingresso criado com id "+i1.idIngresso);
		
	}

}
