package com.gamingroom;

public class Game {

  long id;
  String name;

  /**
   * Hide the default constructor to prevent creating empty instances.
   */
  private Game() {}

  /**
   * Constructor with an identifier and name
   */
  public Game(long id, String name) {
    this();
    this.id = id;
    this.name = name;
  }

  /**
   * @return the id
   */
  public long getId() {
    return id;
  }

  /**
   * @return the name
   */
  public String getName() {
    return name;
  }

  @Override
  public String toString() {
    return "Game [id=" + id + ", name=" + name + "]";
  }
}
