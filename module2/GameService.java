package com.gamingroom;

import java.util.ArrayList;
import java.util.List;

/**
 * A singleton service for the game engine
 */
public class GameService {

  /**
   * A list of the active games
   */
  private static List<Game> games = new ArrayList<Game>();

  /*
   * Holds the next game identifier
   */
  private static long nextGameId = 1;

  private static GameService instance = new GameService();

  private void GameService() {}

  public static GameService getInstance() {
    return instance;
  }

  public Game addGame(String name) {
    // a local game instance
    Game game = null;

    // if Game with name already exists, simply return the existing instance
    // without adding anything to our games datastructure.
    for (Game currentGame : games) {
      if (currentGame.getName().equals(name)) {
        return currentGame;
      }
    }

    // if not found, make a new game instance and add to list of games
    if (game == null) {
      game = new Game(nextGameId++, name);
      games.add(game);
    }

    // return the new/existing game instance to the caller
    return game;
  }

  Game getGame(int index) {
    return games.get(index);
  }

  public Game getGame(long id) {
    // a local game instance
    Game game = null;

    // Parse the current list of games. If one already exists
    // with this id, return that Game instance.
    for (Game currentGame : games) {
      if (currentGame.getId() == id) {
        game = currentGame;
      }
    }

    return game;
  }

  public Game getGame(String name) {
    // a local game instance
    Game game = null;

    // Parse the current list of games. If one already exists
    // with this name, return that Game instance.
    for (Game currentGame : games) {
      if (currentGame.getName().equals(name)) {
        game = currentGame;
      }
    }

    return game;
  }

  public int getGameCount() {
    return games.size();
  }
}
