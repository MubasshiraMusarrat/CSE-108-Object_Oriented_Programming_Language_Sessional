public class GreatWhiteShark extends Fish{
    public GreatWhiteShark(String name, int age) {
        super(name, age);
    }
    public String toString()
    {
        return getName()+ " is a GreatWhiteShark, aged " + getAge() ;
    }
}
