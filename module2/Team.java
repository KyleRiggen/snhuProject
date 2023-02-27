package com.gamingroom;

public class Team {

  long id;
  String name;

  /*
   * Constructor with an identifier and name
   */
  public Team(long id, String name) {
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
    return "Team [id=" + id + ", name=" + name + "]";
  }
}
