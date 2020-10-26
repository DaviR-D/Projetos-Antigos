package xadrez;

public class Rei extends Peca{
  public Rei(int[] position, String color){
    super(position, color);
    this.setAbreviacao('Re');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
