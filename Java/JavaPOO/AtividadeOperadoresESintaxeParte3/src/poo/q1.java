package poo;

public class q1{
	  public static void main(String[] args) {
	    int x = 13;
	    int y = 0;

	    while (y != 1) {

	      if (x % 2 == 0) {
	        y = x / 2;
	      } else {
	        y = x * 3 + 1;
	      }

	      if (y != 1) {
	        System.out.print(y + "->");
	        x = y;
	      }

	      else {
	        System.out.print(y + ".");
	      }

	    }
	  }
	}
