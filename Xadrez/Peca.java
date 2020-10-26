package xadrez;

public abstract class Peca {
  private char abreviacao;
  private String color;
  private Boolean inGame;
  private int[] position;

  public Peca(int[] position, String color){
    this.position = position;
    this.color = color;
    this.abreviacao = ' ';
    this.inGame = true;
  }

  public Boolean isActive(){
    return this.inGame;
  }

  public void capture(){
    this.inGame = false;
  }

  public char getAbreviacao(){
    return this.abreviacao;
  }

  public void setAbreviacao(char abreviacao){
    this.abreviacao = abreviacao;
  }

  public String getColor(){
    return this.color;
  }

  public void setColor(String color){
    this.color = color;
  }

  public int[] getPosition(){
    return this.position;
  }

  public void setPosition(int[] position){
    this.position[0] = position[0];
    this.position[1] = position[1];
  }

  public abstract void movement(int[] position);

}
