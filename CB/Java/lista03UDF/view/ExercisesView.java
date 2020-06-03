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
		super( "Programação de computadores - Avaliação 03" );
		setLayout( new FlowLayout() );
		
		exercisesButtons[5] = new JButton("Exercício 06");
		exercisesButtons[5].setToolTipText("Este é o Exercício 06");
		exercisesButtons[5].addActionListener(this);
		add(exercisesButtons[5]);
		
		exercisesButtons[9] = new JButton("Exercício 10");
		exercisesButtons[9].setToolTipText("Este é o Exercício 10");
		exercisesButtons[9].addActionListener(this);
		add(exercisesButtons[9]);
		
		
	}
	
	@Override
	public void actionPerformed( ActionEvent ae ) {
		String action = ae.getActionCommand();
		switch(action) {
			case "Exercício 10":
				Integer[] numbers = new Integer[3];
				JOptionPane.showMessageDialog(this, "Informe 3 números inteiros!");
				try {
					numbers[0] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o primeiro número:")
								);
					numbers[1] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o segundo número:")
								);
					numbers[2] = Integer.parseInt( 
										JOptionPane.showInputDialog(this, "Informe o terceiro número:")
								); 
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise10(numbers));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "Não foi informado um número inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				};
			case "Exercício 06":
				ArrayList<Integer> values = new ArrayList<Integer>();
				JOptionPane.showMessageDialog(this, "Valores para cálculo de média aritmética, valor negativo sari e calcula a média.");
				try {
					do {
						values.add( 
								Integer.parseInt( 
											JOptionPane.showInputDialog(this, "Informe o valor número "+
												values.size()
												+":"
											)
								)
						);
					} while(values.get( values.size()-1 ).intValue() > 0);
					values.remove(values.size()-1); //remove o número negativo
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise06(values));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "Não foi informado um número inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				}
		}
	}
}
