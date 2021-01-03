package view;

import java.util.ArrayList;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;

import javax.swing.*;

public class ExercisesView extends JFrame implements ActionListener {

	private static final long serialVersionUID = 1L;
	private JButton[] exercisesButtons = new JButton[10];  //exercise buttons
	private JLabel infoLabel = new JLabel("Programa��o de Computadores - UDF");
	private JLabel danrleyLabel = new JLabel("Danrley Willyan da Silva Pereira 2355147-0\n");
	
	public ExercisesView() {
		super( "Programa��o de computadores - Avalia��o 03" );
		setLayout( new FlowLayout() );
		
		add(infoLabel);
		add(danrleyLabel);
		
		exercisesButtons[0] = new JButton("Exerc�cio 01");
		exercisesButtons[0].setToolTipText("Este � o Exerc�cio 01");
		exercisesButtons[0].addActionListener(this);
		add(exercisesButtons[0]);
		
		exercisesButtons[3] = new JButton("Exerc�cio 04");
		exercisesButtons[3].setToolTipText("Este � o Exerc�cio 04");
		exercisesButtons[3].addActionListener(this);
		add(exercisesButtons[3]);
		
		exercisesButtons[5] = new JButton("Exerc�cio 06");
		exercisesButtons[5].setToolTipText("Este � o Exerc�cio 06");
		exercisesButtons[5].addActionListener(this);
		add(exercisesButtons[5]);
		
		exercisesButtons[7] = new JButton("Exerc�cio 08");
		exercisesButtons[7].setToolTipText("Este � o Exerc�cio 08");
		exercisesButtons[7].addActionListener(this);
		add(exercisesButtons[7]);
		
		exercisesButtons[9] = new JButton("Exerc�cio 10");
		exercisesButtons[9].setToolTipText("Este � o Exerc�cio 10");
		exercisesButtons[9].addActionListener(this);
		add(exercisesButtons[9]);
		
		
	}
	
	@Override
	public void actionPerformed( ActionEvent ae ) {
		String action = ae.getActionCommand();
		switch(action) {
			case "Exerc�cio 10":
				Integer[] numbers = new Integer[3];
				JOptionPane.showMessageDialog(this, "Informe 3 n�meros inteiros!");
				try {
					numbers[0] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o primeiro n�mero:")
								);
					numbers[1] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o segundo n�mero:")
								);
					numbers[2] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o terceiro n�mero:")
								); 
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise10(numbers));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "N�o foi informado um n�mero inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				};
				break;
			case "Exerc�cio 06":
				ArrayList<Integer> values = new ArrayList<Integer>();
				JOptionPane.showMessageDialog(this, "Valores para c�lculo de m�dia aritm�tica, valor negativo sai e calcula a m�dia.");
				try {
					do {
						values.add( 
								Integer.parseInt( 
											JOptionPane.showInputDialog(this, "Informe o valor n�mero "+
												values.size()
												+":"
											)
								)
						);
					} while(values.get( values.size()-1 ).intValue() > 0);
					values.remove(values.size()-1); //remove o n�mero negativo
					JOptionPane.showMessageDialog(this, "M�DIA ARITM�TICA: "+ api.ExercisesAPI.Exercise06(values));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "N�o foi informado um n�mero inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				}
				break;
			case "Exerc�cio 08":
				JOptionPane.showMessageDialog(this, "N�mero impares entre 100 e 200:\n" + api.ExercisesAPI.Exercise08());
				break;
			case "Exerc�cio 04":
				float[] vetor1 = {2, 99, 44, 23, 44, 976, 23};
				float[] vetor2 = {21, 299, 344, 823, 34, 76};
				JOptionPane.showMessageDialog(this, "Soma de dois vetores:\n" + api.ExercisesAPI.Exercise04(vetor1, vetor2));
				break;
			case "Exerc�cio 01":
				Float[] vetor = new Float[5];
				JOptionPane.showMessageDialog(this, "Informe 5 n�meros!");
				try {
					vetor[0] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o primeiro n�mero:")
								);
					vetor[1] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o segundo n�mero:")
								);
					vetor[2] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o terceiro n�mero:")
								); 
					vetor[3] = Float.parseFloat( 
							JOptionPane.showInputDialog(this, "Informe o quarto n�mero:")
					);
					vetor[4] = Float.parseFloat( 
							JOptionPane.showInputDialog(this, "Informe o quinto n�mero:")
					);
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise01(vetor));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "N�o foi informado um n�mero inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				};
				break;
				
		}
	}
}

























