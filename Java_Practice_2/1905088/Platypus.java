public class Platypus extends Mammal{
    public Platypus(String name, int age) {
        super(name, age);
    }
    public String toString()
    {
        return getName()+ " is a Platypus, aged " + getAge() ;
    }
}
