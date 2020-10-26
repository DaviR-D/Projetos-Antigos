package xadrez;

public class Cavalo extends Peca{
  public Cavalo(int[] position, String color){
    super(position, color);
    this.setAbreviacao('C');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
