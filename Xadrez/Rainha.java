package xadrez;

public class Rainha extends Peca{
  public Rainha(int[] position, String color){
    super(position, color);
    this.setAbreviacao('Ra');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
