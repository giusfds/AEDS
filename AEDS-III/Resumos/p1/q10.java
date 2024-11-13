package p1;
class Filme{}

public class q10 {

  int create (Filme filme){
    // lendo
    arquivo.seek(0);
    int id = arquivo.readint()+1;
    int qnt = arquivo.readint();

    // gravando
    arquivo.seek(0);
    arquivo.write(id);

    arquivo.seek(arquivo.len());
    arquivo.write(' ');
    byte[] b = filme.toByteArray();
    int tam = b.length();
    arquivo.write(tam);
    arquivo.write(b);
    
    return id;
  }
}