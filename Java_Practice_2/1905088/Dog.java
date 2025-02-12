public class Dog extends Mammal{
    public Dog(String name, int age) {
        super(name, age);
    }
    public String toString()
    {
        return getName()+ " is a Dog, aged " + getAge() ;
    }
}
