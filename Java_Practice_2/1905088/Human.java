public class Human extends Mammal{
    public Human(String name, int age) {
        super(name, age);
    }
    public String toString()
    {
        return getName()+ " is a Human, aged " + getAge() ;
    }
}
