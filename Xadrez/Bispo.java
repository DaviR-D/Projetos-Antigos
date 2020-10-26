package xadrez;

public class Bispo extends Peca{
  public Bispo(int[] position, String color){
    super(position, color);
    this.setAbreviacao('B');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
