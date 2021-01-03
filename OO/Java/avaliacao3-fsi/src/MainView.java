

import javax.swing.JFrame;

import view.ExercisesView;

public class MainView {
	
	public static void main(String[] args)  {
		// TODO Auto-generated method stub
		ExercisesView mainView = new ExercisesView(); //cria a main view
		mainView.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		mainView.setSize(300, 300);
		mainView.setVisible(true);
	}

}
