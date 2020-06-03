package view;

import api.ExercisesAPI;

import java.util.ArrayList;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;

import javax.swing.*;

public class ExercisesView extends JFrame implements ActionListener {

	private static final long serialVersionUID = 1L;
	private JButton[] exercisesButtons = new JButton[10];  //exercise label
	
	public ExercisesView() {
		super( "Programa��o de computadores - Avalia��o 03" );
		setLayout( new FlowLayout() );
		
		exercisesButtons[5] = new JButton("Exerc�cio 06");
		exercisesButtons[5].setToolTipText("Este � o Exerc�cio 06");
		exercisesButtons[5].addActionListener(this);
		add(exercisesButtons[5]);
		
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
			case "Exerc�cio 06":
				ArrayList<Integer> values = new ArrayList<Integer>();
				JOptionPane.showMessageDialog(this, "Valores para c�lculo de m�dia aritm�tica, valor negativo sari e calcula a m�dia.");
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
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise06(values));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "N�o foi informado um n�mero inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				}
		}
	}
}
