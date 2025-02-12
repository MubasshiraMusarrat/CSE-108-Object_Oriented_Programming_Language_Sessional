public class Player {
    private int number;
    private String name;
    private double salary;

	// you are not allowed to write any other constructor
    public Player(int number, String name) {
        setNumber(number);
        setName(name);
    }
	
	// add your code here
    void setSalary(double salary){
        this.salary=salary;
    }
    void setName(String name){
        this.name=name;
    }
    void setNumber(int number ){
        this.number=number;
    }
    double getSalary(){
        return this.salary;
    }
    String getName(){
        return this.name;
    }
}
