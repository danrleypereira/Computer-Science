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
	private JLabel infoLabel = new JLabel("Programação de Computadores - UDF");
	private JLabel danrleyLabel = new JLabel("Danrley Willyan da Silva Pereira 2355147-0\n");
	
	public ExercisesView() {
		super( "Programação de computadores - Avaliação 03" );
		setLayout( new FlowLayout() );

		add(infoLabel);
		add(danrleyLabel);
		
		exercisesButtons[0] = new JButton("Exercício 01");
		exercisesButtons[0].setToolTipText("Este é o Exercício 01");
		exercisesButtons[0].addActionListener(this);
		add(exercisesButtons[0]);
		
		exercisesButtons[3] = new JButton("Exercício 04");
		exercisesButtons[3].setToolTipText("Este é o Exercício 04");
		exercisesButtons[3].addActionListener(this);
		add(exercisesButtons[3]);
		
		exercisesButtons[5] = new JButton("Exercício 06");
		exercisesButtons[5].setToolTipText("Este é o Exercício 06");
		exercisesButtons[5].addActionListener(this);
		add(exercisesButtons[5]);
		
		exercisesButtons[7] = new JButton("Exercício 08");
		exercisesButtons[7].setToolTipText("Este é o Exercício 08");
		exercisesButtons[7].addActionListener(this);
		add(exercisesButtons[7]);
		
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
				break;
			case "Exercício 06":
				ArrayList<Integer> values = new ArrayList<Integer>();
				JOptionPane.showMessageDialog(this, "Valores para cálculo de média aritmética, valor negativo sai e calcula a média.");
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
					JOptionPane.showMessageDialog(this, "MÉDIA ARITMÉTICA: "+ api.ExercisesAPI.Exercise06(values));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "Não foi informado um número inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				}
				break;
			case "Exercício 08":
				JOptionPane.showMessageDialog(this, "Número impares entre 100 e 200:\n" + api.ExercisesAPI.Exercise08());
				break;
			case "Exercício 04":
				float[] vetor1 = {2, 99, 44, 23, 44, 976, 23};
				float[] vetor2 = {21, 299, 344, 823, 34, 76};
				JOptionPane.showMessageDialog(this, "Soma de dois vetores:\n" + api.ExercisesAPI.Exercise04(vetor1, vetor2));
				break;
			case "Exercício 01":
				Float[] vetor = new Float[5];
				JOptionPane.showMessageDialog(this, "Informe 5 números!");
				try {
					vetor[0] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o primeiro número:")
								);
					vetor[1] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o segundo número:")
								);
					vetor[2] = Float.parseFloat( 
										JOptionPane.showInputDialog(this, "Informe o terceiro número:")
								); 
					vetor[3] = Float.parseFloat( 
							JOptionPane.showInputDialog(this, "Informe o quarto número:")
					);
					vetor[4] = Float.parseFloat( 
							JOptionPane.showInputDialog(this, "Informe o quinto número:")
					);
					JOptionPane.showMessageDialog(this, api.ExercisesAPI.Exercise01(vetor));
				} catch (java.lang.NumberFormatException e) {
					JOptionPane.showMessageDialog(this, "Não foi informado um número inteiro!", "Errou", 
							JOptionPane.ERROR_MESSAGE);
				};
				break;
				
		}
	}
}

























