package api;

import java.util.ArrayList;
import java.util.Arrays;
import javax.swing.JOptionPane;

public class ExercisesAPI {
	
	public static String Exercise10( Integer[] numbers ) {
		Arrays.sort(numbers);
		
		return "MAIOR: " + numbers[2] + "\nMENOR: " + numbers[0];
	}
	
	public static int Exercise06( ArrayList<Integer> numbers ) {
		int sum = 0;
		for (int i = 0; i < (numbers.size()); i++) {
			sum += numbers.get(i).intValue();
		}
		
		return sum/numbers.size();
	}
	
	public static String Exercise08() {
		String stringReturn = "";
		for(int i=1; i<200; i++) {
			if (i%9 == 0) stringReturn += "\n"; 
			stringReturn += (i++ + ", ");
		}
		return stringReturn;
	}
	
	public static String Exercise04(float[] vetor1, float[] vetor2) {
		String stringReturn = "";
		int lenghtVector = vetor1.length > vetor2.length ? vetor1.length : vetor2.length; 
		Float[] vetor3 = new Float[lenghtVector];
		for(int i=0; i<lenghtVector; i++) {
			try {
				vetor3[i] = vetor1[i]+vetor2[i];
				stringReturn += ( vetor1[i] + " + " + vetor2[i] + " = " + vetor3[i] + "\n");
			} catch (java.lang.ArrayIndexOutOfBoundsException e) {
				JOptionPane.showMessageDialog(null, "Vetores têm tamanhos diferentes;", "", JOptionPane.ERROR_MESSAGE);
			}
		}
		return stringReturn;
	}
	
	public static String Exercise01(Float[] vetor1) {
		String stringReturn = "";
		Float[] vetor2 = new Float[vetor1.length];
		for(int i=0; i<vetor1.length; i++) {
			try {
				vetor2[i] = vetor1[i]*2;
				stringReturn += ( vetor1[i] + " * 2 = " + vetor2[i] + "\n");
			} catch (java.lang.ArrayIndexOutOfBoundsException e) {
				JOptionPane.showMessageDialog(null, "Vetores têm tamanhos diferentes;", "", JOptionPane.ERROR_MESSAGE);
			}
		}
		return stringReturn;
	}
}
