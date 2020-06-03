package api;

import java.util.ArrayList;
import java.util.Arrays;

import javax.swing.JOptionPane;

public class ExercisesAPI {
	
	public static String Exercise10( Integer[] numbers ) {
		Arrays.sort(numbers);
		
		return "MAIOR: " + numbers[2] + "\nMENOR: " + numbers[0];
	}
	
	public static String Exercise06( ArrayList<Integer> numbers ) {
		int sum = 0;
		for (int i = 0; i < (numbers.size()); i++) {
			sum += numbers.get(i).intValue();
		}
		
		return "MÉDIA ARITMÉTICA: " + sum/numbers.size() ;
	}
}
