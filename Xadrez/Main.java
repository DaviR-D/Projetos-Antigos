package xadrez;

public class Main{
  public static void main(String[] args) {
    int[] posicao = new int[2];
    posicao[0] = 1;
    posicao[1] = 5;
    Peca p = new Torre(posicao, "Preto");

    System.out.println(p.getPosition()[0]);
    System.out.println(p.getPosition()[1]);
    System.out.println(p.getColor());
    System.out.println(p.getAbreviacao());
    System.out.println(p.isActive());
  }
}
