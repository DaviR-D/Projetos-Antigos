package xadrez;

public class Torre extends Peca{
  public Torre(int[] position, String color){
    super(position, color);
    this.setAbreviacao('T');
  }

  public void movement(int[] position){
    this.setPosition(position);
  }
}
