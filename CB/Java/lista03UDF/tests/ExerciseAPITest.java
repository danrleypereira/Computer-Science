package tests;

import api.ExercisesAPI;

import static org.junit.jupiter.api.Assertions.*;

import java.util.ArrayList;

import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class ExercisesAPITest {

	
	Integer[] numbers = {5, 7, 6};
	Integer[] numbers1 = {33, 9, 10};
	Integer[] numbers2 = {33, 9, -10};
	Integer[] numbers3 = {-23, 0, -200};
	Integer[] numbers4 = {4433, 889, 2050};
	
	ArrayList<Integer> values = new ArrayList<Integer>();
	
	@BeforeAll
	static void Before() throws Exception {
		
	}

	@AfterAll
	static void tearDownAfterClass() throws Exception {
	}

	@BeforeEach
	void setUp() throws Exception {
	}

	@AfterEach
	void tearDown() throws Exception {
	}

	@Test
	void testExercise10() {
		try {
			ExercisesAPI.Exercise10(numbers);
			ExercisesAPI.Exercise10(numbers1);
			ExercisesAPI.Exercise10(numbers2);
			ExercisesAPI.Exercise10(numbers3);
			ExercisesAPI.Exercise10(numbers4);
		} catch (final Exception e) {
			fail("falhou com a exceção: " + e);
		}
	}

	@Test
	void testExercise06() {
		values.add(Integer.parseInt("15"));
		values.add(Integer.parseInt("15"));
		values.add(Integer.parseInt("30"));
		if(ExercisesAPI.Exercise06(values) != 20) fail("média errada");
	}

}
class ExerciseAPITest {
    
}