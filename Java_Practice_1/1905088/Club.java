import sun.security.util.ArrayUtil;

public class Club {
    private int id;
    private String name;
    private Player[] players;
    int playerCount=0;
    // add your code here

	// you are not allowed to write any other constructor
    public Club() {
        this.players = new Player[11];
    }

	public double getSalary() {
        double total = 0;
        for (int i = 0; i < playerCount; i++) {
            total += players[i].getSalary();
        }
        return total;
    }
	
	// add your code here
    void setId(int id){
        this.id=id;
    }
    void setName(String name){
        this.name=name;
    }
    void addPlayer(Player a){

        this.players[playerCount]=a;
        this.playerCount++;
    }
    int getId(){
        return this.id;
    }
    String getName(){
        return this.name;
    }
    Player getMaxSalaryPlayer(){
        Player maxSalary=this.players[0];
        for(int i=0;i<this.playerCount-1;i++){
            if(players[i].getSalary()>players[i+1].getSalary()){
                maxSalary=players[i];
            }
        }
        return maxSalary;
    }
}