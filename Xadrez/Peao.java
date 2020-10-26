package xadrez;

public class Peao extends Peca{
  public Peao(int[] position, String color){
    super(position, color);
    this.setAbreviacao('P');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
